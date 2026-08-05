#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_ResolveType.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_UIState_MaterialCost.h"

class Class_1_1685EC66FBD28897;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_163;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15E93F20)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E943B0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET UNITYSDK_OFFSET(0x15E943C0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET UNITYSDK_OFFSET(0x15E94630)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController_UIState_TypeDefinitionIndex = 60614;

	class UISuibianTempleResolvePageController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_163<::System::String*>* DescText; // 0x80
		::Class_0_16E4307DCC41950C_14<::System::Int32>* SourceItems; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Int32>* ProductOrMaterialType; // 0x90
		::Class_0_16E4307DCC419505_159<::System::Int32>* ItemID; // 0x98
		::Class_0_16E4307DCC41950C_14<::MoleMole::UISuibianTempleResolvePageController_UIState_MaterialCost>* Materials; // 0xA0
		::Class_0_16E4307DCC419505_159<::System::Int32>* MaxRecyleCount; // 0xA8
		::Class_0_16E4307DCC419505_159<::System::Int32>* RecycleID; // 0xB0
		::Class_0_16E4307DCC41950C_14<::System::Int32>* ScrollItems; // 0xB8
		::Class_0_16E4307DCC419505_159<::MoleMole::UISuibianTempleResolvePageController_ResolveType>* Type; // 0xC0
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurrentSlider; // 0xC8
		::Class_0_16E4307DCC419505_159<::System::Int32>* MaxSlider; // 0xD0
		::Class_0_16E4307DCC419505_159<::System::Int32>* MinSlider; // 0xD8
		::Class_0_16E4307DCC41950C_14<::Class_1_1685EC66FBD28897*>* ViewItems; // 0xE0
		::Class_0_16E4307DCC419505_163<::System::String*>* NameText; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__15_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__15_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET))(this);
		}
	};
}
