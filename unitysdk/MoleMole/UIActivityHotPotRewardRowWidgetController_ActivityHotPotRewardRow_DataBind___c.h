#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ACTIVITYHOTPOTREWARDROW_DATABIND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164415F0)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ACTIVITYHOTPOTREWARDROW_DATABIND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16441630)
#define MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ACTIVITYHOTPOTREWARDROW_DATABIND___C__ONCREATEPROPERTY_B__16_0_OFFSET UNITYSDK_OFFSET(0x16441640)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind___c_TypeDefinitionIndex = 60251;

	class UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind___c_TypeDefinitionIndex)->GetStaticField(0x437A0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotRewardRowWidgetController_ActivityHotPotRewardRow_DataBind___c_TypeDefinitionIndex)->GetStaticField(0x437A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ACTIVITYHOTPOTREWARDROW_DATABIND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ACTIVITYHOTPOTREWARDROW_DATABIND___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTREWARDROWWIDGETCONTROLLER_ACTIVITYHOTPOTREWARDROW_DATABIND___C__ONCREATEPROPERTY_B__16_0_OFFSET))(this);
		}
	};
}
