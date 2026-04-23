#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_1_1DFB17424E35B05C;
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class FriendBriefData; }

#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88B680)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xA88B840)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_INVITEDATA_OFFSET UNITYSDK_OFFSET(0xA88B820)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88B5B0)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xA88B850)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_INVITEDATA_OFFSET UNITYSDK_OFFSET(0xA88B830)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88B5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentInviteBlock_TypeDefinitionIndex = 58261;

	class MessageContentInviteBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::FriendBriefData* _FriendData_k__BackingField; // 0x18
		::RPG::Client::ChatMessageInviteData* _InviteData_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_1DFB17424E35B05C* inviteMsg, ::System::UInt32 timeStamp, ::System::UInt32 senderUID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DFB17424E35B05C*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK__CTOR_OFFSET))(this, inviteMsg, timeStamp, senderUID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_EQUALS_OFFSET))(this, other);
		}

		::RPG::Client::ChatMessageInviteData* get_InviteData()
		{
			return ((::RPG::Client::ChatMessageInviteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_INVITEDATA_OFFSET))(this);
		}

		::System::Void set_InviteData(::RPG::Client::ChatMessageInviteData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_INVITEDATA_OFFSET))(this, value);
		}

		::RPG::Client::FriendBriefData* get_FriendData()
		{
			return ((::RPG::Client::FriendBriefData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_FRIENDDATA_OFFSET))(this);
		}

		::System::Void set_FriendData(::RPG::Client::FriendBriefData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FriendBriefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_FRIENDDATA_OFFSET))(this, value);
		}
	};
}
