#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentPlayerMazeSkillLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1F4D84C0C843162F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x181B56E0)
#define CLASS_3_1F4D84C0C843162F__CTOR_OFFSET UNITYSDK_OFFSET(0x181B5670)

inline static constexpr unsigned int Class_3_1F4D84C0C843162F_TypeDefinitionIndex = 56461;

class Class_3_1F4D84C0C843162F : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1F4D84C0C843162F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_1F4D84C0C843162F_EVALUATE_OFFSET))(this, a1, a2);
	}
};
