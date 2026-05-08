#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16883A10)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16883A50)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET UNITYSDK_OFFSET(0x16883A60)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_5_OFFSET UNITYSDK_OFFSET(0x16883B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex = 69855;

	class UIHandBookNormalMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_5()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x350F0);
		}
		static ::MoleMole::UIHandBookNormalMaterialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookNormalMaterialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x350F8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_5_OFFSET))(this);
		}
	};
}
