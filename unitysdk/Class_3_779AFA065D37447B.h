#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNextTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_779AFA065D37447B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x121094C0)
#define CLASS_3_779AFA065D37447B__CTOR_OFFSET UNITYSDK_OFFSET(0x12109440)

inline static constexpr unsigned int Class_3_779AFA065D37447B_TypeDefinitionIndex = 54584;

class Class_3_779AFA065D37447B : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNextTurnOwnerEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_3_779AFA065D37447B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_779AFA065D37447B_EVALUATE_OFFSET))(this, a1, a2);
	}
};
