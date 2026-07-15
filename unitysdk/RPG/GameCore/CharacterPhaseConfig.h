#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPHASECONFIG_METHOD_2_791DAF45E584AAD0_OFFSET UNITYSDK_OFFSET(0x1B7287D0)
#define RPG_GAMECORE_CHARACTERPHASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B728AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseConfig_TypeDefinitionIndex = 15854;

	class CharacterPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PhaseNum; // 0x10
		::System::String* PhaseName; // 0x18
		::RPG::GameCore::DynamicFloat* PhaseMaxHPRatio; // 0x20
		::RPG::GameCore::DynamicFloat* PhaseStanceRatio; // 0x28
		::RPG::GameCore::DynamicFloat* PhaseStanceCount; // 0x30
		::RPG::GameCore::CharacterPhaseOverrideConfig* OverrideConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_791DAF45E584AAD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASECONFIG_METHOD_2_791DAF45E584AAD0_OFFSET))(a1, a2);
		}
	};
}
