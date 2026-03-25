#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Sockets { class Socket; }

#define RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCLOSE_OFFSET UNITYSDK_OFFSET(0xAB00DD0)
#define RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCONNECT_OFFSET UNITYSDK_OFFSET(0xAB00A20)
#define RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETSENDSTR_OFFSET UNITYSDK_OFFSET(0xAB00C00)
#define RPG_QA_PROFILERSOCKETSENDER_CONNECT_OFFSET UNITYSDK_OFFSET(0xAB00170)
#define RPG_QA_PROFILERSOCKETSENDER_SENDAUTOSAVEPATH_OFFSET UNITYSDK_OFFSET(0xAB00980)
#define RPG_QA_PROFILERSOCKETSENDER_SENDEND_OFFSET UNITYSDK_OFFSET(0xAB008C0)
#define RPG_QA_PROFILERSOCKETSENDER_SENDFILTEREDRECORD_OFFSET UNITYSDK_OFFSET(0xAB00850)
#define RPG_QA_PROFILERSOCKETSENDER_SENDRECORDDIFF_OFFSET UNITYSDK_OFFSET(0xAB007C0)
#define RPG_QA_PROFILERSOCKETSENDER_SENDRECORD_OFFSET UNITYSDK_OFFSET(0xAB00410)
#define RPG_QA_PROFILERSOCKETSENDER_SEND_OFFSET UNITYSDK_OFFSET(0xAB00630)
#define RPG_QA_PROFILERSOCKETSENDER_SETCONFIGTITLE_OFFSET UNITYSDK_OFFSET(0xAB009D0)
#define RPG_QA_PROFILERSOCKETSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB00E80)

namespace RPG::QA
{
	inline static constexpr unsigned int ProfilerSocketSender_TypeDefinitionIndex = 41860;

	class ProfilerSocketSender : public ::System::Object
	{
	public:
		static ::System::Net::Sockets::Socket** StaticGet__commonSocketSender()
		{
			return (::System::Net::Sockets::Socket**)Il2CppClass::FromTypeDefinitionIndex(ProfilerSocketSender_TypeDefinitionIndex)->GetStaticField(0x46E10);
		}
		::System::Net::Sockets::Socket* _socketSender; // 0x10
		::System::Int32 _port; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER__CTOR_OFFSET))(this);
		}

		::System::Boolean Connect(::System::String* host, ::System::String* deviceIp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_CONNECT_OFFSET))(this, host, deviceIp);
		}

		::System::Boolean SendRecord(::System::String* label)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDRECORD_OFFSET))(this, label);
		}

		::System::Boolean SendRecordDiff(::System::String* startLabel, ::System::String* endLabel, ::System::String* newLabel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDRECORDDIFF_OFFSET))(this, startLabel, endLabel, newLabel);
		}

		::System::Boolean SendFilteredRecord(::System::String* label, ::System::String* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDFILTEREDRECORD_OFFSET))(this, label, context);
		}

		::System::Boolean SendEnd(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDEND_OFFSET))(this, path);
		}

		::System::Boolean SendAutoSavePath(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDAUTOSAVEPATH_OFFSET))(this, path);
		}

		::System::Boolean SetConfigTitle(::System::String* configTitle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SETCONFIGTITLE_OFFSET))(this, configTitle);
		}

		::System::Boolean Send(::System::String* str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SEND_OFFSET))(this, str);
		}

		static ::System::Boolean CommonSocketConnect(::System::String* host, ::System::Int32 port)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCONNECT_OFFSET))(host, port);
		}

		static ::System::Boolean CommonSocketSendStr(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETSENDSTR_OFFSET))(str);
		}

		static ::System::Void CommonSocketClose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCLOSE_OFFSET))();
		}
	};
}
