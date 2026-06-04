#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaMapTabProgressItemType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC848510)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_GET_ISLIGHTED_OFFSET UNITYSDK_OFFSET(0xC8484F0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0xC8484E0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_SET_ISLIGHTED_OFFSET UNITYSDK_OFFSET(0xC848500)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC848590)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaMapTabLineItem_TypeDefinitionIndex = 68108;

	class RogueTournPersonaMapTabLineItem : public ::System::Object
	{
	public:
		::System::Boolean _IsLighted_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaMapTabProgressItemType get_ItemType()
		{
			return ((::RPG::Client::RogueTournPersonaMapTabProgressItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsLighted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_GET_ISLIGHTED_OFFSET))(this);
		}

		::System::Void set_IsLighted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_SET_ISLIGHTED_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaMapTabLineItem* Create(::System::Boolean a1)
		{
			return ((::RPG::Client::RogueTournPersonaMapTabLineItem*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABLINEITEM_CREATE_OFFSET))(a1);
		}
	};
}
