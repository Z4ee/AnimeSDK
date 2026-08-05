#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19751D20)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19751D60)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x19751D70)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_2_OFFSET UNITYSDK_OFFSET(0x19751DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex = 79398;

	class UIActivityBigCatProgressBarWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F70);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F78);
		}
		static ::MoleMole::UIActivityBigCatProgressBarWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityBigCatProgressBarWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshProgressPointView_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_0_OFFSET))(this);
		}

		::System::Void _RefreshProgressPointView_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_2_OFFSET))(this);
		}
	};
}
