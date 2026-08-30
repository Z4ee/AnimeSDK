#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastZombieEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B84CC34BC0B4920B_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB1FCE0)
#define CLASS_3_B84CC34BC0B4920B_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1FC70)

inline static constexpr unsigned int Class_3_B84CC34BC0B4920B_3_TypeDefinitionIndex = 59270;

class Class_3_B84CC34BC0B4920B_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLastZombieEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLastZombieEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};
