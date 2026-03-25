#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchUnstageTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3408D7A393F3B8F9_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8A617D0)
#define CLASS_3_3408D7A393F3B8F9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8A61750)

inline static constexpr unsigned int Class_3_3408D7A393F3B8F9_2_TypeDefinitionIndex = 47840;

class Class_3_3408D7A393F3B8F9_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchUnstageTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchUnstageTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + CLASS_3_3408D7A393F3B8F9_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3408D7A393F3B8F9_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};
