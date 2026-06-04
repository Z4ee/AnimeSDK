#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_35FF3EF4A1E5C865_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x139B8FE0)
#define CLASS_3_35FF3EF4A1E5C865_1__CTOR_OFFSET UNITYSDK_OFFSET(0x139B8F70)

inline static constexpr unsigned int Class_3_35FF3EF4A1E5C865_1_TypeDefinitionIndex = 55232;

class Class_3_35FF3EF4A1E5C865_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + CLASS_3_35FF3EF4A1E5C865_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_35FF3EF4A1E5C865_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
