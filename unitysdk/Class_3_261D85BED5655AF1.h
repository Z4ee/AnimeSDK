#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleTargetFetchGridByTag; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_261D85BED5655AF1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19278F30)
#define CLASS_3_261D85BED5655AF1__CTOR_OFFSET UNITYSDK_OFFSET(0x19278DD0)

inline static constexpr unsigned int Class_3_261D85BED5655AF1_TypeDefinitionIndex = 54013;

class Class_3_261D85BED5655AF1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::RtBattleTargetFetchGridByTag*>
{
public:
	::System::Int32 KJCDAHNPFMD; // 0x18

	::System::Void _ctor(::RPG::GameCore::RtBattleTargetFetchGridByTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + CLASS_3_261D85BED5655AF1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_261D85BED5655AF1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
