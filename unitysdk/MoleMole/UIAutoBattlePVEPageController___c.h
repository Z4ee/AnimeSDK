#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_341;
namespace MoleMole { class UIAutoBattlePVERowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B53490)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B534D0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x12B534E0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_1_OFFSET UNITYSDK_OFFSET(0x12B53540)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEPageController___c_TypeDefinitionIndex = 62130;

	class UIAutoBattlePVEPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattlePVEPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVEPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVEPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A900);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_341*, ::MoleMole::UIAutoBattlePVERowWidgetController_Data*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_341*, ::MoleMole::UIAutoBattlePVERowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVEPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A908);
		}
		static ::System::Func_2<::MoleMole::UIAutoBattlePVERowWidgetController_Data*, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::MoleMole::UIAutoBattlePVERowWidgetController_Data*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVEPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAutoBattlePVERowWidgetController_Data* _OnUIOpen_b__6_0(::Class_2_208CC9941471731A_341* abLevelExt)
		{
			return ((::MoleMole::UIAutoBattlePVERowWidgetController_Data*(*)(::PVOID, ::Class_2_208CC9941471731A_341*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, abLevelExt);
		}

		::System::Int32 _OnUIOpen_b__6_1(::MoleMole::UIAutoBattlePVERowWidgetController_Data* data)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIAutoBattlePVERowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___C__ONUIOPEN_B__6_1_OFFSET))(this, data);
		}
	};
}
