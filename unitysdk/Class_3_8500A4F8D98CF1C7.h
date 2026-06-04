#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityTargetLeader; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8500A4F8D98CF1C7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x137C94C0)
#define CLASS_3_8500A4F8D98CF1C7__CTOR_OFFSET UNITYSDK_OFFSET(0x137C9470)

inline static constexpr unsigned int Class_3_8500A4F8D98CF1C7_TypeDefinitionIndex = 55336;

class Class_3_8500A4F8D98CF1C7 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAbilityTargetLeader*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityTargetLeader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + CLASS_3_8500A4F8D98CF1C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_8500A4F8D98CF1C7_EVALUATE_OFFSET))(this, a1, a2);
	}
};
