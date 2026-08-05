#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BC7540)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC7580)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x18BC7590)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveStorePageController___c_TypeDefinitionIndex = 90615;

	class UIActivityDetectiveStorePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityDetectiveStorePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityDetectiveStorePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveStorePageController___c_TypeDefinitionIndex)->GetStaticField(0x4AA60);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__8_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveStorePageController___c_TypeDefinitionIndex)->GetStaticField(0x4AA68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__ONUIINIT_B__8_0_OFFSET))(this);
		}
	};
}
