#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCHANGEPHASE_METHOD_3_0102EAE67CF4F9C0_OFFSET UNITYSDK_OFFSET(0x187CBFB0)
#define RPG_GAMECORE_CHARACTERCHANGEPHASE_METHOD_3_1D026C7D4233DD36_OFFSET UNITYSDK_OFFSET(0x187CBF30)
#define RPG_GAMECORE_CHARACTERCHANGEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x187CBF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterChangePhase_TypeDefinitionIndex = 21360;

	class CharacterChangePhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnlyAlive; // 0x20
		::System::String* PhaseName; // 0x28
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0x30
		::System::Boolean RevertToDefault; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D026C7D4233DD36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterChangePhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterChangePhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEPHASE_METHOD_3_1D026C7D4233DD36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0102EAE67CF4F9C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterChangePhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEPHASE_METHOD_3_0102EAE67CF4F9C0_OFFSET))(a1, a2);
		}
	};
}
