#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_465A6299F6992079_EVALUATE_OFFSET UNITYSDK_OFFSET(0x183C4D20)
#define CLASS_3_465A6299F6992079__CTOR_OFFSET UNITYSDK_OFFSET(0x183C4CD0)

inline static constexpr unsigned int Class_3_465A6299F6992079_TypeDefinitionIndex = 56466;

class Class_3_465A6299F6992079 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::GroupFetchLocalTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::GroupFetchLocalTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + CLASS_3_465A6299F6992079__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_465A6299F6992079_EVALUATE_OFFSET))(this, a1, a2);
	}
};
