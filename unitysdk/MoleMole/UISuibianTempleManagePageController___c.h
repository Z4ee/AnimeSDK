#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET UNITYSDK_OFFSET(0x15F7E3A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F7E350)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7E390)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManagePageController___c_TypeDefinitionIndex = 74927;

	class UISuibianTempleManagePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleManagePageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleManagePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x401B0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__16_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x401B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET))(this);
		}
	};
}
