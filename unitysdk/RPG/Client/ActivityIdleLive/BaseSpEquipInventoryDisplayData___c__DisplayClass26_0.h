#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB109340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS26_0__PREVIEWEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0xB10A3D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int BaseSpEquipInventoryDisplayData___c__DisplayClass26_0_TypeDefinitionIndex = 70307;

	class BaseSpEquipInventoryDisplayData___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 spEquipId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PreviewEquip_b__0(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_BASESPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS26_0__PREVIEWEQUIP_B__0_OFFSET))(this, a1);
		}
	};
}
