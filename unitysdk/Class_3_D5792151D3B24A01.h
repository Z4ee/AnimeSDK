#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchSummonUnit; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D5792151D3B24A01_EVALUATE_OFFSET UNITYSDK_OFFSET(0xACFE590)
#define CLASS_3_D5792151D3B24A01__CTOR_OFFSET UNITYSDK_OFFSET(0xACFE540)

inline static constexpr unsigned int Class_3_D5792151D3B24A01_TypeDefinitionIndex = 55236;

class Class_3_D5792151D3B24A01 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchSummonUnit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchSummonUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_3_D5792151D3B24A01__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D5792151D3B24A01_EVALUATE_OFFSET))(this, a1, a2);
	}
};
