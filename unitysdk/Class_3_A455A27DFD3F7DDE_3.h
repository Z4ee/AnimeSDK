#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchBattleEventEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A455A27DFD3F7DDE_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1221D530)
#define CLASS_3_A455A27DFD3F7DDE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1221D4E0)

inline static constexpr unsigned int Class_3_A455A27DFD3F7DDE_3_TypeDefinitionIndex = 59274;

class Class_3_A455A27DFD3F7DDE_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchBattleEventEntityList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchBattleEventEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};
