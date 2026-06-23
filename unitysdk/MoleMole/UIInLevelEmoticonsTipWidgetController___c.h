#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18149240)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18149280)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x18149290)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x181493A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex = 40448;

	class UIInLevelEmoticonsTipWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelEmoticonsTipWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelEmoticonsTipWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x432E0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x432E8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x432F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_1_OFFSET))(this);
		}
	};
}
