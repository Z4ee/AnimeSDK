#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchInstigator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EA5A38C0BEE33A56_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99F5E40)
#define CLASS_3_EA5A38C0BEE33A56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x99F5DA0)

inline static constexpr unsigned int Class_3_EA5A38C0BEE33A56_1_TypeDefinitionIndex = 47872;

class Class_3_EA5A38C0BEE33A56_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchInstigator*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchInstigator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + CLASS_3_EA5A38C0BEE33A56_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_EA5A38C0BEE33A56_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
