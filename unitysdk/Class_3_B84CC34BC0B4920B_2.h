#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchStanceBreakTargetEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B84CC34BC0B4920B_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19995EF0)
#define CLASS_3_B84CC34BC0B4920B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19995EA0)

inline static constexpr unsigned int Class_3_B84CC34BC0B4920B_2_TypeDefinitionIndex = 59261;

class Class_3_B84CC34BC0B4920B_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchStanceBreakTargetEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};
