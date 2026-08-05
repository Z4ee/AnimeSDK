#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1841B0A0)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1841B0E0)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x1841B0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex = 73569;

	class UIHandBookNormalMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookNormalMaterialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookNormalMaterialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A460);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET))(this);
		}
	};
}
