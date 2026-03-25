#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4CC1ACD3EC8294B1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x108F9B10)
#define CLASS_3_4CC1ACD3EC8294B1__CTOR_OFFSET UNITYSDK_OFFSET(0x108F9A90)

inline static constexpr unsigned int Class_3_4CC1ACD3EC8294B1_TypeDefinitionIndex = 47804;

class Class_3_4CC1ACD3EC8294B1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAllUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAllUnselectable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_4CC1ACD3EC8294B1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4CC1ACD3EC8294B1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
