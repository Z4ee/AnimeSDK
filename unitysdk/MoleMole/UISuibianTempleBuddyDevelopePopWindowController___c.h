#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__11_0_OFFSET UNITYSDK_OFFSET(0x17D56E10)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D56DC0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D56E00)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyDevelopePopWindowController___c_TypeDefinitionIndex = 85442;

	class UISuibianTempleBuddyDevelopePopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyDevelopePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D3E0);
		}
		static ::MoleMole::UISuibianTempleBuddyDevelopePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleBuddyDevelopePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyDevelopePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D3E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindViewCallbacks_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__11_0_OFFSET))(this);
		}
	};
}
