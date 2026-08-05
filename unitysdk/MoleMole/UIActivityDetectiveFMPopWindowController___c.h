#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6043B0)
#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6043F0)
#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__ONUIINIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A604400)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveFMPopWindowController___c_TypeDefinitionIndex = 76636;

	class UIActivityDetectiveFMPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__16_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveFMPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A120);
		}
		static ::MoleMole::UIActivityDetectiveFMPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityDetectiveFMPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveFMPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__ONUIINIT_B__16_0_OFFSET))(this);
		}
	};
}
