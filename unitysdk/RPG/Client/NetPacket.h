#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PacketStatus.h"
#include "unitysdk/Struct_2_121F5612F01CFD5F.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_1_21DCD4640D389503_43;
class Class_4_6BD781EAA1CAFD20;
namespace Google::Protobuf { class IMessage; }
namespace System::IO { class MemoryStream; }

#define RPG_CLIENT_NETPACKET_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1EAE0FE0)
#define RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EAD7FD0)
#define RPG_CLIENT_NETPACKET_GETBODYLEN_OFFSET UNITYSDK_OFFSET(0x1EAE0E30)
#define RPG_CLIENT_NETPACKET_GETCMDID_OFFSET UNITYSDK_OFFSET(0x1EAC9D00)
#define RPG_CLIENT_NETPACKET_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EAE0F10)
#define RPG_CLIENT_NETPACKET_GETHEADLEN_OFFSET UNITYSDK_OFFSET(0x1EAE0DE0)
#define RPG_CLIENT_NETPACKET_GETHEADMAGIC_OFFSET UNITYSDK_OFFSET(0x1EAE0D80)
#define RPG_CLIENT_NETPACKET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1EAE0FF0)
#define RPG_CLIENT_NETPACKET_GETPACKETID_OFFSET UNITYSDK_OFFSET(0x1EAE0E90)
#define RPG_CLIENT_NETPACKET_GETPACKETLEN_OFFSET UNITYSDK_OFFSET(0x1EADABB0)
#define RPG_CLIENT_NETPACKET_GETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x1EAE0F00)
#define RPG_CLIENT_NETPACKET_GETRAWDATA_OFFSET UNITYSDK_OFFSET(0x1EAE0F20)
#define RPG_CLIENT_NETPACKET_GETTAILMAGIC_OFFSET UNITYSDK_OFFSET(0x1EAE0EA0)
#define RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EAC9CF0)
#define RPG_CLIENT_NETPACKET_ONNEW_OFFSET UNITYSDK_OFFSET(0x1EAE0C50)
#define RPG_CLIENT_NETPACKET_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1EAE0C60)
#define RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EAD75B0)
#define RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET UNITYSDK_OFFSET(0x1EAE10D0)
#define RPG_CLIENT_NETPACKET_SETCMDID_OFFSET UNITYSDK_OFFSET(0x1EAC89E0)
#define RPG_CLIENT_NETPACKET_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EAE1130)
#define RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET UNITYSDK_OFFSET(0x1EAE1080)
#define RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET UNITYSDK_OFFSET(0x1EAE1070)
#define RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x1EAE1170)
#define RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET UNITYSDK_OFFSET(0x1EAE1150)
#define RPG_CLIENT_NETPACKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC87D0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetPacket_TypeDefinitionIndex = 42241;

	class NetPacket : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HeadMagic = 0x9D74C714; // 0x0
		// static const ::System::UInt32 TailMagic = 0xD7A152C8; // 0x0
		// static const ::System::UInt16 HeadVersion = 0x1; // 0x0
		// static const ::System::Int32 PacketHeadLen = 0xC; // 0x0
		// static const ::System::Int32 PacketTailLen = 0x4; // 0x0
		::Class_1_21DCD4640D389503_43* _MsgProtoHead; // 0x10
		::Class_4_6BD781EAA1CAFD20* _Body; // 0x18
		::System::IO::MemoryStream* _Head; // 0x20
		::Google::Protobuf::IMessage* _Data; // 0x28
		::Il2CppArray<::System::Byte>* _RawData; // 0x30
		::System::Boolean isInUse; // 0x38
		::System::UInt16 _CmdID; // 0x3A
		::System::UInt32 _TailMagic; // 0x3C
		::System::UInt16 _HeadLen; // 0x40
		::System::UInt32 _HeadMagic; // 0x44
		::System::Int32 HeadSize; // 0x48
		::System::UInt32 _Seed; // 0x4C
		::System::UInt32 _PacketID; // 0x50
		::System::UInt64 _RecvTimeStampMs; // 0x58
		::System::Int32 BodySize; // 0x60
		::System::UInt32 _BodyLen; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET__CTOR_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ONNEW_OFFSET))(this);
		}

		::System::UInt32 GetHeadMagic()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETHEADMAGIC_OFFSET))(this);
		}

		::System::UInt16 GetCmdId()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETCMDID_OFFSET))(this);
		}

		::System::UInt16 GetHeadLen()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETHEADLEN_OFFSET))(this);
		}

		::System::UInt32 GetBodyLen()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETBODYLEN_OFFSET))(this);
		}

		::System::UInt32 GetPacketID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETPACKETID_OFFSET))(this);
		}

		::System::UInt32 GetTailMagic()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETTAILMAGIC_OFFSET))(this);
		}

		::System::UInt64 GetPacketRecvTimeMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETPACKETRECVTIMEMS_OFFSET))(this);
		}

		::Google::Protobuf::IMessage* GetData()
		{
			return ((::Google::Protobuf::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETDATA_OFFSET))(this);
		}

		::Struct_2_121F5612F01CFD5F GetRawData()
		{
			return ((::Struct_2_121F5612F01CFD5F(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETRAWDATA_OFFSET))(this);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_CLEARDATA_OFFSET))(this);
		}

		::System::Int64 GetLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETLENGTH_OFFSET))(this);
		}

		::System::Int32 GetPacketLen()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETPACKETLEN_OFFSET))(this);
		}

		::System::Void SetPacketID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET))(this, a1);
		}

		::System::Void SetCmdId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETCMDID_OFFSET))(this, a1);
		}

		::System::Void SetHeadLen(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET))(this, a1);
		}

		::System::Void SetBodyLen(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET))(this, a1);
		}

		::System::Boolean SetData(::Google::Protobuf::IMessage* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetRawData(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetPacketRecvTimeMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET))(this, a1);
		}

		::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET))(this);
		}

		::System::Boolean Serialize(::System::IO::MemoryStream* a1, ::System::IO::MemoryStream* a2, ::Class_0_16E4307DCC419505_301* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MemoryStream*, ::System::IO::MemoryStream*, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PacketStatus Deserialize(::System::ArraySegment_1<::System::Byte> a1, ::Class_0_16E4307DCC419505_301* a2)
		{
			return ((::RPG::Client::PacketStatus(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
