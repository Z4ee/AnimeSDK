#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166A6210)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166A6250)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__INITFAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x166A6260)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleUpgradeDialogPageController___c_TypeDefinitionIndex = 45995;

	class UISuibianTempleUpgradeDialogPageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__15_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleUpgradeDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A630);
		}
		static ::MoleMole::UISuibianTempleUpgradeDialogPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleUpgradeDialogPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleUpgradeDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitFame_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__INITFAME_B__15_0_OFFSET))(this);
		}
	};
}
