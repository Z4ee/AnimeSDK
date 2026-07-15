#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/RPG/GameCore/NumberSetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERVIEWPHASE_METHOD_3_0B568452227DE65F_OFFSET UNITYSDK_OFFSET(0x1C603230)
#define RPG_GAMECORE_SETMONSTERVIEWPHASE_METHOD_3_1E701FAEFBCCA000_OFFSET UNITYSDK_OFFSET(0x1C6032D0)
#define RPG_GAMECORE_SETMONSTERVIEWPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C603290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterViewPhase_TypeDefinitionIndex = 21912;

	class SetMonsterViewPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::MonsterViewPhaseType PhaseType; // 0x20
		::RPG::GameCore::NumberSetMode SetMode; // 0x24
		::System::UInt32 PhaseNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERVIEWPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B568452227DE65F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterViewPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterViewPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERVIEWPHASE_METHOD_3_0B568452227DE65F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E701FAEFBCCA000(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterViewPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterViewPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERVIEWPHASE_METHOD_3_1E701FAEFBCCA000_OFFSET))(a1, a2);
		}
	};
}
