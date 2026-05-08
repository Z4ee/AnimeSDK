#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16776820)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16776860)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMCOLLECTPAGECONTROLLER___C__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x16776870)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVCardItemCollectPageController___c_TypeDefinitionIndex = 52317;

	class UIBangBooUAVCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangBooUAVCardItemCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooUAVCardItemCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x32650);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__8_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x32658);
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
