#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_1_1CBA230307F9C289_1;
namespace RPG::Client { class ChatMessageExtendData; }
namespace RPG::Client { class ChatMessageSocialPlayData; }
namespace RPG::Client { class FriendBriefData; }

#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD699A60)
#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_GET_FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xD699C20)
#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_GET_SOCIALPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD699D00)
#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD699990)
#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET UNITYSDK_OFFSET(0xD699CC0)
#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_SET_SOCIALPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD699D10)
#define RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6999E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentSocialPlayBlock_TypeDefinitionIndex = 63251;

	class MessageContentSocialPlayBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::ChatMessageSocialPlayData* _SocialPlayData_k__BackingField; // 0x18
		::System::UInt32 _SenderUID; // 0x20

		::System::Void _ctor(::Class_1_1CBA230307F9C289_1* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_1*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::ChatMessageExtendData* RPG_Client_IMessageExtendDataGetter_GetExtendData()
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_RPG_CLIENT_IMESSAGEEXTENDDATAGETTER_GETEXTENDDATA_OFFSET))(this);
		}

		::RPG::Client::ChatMessageSocialPlayData* get_SocialPlayData()
		{
			return ((::RPG::Client::ChatMessageSocialPlayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_GET_SOCIALPLAYDATA_OFFSET))(this);
		}

		::System::Void set_SocialPlayData(::RPG::Client::ChatMessageSocialPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageSocialPlayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_SET_SOCIALPLAYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FriendBriefData* get_FriendData()
		{
			return ((::RPG::Client::FriendBriefData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSOCIALPLAYBLOCK_GET_FRIENDDATA_OFFSET))(this);
		}
	};
}
