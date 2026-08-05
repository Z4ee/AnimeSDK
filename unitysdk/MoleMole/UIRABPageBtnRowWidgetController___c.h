#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_397;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16904530)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16904570)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ISLEVEL1ACHIEVEDANDNOTFINISH310_B__63_0_OFFSET UNITYSDK_OFFSET(0x16904AF0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONLAYERSINFOBTNCLICK_B__54_0_OFFSET UNITYSDK_OFFSET(0x16904580)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONSPECIALTRAININGINFOBTNCLICK_B__55_0_OFFSET UNITYSDK_OFFSET(0x16904750)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONTASKINFOBTNCLICK_B__56_0_OFFSET UNITYSDK_OFFSET(0x16904920)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex = 68944;

	class UIRABPageBtnRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__55_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49220);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_397*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_397*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49228);
		}
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49230);
		}
		static ::System::Action** StaticGet___9__54_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49238);
		}
		static ::MoleMole::UIRABPageBtnRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABPageBtnRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnLayersInfoBtnClick_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONLAYERSINFOBTNCLICK_B__54_0_OFFSET))(this);
		}

		::System::Void _OnSpecialTrainingInfoBtnClick_b__55_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONSPECIALTRAININGINFOBTNCLICK_B__55_0_OFFSET))(this);
		}

		::System::Void _OnTaskInfoBtnClick_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONTASKINFOBTNCLICK_B__56_0_OFFSET))(this);
		}

		::System::Boolean _IsLevel1AchievedAndNotFinish310_b__63_0(::Class_2_208CC9941471731A_397* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_397*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ISLEVEL1ACHIEVEDANDNOTFINISH310_B__63_0_OFFSET))(this, row);
		}
	};
}
