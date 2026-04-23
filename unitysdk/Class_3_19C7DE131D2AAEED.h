#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchRogueMagicScepterList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_19C7DE131D2AAEED_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAFF36D0)
#define CLASS_3_19C7DE131D2AAEED__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF3650)

inline static constexpr unsigned int Class_3_19C7DE131D2AAEED_TypeDefinitionIndex = 54532;

class Class_3_19C7DE131D2AAEED : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchRogueMagicScepterList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchRogueMagicScepterList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + CLASS_3_19C7DE131D2AAEED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_19C7DE131D2AAEED_EVALUATE_OFFSET))(this, a1, a2);
	}
};
