#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F0B8FB765DA954E0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17DC5870)
#define CLASS_3_F0B8FB765DA954E0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC5800)

inline static constexpr unsigned int Class_3_F0B8FB765DA954E0_TypeDefinitionIndex = 56459;

class Class_3_F0B8FB765DA954E0 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchDialogueEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchDialogueEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F0B8FB765DA954E0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F0B8FB765DA954E0_EVALUATE_OFFSET))(this, a1, a2);
	}
};
