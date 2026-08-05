#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF.h"
#include "unitysdk/MoleMole/UINewbieGuideBottomTabRowWidgetController_ScoreSortItem.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F4A060)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4A0A0)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_0_OFFSET UNITYSDK_OFFSET(0x15F4A0B0)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_1_OFFSET UNITYSDK_OFFSET(0x15F4A0C0)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_2_OFFSET UNITYSDK_OFFSET(0x15F4A0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex = 53106;

	class UINewbieGuideBottomTabRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA90);
		}
		static ::MoleMole::UINewbieGuideBottomTabRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UINewbieGuideBottomTabRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA98);
		}
		static ::System::Func_2<::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem, ::System::Single>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DAA0);
		}
		static ::System::Func_2<::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem, ::Enum_3_CAE10C54ABAE6FAF>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem, ::Enum_3_CAE10C54ABAE6FAF>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScoreRecommendText_b__13_0(::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_0_OFFSET))(this, item);
		}

		::Enum_3_CAE10C54ABAE6FAF _GetScoreRecommendText_b__13_1(::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem item)
		{
			return ((::Enum_3_CAE10C54ABAE6FAF(*)(::PVOID, ::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_1_OFFSET))(this, item);
		}

		::System::Single _GetScoreRecommendText_b__13_2(::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem item)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_2_OFFSET))(this, item);
		}
	};
}
