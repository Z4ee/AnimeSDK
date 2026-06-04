#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM_TRIGGERSWITCHITEMICONNOTIFY_OFFSET UNITYSDK_OFFSET(0xC80C370)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC80C420)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionExhibitionBoothMapItem_TypeDefinitionIndex = 64537;

	class RogueTournCollectionExhibitionBoothMapItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BoothID; // 0x18
		::RPG::Client::RogueTournCollectionExhibitionBoothMapItem* GamepadNextItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM__CTOR_OFFSET))(this);
		}

		::System::Void TriggerSwitchItemIconNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM_TRIGGERSWITCHITEMICONNOTIFY_OFFSET))(this);
		}
	};
}
