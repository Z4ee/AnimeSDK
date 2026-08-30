#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelStartSequeceConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RETARGETPERSEQUENCE_METHOD_3_0EDD0558081DEA6C_OFFSET UNITYSDK_OFFSET(0x1DBA0F20)
#define RPG_GAMECORE_RETARGETPERSEQUENCE_METHOD_3_DECF24C818849F8A_OFFSET UNITYSDK_OFFSET(0x1DBA0F60)
#define RPG_GAMECORE_RETARGETPERSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA0F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetargetPerSequence_TypeDefinitionIndex = 22200;

	class RetargetPerSequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Parallel; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Boolean IncludeLimbo; // 0x30
		::System::Boolean RandomTargetOnlyForBackup; // 0x31
		::Il2CppArray<::RPG::GameCore::LevelStartSequeceConfig*>* SequenceList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETPERSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EDD0558081DEA6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetargetPerSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetargetPerSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETPERSEQUENCE_METHOD_3_0EDD0558081DEA6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DECF24C818849F8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetargetPerSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetargetPerSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETPERSEQUENCE_METHOD_3_DECF24C818849F8A_OFFSET))(a1, a2);
		}
	};
}
