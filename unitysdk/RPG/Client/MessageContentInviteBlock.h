#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_1_EAA93C4FF12A6990;
namespace RPG::Client { class ChatMessageExtendData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class FriendBriefData; }

#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6A0980)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xD6A0B80)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_INVITEDATA_OFFSET UNITYSDK_OFFSET(0xD6A0B60)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD6A0870)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET UNITYSDK_OFFSET(0xD6A0B20)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xD6A0B90)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_INVITEDATA_OFFSET UNITYSDK_OFFSET(0xD6A0B70)
#define RPG_CLIENT_MESSAGECONTENTINVITEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A08C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentInviteBlock_TypeDefinitionIndex = 63250;

	class MessageContentInviteBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::FriendBriefData* _FriendData_k__BackingField; // 0x18
		::RPG::Client::ChatMessageInviteData* _InviteData_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_EAA93C4FF12A6990* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EAA93C4FF12A6990*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::ChatMessageExtendData* RPG_Client_IMessageExtendDataGetter_GetExtendData()
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET))(this);
		}

		::RPG::Client::ChatMessageInviteData* get_InviteData()
		{
			return ((::RPG::Client::ChatMessageInviteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_INVITEDATA_OFFSET))(this);
		}

		::System::Void set_InviteData(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_INVITEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FriendBriefData* get_FriendData()
		{
			return ((::RPG::Client::FriendBriefData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_GET_FRIENDDATA_OFFSET))(this);
		}

		::System::Void set_FriendData(::RPG::Client::FriendBriefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FriendBriefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTINVITEBLOCK_SET_FRIENDDATA_OFFSET))(this, a1);
		}
	};
}
