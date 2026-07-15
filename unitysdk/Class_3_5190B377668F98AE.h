#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5190B377668F98AE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x183F21A0)
#define CLASS_3_5190B377668F98AE__CTOR_OFFSET UNITYSDK_OFFSET(0x183F2130)

inline static constexpr unsigned int Class_3_5190B377668F98AE_TypeDefinitionIndex = 56465;

class Class_3_5190B377668F98AE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + CLASS_3_5190B377668F98AE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5190B377668F98AE_EVALUATE_OFFSET))(this, a1, a2);
	}
};
