#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchChessMoveTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BFA078CE16E16786_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8BC9CE0)
#define CLASS_3_BFA078CE16E16786__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC9C60)

inline static constexpr unsigned int Class_3_BFA078CE16E16786_TypeDefinitionIndex = 45189;

class Class_3_BFA078CE16E16786 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchChessMoveTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchChessMoveTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchChessMoveTarget*))((::PBYTE)hIl2Cpp + CLASS_3_BFA078CE16E16786__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BFA078CE16E16786_EVALUATE_OFFSET))(this, a1, a2);
	}
};
