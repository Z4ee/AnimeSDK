#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLatestEnterStageAvatar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B84CC34BC0B4920B_4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1559B790)
#define CLASS_3_B84CC34BC0B4920B_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1559B740)

inline static constexpr unsigned int Class_3_B84CC34BC0B4920B_4_TypeDefinitionIndex = 59328;

class Class_3_B84CC34BC0B4920B_4 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLatestEnterStageAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_4_EVALUATE_OFFSET))(this, a1, a2);
	}
};
