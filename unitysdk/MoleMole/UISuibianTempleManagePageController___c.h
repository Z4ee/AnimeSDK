#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET UNITYSDK_OFFSET(0x14806320)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148062D0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14806310)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManagePageController___c_TypeDefinitionIndex = 71914;

	class UISuibianTempleManagePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleManagePageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleManagePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF10);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__16_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF18);
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
