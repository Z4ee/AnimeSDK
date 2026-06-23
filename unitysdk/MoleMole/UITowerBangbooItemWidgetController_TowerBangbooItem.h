#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MOLEMOLE_UITOWERBANGBOOITEMWIDGETCONTROLLER_TOWERBANGBOOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x157C5640)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerBangbooItemWidgetController_TowerBangbooItem_TypeDefinitionIndex = 56176;

	class UITowerBangbooItemWidgetController_TowerBangbooItem : public ::System::Object
	{
	public:
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* clickAction; // 0x10
		::System::Int32 bangbooid; // 0x18
		::System::Int32 towerDefenseBuddyID; // 0x1C
		::System::Boolean isLock; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBANGBOOITEMWIDGETCONTROLLER_TOWERBANGBOOITEM__CTOR_OFFSET))(this);
		}
	};
}
