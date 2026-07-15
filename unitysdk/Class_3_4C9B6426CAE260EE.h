#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

class Class_1_152140BAFD2DB102;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNextSkillCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4C9B6426CAE260EE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18447CD0)
#define CLASS_3_4C9B6426CAE260EE_METHOD_3_C26BBCEDE5E28E64_OFFSET UNITYSDK_OFFSET(0x18447FE0)
#define CLASS_3_4C9B6426CAE260EE__CTOR_OFFSET UNITYSDK_OFFSET(0x18447C80)

inline static constexpr unsigned int Class_3_4C9B6426CAE260EE_TypeDefinitionIndex = 56549;

class Class_3_4C9B6426CAE260EE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNextSkillCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNextSkillCaster* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + CLASS_3_4C9B6426CAE260EE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4C9B6426CAE260EE_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C26BBCEDE5E28E64(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_152140BAFD2DB102* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_152140BAFD2DB102*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4C9B6426CAE260EE_METHOD_3_C26BBCEDE5E28E64_OFFSET))(this, a1, a2, a3);
	}
};
