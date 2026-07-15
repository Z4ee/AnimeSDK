#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityTargetLeader; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CC9D4CCD957256B9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16003690)
#define CLASS_3_CC9D4CCD957256B9__CTOR_OFFSET UNITYSDK_OFFSET(0x16003620)

inline static constexpr unsigned int Class_3_CC9D4CCD957256B9_TypeDefinitionIndex = 56573;

class Class_3_CC9D4CCD957256B9 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAbilityTargetLeader*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityTargetLeader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + CLASS_3_CC9D4CCD957256B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_CC9D4CCD957256B9_EVALUATE_OFFSET))(this, a1, a2);
	}
};
