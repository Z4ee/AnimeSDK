#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NumberSetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_852C90B8B5F0CCE0_OFFSET UNITYSDK_OFFSET(0x19C58390)
#define RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_B750F9A61D439704_OFFSET UNITYSDK_OFFSET(0x19C58470)
#define RPG_GAMECORE_SETMONSTERPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C58410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterPhase_TypeDefinitionIndex = 21490;

	class SetMonsterPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NumberSetMode SetMode; // 0x20
		::System::UInt32 PhaseNum; // 0x24
		::System::Boolean ApplyOverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_852C90B8B5F0CCE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_852C90B8B5F0CCE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B750F9A61D439704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_B750F9A61D439704_OFFSET))(a1, a2);
		}
	};
}
