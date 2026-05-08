#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKWISHLISTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA1520)
#define MOLEMOLE_UIHANDBOOKWISHLISTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA1560)
#define MOLEMOLE_UIHANDBOOKWISHLISTWIDGETCONTROLLER___C__ONUIINIT_B__6_3_OFFSET UNITYSDK_OFFSET(0x15FA1570)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWishlistWidgetController___c_TypeDefinitionIndex = 48555;

	class UIHandBookWishlistWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookWishlistWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookWishlistWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWishlistWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CB50);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__6_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWishlistWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CB58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWISHLISTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWISHLISTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWISHLISTWIDGETCONTROLLER___C__ONUIINIT_B__6_3_OFFSET))(this);
		}
	};
}
