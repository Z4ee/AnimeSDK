#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityStart; }
namespace RPG::GameCore { class ChimeraPhaseConditionConfig; }

#define RPG_GAMECORE_CHIMERAWORKPHASE_METHOD_2_76BB5948732C447D_OFFSET UNITYSDK_OFFSET(0x1E3431D0)
#define RPG_GAMECORE_CHIMERAWORKPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3432B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkPhase_TypeDefinitionIndex = 15712;

	class ChimeraWorkPhase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityStart* PhasePerformance; // 0x10
		::RPG::GameCore::ChimeraPhaseConditionConfig* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_76BB5948732C447D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASE_METHOD_2_76BB5948732C447D_OFFSET))(a1, a2);
		}
	};
}
