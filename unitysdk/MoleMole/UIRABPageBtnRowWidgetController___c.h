#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_746;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15325FE0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15326020)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ISLEVEL1ACHIEVEDANDNOTFINISH310_B__56_0_OFFSET UNITYSDK_OFFSET(0x153265A0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONLAYERSINFOBTNCLICK_B__47_0_OFFSET UNITYSDK_OFFSET(0x15326030)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONSPECIALTRAININGINFOBTNCLICK_B__48_0_OFFSET UNITYSDK_OFFSET(0x15326200)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONTASKINFOBTNCLICK_B__49_0_OFFSET UNITYSDK_OFFSET(0x153263D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex = 48084;

	class UIRABPageBtnRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__47_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x452F0);
		}
		static ::System::Action** StaticGet___9__48_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x452F8);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_746*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_746*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45300);
		}
		static ::MoleMole::UIRABPageBtnRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABPageBtnRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45308);
		}
		static ::System::Action** StaticGet___9__49_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnLayersInfoBtnClick_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONLAYERSINFOBTNCLICK_B__47_0_OFFSET))(this);
		}

		::System::Void _OnSpecialTrainingInfoBtnClick_b__48_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONSPECIALTRAININGINFOBTNCLICK_B__48_0_OFFSET))(this);
		}

		::System::Void _OnTaskInfoBtnClick_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONTASKINFOBTNCLICK_B__49_0_OFFSET))(this);
		}

		::System::Boolean _IsLevel1AchievedAndNotFinish310_b__56_0(::Class_2_208CC9941471731A_746* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_746*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ISLEVEL1ACHIEVEDANDNOTFINISH310_B__56_0_OFFSET))(this, row);
		}
	};
}
