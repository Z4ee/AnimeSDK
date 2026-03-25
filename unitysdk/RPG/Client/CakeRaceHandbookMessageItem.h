#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceAvatarTalkRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x92428C0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GETOWNERHEADICON_OFFSET UNITYSDK_OFFSET(0x9243CE0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x9243FA0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x9244090)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x9243FC0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9243F40)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x9243FB0)
#define RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9243CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookMessageItem_TypeDefinitionIndex = 51161;

	class CakeRaceHandbookMessageItem : public ::System::Object
	{
	public:
		::System::UInt32 _MessageID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 messageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM__CTOR_OFFSET))(this, messageID);
		}

		static ::RPG::Client::CakeRaceHandbookMessageItem* Create(::System::UInt32 messageID)
		{
			return ((::RPG::Client::CakeRaceHandbookMessageItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_CREATE_OFFSET))(messageID);
		}

		::System::String* GetOwnerHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GETOWNERHEADICON_OFFSET))(this);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_SET_MESSAGEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_OwnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_OWNERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MessageText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET_MESSAGETEXT_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceAvatarTalkRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceAvatarTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKMESSAGEITEM_GET__ROW_OFFSET))(this);
		}
	};
}
