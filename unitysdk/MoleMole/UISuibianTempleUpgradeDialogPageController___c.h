#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1340BCE0)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1340BD20)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER___C__INITFAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x1340BD30)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleUpgradeDialogPageController___c_TypeDefinitionIndex = 44346;

	class UISuibianTempleUpgradeDialogPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleUpgradeDialogPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleUpgradeDialogPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleUpgradeDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x38120);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__15_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleUpgradeDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x38128);
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
