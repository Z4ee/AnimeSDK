#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187C3550)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187C3590)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x187C35A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVCardItemCollectPageController___c_TypeDefinitionIndex = 56684;

	class UIBangBooUAVCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangBooUAVCardItemCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooUAVCardItemCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x34500);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__8_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x34508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__ONUIINIT_B__8_0_OFFSET))(this);
		}
	};
}
