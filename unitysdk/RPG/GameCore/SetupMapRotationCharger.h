#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }

#define RPG_GAMECORE_SETUPMAPROTATIONCHARGER_METHOD_3_23D50BE7DD423273_OFFSET UNITYSDK_OFFSET(0x1BE2FD00)
#define RPG_GAMECORE_SETUPMAPROTATIONCHARGER_METHOD_3_94F6BA095FDB2551_OFFSET UNITYSDK_OFFSET(0x1BE2FD40)
#define RPG_GAMECORE_SETUPMAPROTATIONCHARGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupMapRotationCharger_TypeDefinitionIndex = 21492;

	class SetupMapRotationCharger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* InteractionTriggerName; // 0x18
		::RPG::GameCore::DynamicString* GainEnergyButtonText; // 0x20
		::RPG::GameCore::DynamicString* FillEnergyButtonText; // 0x28
		::RPG::GameCore::DynamicStringList* EnergyEffectAttachPoints; // 0x30
		::RPG::GameCore::DynamicString* EnergyPointEffectPath; // 0x38
		::RPG::GameCore::DynamicString* EnergyTrailEffectPath; // 0x40
		::RPG::GameCore::DynamicString* EnergyTrailEffectTransitPoint; // 0x48
		::RPG::GameCore::DynamicString* InteractableEffectAttachPoint; // 0x50
		::RPG::GameCore::DynamicString* FullEffectPath; // 0x58
		::RPG::GameCore::DynamicString* FullEffectAttachPoint; // 0x60
		::RPG::GameCore::DynamicString* DissolveParamName; // 0x68
		::RPG::GameCore::DynamicString* DissolveAnimState; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONCHARGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23D50BE7DD423273(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupMapRotationCharger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupMapRotationCharger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONCHARGER_METHOD_3_23D50BE7DD423273_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94F6BA095FDB2551(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupMapRotationCharger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupMapRotationCharger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONCHARGER_METHOD_3_94F6BA095FDB2551_OFFSET))(a1, a2);
		}
	};
}
