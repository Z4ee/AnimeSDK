#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE_24;
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1165CF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsRoleWidgetController_Data_TypeDefinitionIndex = 83393;

	class UIZenkovPresetsRoleWidgetController_Data : public ::System::Object
	{
	public:
		::Class_3_C3F0E3B5AB5977AE_24* EquipItem; // 0x10
		::UnityEngine::Transform* ClickEquipOverrideTransform; // 0x18
		::System::Int32 SlotIndex; // 0x20
		::System::UInt32 AvatarId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
