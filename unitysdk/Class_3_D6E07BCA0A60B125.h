#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPuzzleEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D6E07BCA0A60B125_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117CC350)
#define CLASS_3_D6E07BCA0A60B125__CTOR_OFFSET UNITYSDK_OFFSET(0x117CC2B0)

inline static constexpr unsigned int Class_3_D6E07BCA0A60B125_TypeDefinitionIndex = 54511;

class Class_3_D6E07BCA0A60B125 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPuzzleEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPuzzleEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D6E07BCA0A60B125__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D6E07BCA0A60B125_EVALUATE_OFFSET))(this, a1, a2);
	}
};
