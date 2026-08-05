#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E63870F0CC8AB3BB;
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF8190)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsRowWidgetController_Data_TypeDefinitionIndex = 40271;

	class UIZenkovPresetsRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action* OnAfterUsePreset; // 0x10
		::Class_3_E63870F0CC8AB3BB* ZenkovPreset; // 0x18
		::System::Action* OnAfterOverridePreset; // 0x20
		::System::Int32 DungeonId; // 0x28
		::System::Int32 Index; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
