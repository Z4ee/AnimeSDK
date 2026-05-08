#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Sockets { class TcpClient; }

#define ADBCONNECTION_CONNECT_OFFSET UNITYSDK_OFFSET(0x1BAABFF0)
#define ADBCONNECTION_CONVERTTOINT32_OFFSET UNITYSDK_OFFSET(0x1BAAC510)
#define ADBCONNECTION_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1BAAC650)
#define ADBCONNECTION_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BAAC5A0)
#define ADBCONNECTION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BAABF00)
#define ADBCONNECTION_PLAYPREBAKE_OFFSET UNITYSDK_OFFSET(0x1BAACE20)
#define ADBCONNECTION_PLAY_OFFSET UNITYSDK_OFFSET(0x1BAAC770)
#define ADBCONNECTION_STOP_OFFSET UNITYSDK_OFFSET(0x1BAAD120)
#define ADBCONNECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAAD380)
#define ADBCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAABFE0)

inline static constexpr unsigned int ADBConnection_TypeDefinitionIndex = 36466;

class ADBConnection : public ::System::Object
{
public:
	static ::ADBConnection** StaticGet_instance()
	{
		return (::ADBConnection**)Il2CppClass::FromTypeDefinitionIndex(ADBConnection_TypeDefinitionIndex)->GetStaticField(0x27190);
	}
	static ::System::Int32* StaticGet_localPort()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ADBConnection_TypeDefinitionIndex)->GetStaticField(0x88D0);
	}
	static ::System::Int32* StaticGet_targetPort()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ADBConnection_TypeDefinitionIndex)->GetStaticField(0x88D4);
	}
	// static const ::System::String* NAME; // 0x0
	// static const ::System::Int32 HEAD = 0x12345678; // 0x0
	// static const ::System::Int32 CMD_CLIENT_NAME = 0x1; // 0x0
	// static const ::System::Int32 CMD_PLAY = 0x10; // 0x0
	// static const ::System::Int32 CMD_STOP = 0x11; // 0x0
	// static const ::System::Int32 CMD_PREBAKE = 0x15; // 0x0
	// static const ::System::Int32 CMD_CONTENT_HE = 0x20; // 0x0
	::System::Net::Sockets::TcpClient* client; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCONNECTION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADBCONNECTION__CCTOR_OFFSET))();
	}

	static ::ADBConnection* get_Instance()
	{
		return ((::ADBConnection*(*)())((::PBYTE)hIl2Cpp + ADBCONNECTION_GET_INSTANCE_OFFSET))();
	}

	::System::Boolean Connect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCONNECTION_CONNECT_OFFSET))(this);
	}

	::System::Boolean Play(::System::String* data, ::System::String* name, ::System::Int32 duration, ::System::Int32 amplitude, ::System::Int32 frequency, ::System::Int32 loop, ::System::Int32 interval)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADBCONNECTION_PLAY_OFFSET))(this, data, name, duration, amplitude, frequency, loop, interval);
	}

	::System::Boolean PlayPrebake(::System::Int32 prebakeId, ::System::Int32 amp)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADBCONNECTION_PLAYPREBAKE_OFFSET))(this, prebakeId, amp);
	}

	::System::Boolean Stop()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCONNECTION_STOP_OFFSET))(this);
	}

	::System::Void Disconnect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCONNECTION_DISCONNECT_OFFSET))(this);
	}

	static ::System::Int32 ConvertToInt32(::Il2CppArray<::System::Byte>* bytes)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ADBCONNECTION_CONVERTTOINT32_OFFSET))(bytes);
	}

	static ::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 value)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ADBCONNECTION_GETBYTES_OFFSET))(value);
	}
};
