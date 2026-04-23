#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PacketStatus.h"
#include "unitysdk/Struct_2_121F5612F01CFD5F.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_261;
class Class_1_EBB10EC01CCC4716_32;
class Class_4_6BD781EAA1CAFD20;
namespace Google::Protobuf { class IMessage; }
namespace System::IO { class MemoryStream; }

#define RPG_CLIENT_NETPACKET_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1924D540)
#define RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19241310)
#define RPG_CLIENT_NETPACKET_GETBODYLEN_OFFSET UNITYSDK_OFFSET(0x1924D350)
#define RPG_CLIENT_NETPACKET_GETCMDID_OFFSET UNITYSDK_OFFSET(0x1923F400)
#define RPG_CLIENT_NETPACKET_GETDATA_OFFSET UNITYSDK_OFFSET(0x1924D430)
#define RPG_CLIENT_NETPACKET_GETHEADLEN_OFFSET UNITYSDK_OFFSET(0x1924D300)
#define RPG_CLIENT_NETPACKET_GETHEADMAGIC_OFFSET UNITYSDK_OFFSET(0x1924D2A0)
#define RPG_CLIENT_NETPACKET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1924D550)
#define RPG_CLIENT_NETPACKET_GETPACKETID_OFFSET UNITYSDK_OFFSET(0x1924D3B0)
#define RPG_CLIENT_NETPACKET_GETPACKETLEN_OFFSET UNITYSDK_OFFSET(0x19235030)
#define RPG_CLIENT_NETPACKET_GETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x1924D420)
#define RPG_CLIENT_NETPACKET_GETRAWDATA_OFFSET UNITYSDK_OFFSET(0x1924D440)
#define RPG_CLIENT_NETPACKET_GETTAILMAGIC_OFFSET UNITYSDK_OFFSET(0x1924D3C0)
#define RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19245970)
#define RPG_CLIENT_NETPACKET_ONNEW_OFFSET UNITYSDK_OFFSET(0x1924D170)
#define RPG_CLIENT_NETPACKET_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1924D180)
#define RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x19240BA0)
#define RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET UNITYSDK_OFFSET(0x1924D630)
#define RPG_CLIENT_NETPACKET_SETCMDID_OFFSET UNITYSDK_OFFSET(0x1923C620)
#define RPG_CLIENT_NETPACKET_SETDATA_OFFSET UNITYSDK_OFFSET(0x1924D690)
#define RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET UNITYSDK_OFFSET(0x1924D5E0)
#define RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET UNITYSDK_OFFSET(0x1924D5D0)
#define RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x1924D6D0)
#define RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET UNITYSDK_OFFSET(0x1924D6B0)
#define RPG_CLIENT_NETPACKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1923C410)

namespace RPG::Client
{
	inline static constexpr unsigned int NetPacket_TypeDefinitionIndex = 39643;

	class NetPacket : public ::System::Object
	{
	public:
		// static const ::System::UInt32 HeadMagic = 0x9D74C714; // 0x0
		// static const ::System::UInt32 TailMagic = 0xD7A152C8; // 0x0
		// static const ::System::UInt16 HeadVersion = 0x1; // 0x0
		// static const ::System::Int32 PacketHeadLen = 0xC; // 0x0
		// static const ::System::Int32 PacketTailLen = 0x4; // 0x0
		::System::IO::MemoryStream* _Head; // 0x10
		::Class_1_EBB10EC01CCC4716_32* _MsgProtoHead; // 0x18
		::Class_4_6BD781EAA1CAFD20* _Body; // 0x20
		::Google::Protobuf::IMessage* _Data; // 0x28
		::Il2CppArray<::System::Byte>* _RawData; // 0x30
		::System::Int32 HeadSize; // 0x38
		::System::UInt16 _CmdID; // 0x3C
		::System::UInt32 _HeadMagic; // 0x40
		::System::UInt32 _BodyLen; // 0x44
		::System::Boolean isInUse; // 0x48
		::System::UInt16 _HeadLen; // 0x4A
		::System::UInt64 _RecvTimeStampMs; // 0x50
		::System::UInt32 _TailMagic; // 0x58
		::System::UInt32 _Seed; // 0x5C
		::System::UInt32 _PacketID; // 0x60
		::System::Int32 BodySize; // 0x64

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

		::System::Void SetPacketID(::System::UInt32 packetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET))(this, packetID);
		}

		::System::Void SetCmdId(::System::UInt16 cmd_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETCMDID_OFFSET))(this, cmd_id);
		}

		::System::Void SetHeadLen(::System::UInt16 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET))(this, len);
		}

		::System::Void SetBodyLen(::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET))(this, len);
		}

		::System::Boolean SetData(::Google::Protobuf::IMessage* data, ::System::UInt32 seed)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETDATA_OFFSET))(this, data, seed);
		}

		::System::Boolean SetRawData(::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 seed)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET))(this, bytes, seed);
		}

		::System::Void SetPacketRecvTimeMs(::System::UInt64 timeStampMs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET))(this, timeStampMs);
		}

		::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET))(this);
		}

		::System::Boolean Serialize(::System::IO::MemoryStream* ms, ::System::IO::MemoryStream* bodyStream, ::Class_0_16E4307DCC419505_261* bodyEncrypter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MemoryStream*, ::System::IO::MemoryStream*, ::Class_0_16E4307DCC419505_261*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET))(this, ms, bodyStream, bodyEncrypter);
		}

		::RPG::Client::PacketStatus Deserialize(::System::ArraySegment_1<::System::Byte> buf, ::Class_0_16E4307DCC419505_261* bodyEncrypter)
		{
			return ((::RPG::Client::PacketStatus(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::Class_0_16E4307DCC419505_261*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET))(this, buf, bodyEncrypter);
		}
	};
}
