#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLatestEnterStageAvatar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D6E07BCA0A60B125_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11378310)
#define CLASS_3_D6E07BCA0A60B125_3__CTOR_OFFSET UNITYSDK_OFFSET(0x11378290)

inline static constexpr unsigned int Class_3_D6E07BCA0A60B125_3_TypeDefinitionIndex = 47839;

class Class_3_D6E07BCA0A60B125_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLatestEnterStageAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_D6E07BCA0A60B125_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D6E07BCA0A60B125_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};
