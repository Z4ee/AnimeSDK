#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceMessageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceMessageRow; }

#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C63B7E0)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_CATID_OFFSET UNITYSDK_OFFSET(0x1C63C020)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_ISPLAYERUSE_OFFSET UNITYSDK_OFFSET(0x1C63C0C0)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x1C63C860)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C63C8D0)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C63B830)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C63C870)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1C63C810)
#define RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63C800)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatMessageDataItem_TypeDefinitionIndex = 63105;

	class CakeRaceChatMessageDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _MessageID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceChatMessageDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceChatMessageDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_ISSPECIAL_OFFSET))(this);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_ISPLAYERUSE_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceMessageType get_Type()
		{
			return ((::RPG::GameCore::CakeRaceMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_CATID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET_TEXT_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceMessageRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATMESSAGEDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
