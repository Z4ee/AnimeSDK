#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvNPC; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_293DA5984E058845_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162FD060)
#define CLASS_3_293DA5984E058845__CTOR_OFFSET UNITYSDK_OFFSET(0x162FCFF0)

inline static constexpr unsigned int Class_3_293DA5984E058845_TypeDefinitionIndex = 56451;

class Class_3_293DA5984E058845 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvNPC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvNPC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + CLASS_3_293DA5984E058845__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_293DA5984E058845_EVALUATE_OFFSET))(this, a1, a2);
	}
};
