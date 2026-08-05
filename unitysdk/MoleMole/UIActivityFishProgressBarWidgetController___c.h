#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197D4E20)
#define MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197D4E60)
#define MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x197D4E70)
#define MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__9_1_OFFSET UNITYSDK_OFFSET(0x197D4EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishProgressBarWidgetController___c_TypeDefinitionIndex = 83490;

	class UIActivityFishProgressBarWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__9_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42900);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__9_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42908);
		}
		static ::MoleMole::UIActivityFishProgressBarWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityFishProgressBarWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFishProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshProgressPointView_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__9_0_OFFSET))(this);
		}

		::System::Void _RefreshProgressPointView_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__9_1_OFFSET))(this);
		}
	};
}
