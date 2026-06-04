#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMazeBuffTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8D72F7EC7626EEF7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA675FD0)
#define CLASS_3_8D72F7EC7626EEF7__CTOR_OFFSET UNITYSDK_OFFSET(0xA675F60)

inline static constexpr unsigned int Class_3_8D72F7EC7626EEF7_TypeDefinitionIndex = 55360;

class Class_3_8D72F7EC7626EEF7 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchMazeBuffTargets*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchMazeBuffTargets* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + CLASS_3_8D72F7EC7626EEF7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_8D72F7EC7626EEF7_EVALUATE_OFFSET))(this, a1, a2);
	}
};
