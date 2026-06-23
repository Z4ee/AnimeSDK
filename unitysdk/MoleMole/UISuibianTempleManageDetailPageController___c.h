#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156BF890)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156BF8D0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x156BF8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageDetailPageController___c_TypeDefinitionIndex = 52232;

	class UISuibianTempleManageDetailPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleManageDetailPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleManageDetailPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManageDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x4CE90);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManageDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x4CE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET))(this);
		}
	};
}
