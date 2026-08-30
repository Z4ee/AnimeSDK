#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastItem; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_ACTIVETOASTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCD5F090)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastQueue_ActiveToastInfo_TypeDefinitionIndex = 75737;

	class DiceCombatV2SideBarToastQueue_ActiveToastInfo : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem* Item; // 0x10
		::System::Int32 PrefabInstanceId; // 0x18
		::System::Boolean IsFadingOut; // 0x1C
		::System::Single ShowTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_ACTIVETOASTINFO__CTOR_OFFSET))(this);
		}
	};
}
