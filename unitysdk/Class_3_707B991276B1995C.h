#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllStanceBreakEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_707B991276B1995C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x106471A0)
#define CLASS_3_707B991276B1995C__CTOR_OFFSET UNITYSDK_OFFSET(0x10647150)

inline static constexpr unsigned int Class_3_707B991276B1995C_TypeDefinitionIndex = 55245;

class Class_3_707B991276B1995C : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAllStanceBreakEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAllStanceBreakEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + CLASS_3_707B991276B1995C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_707B991276B1995C_EVALUATE_OFFSET))(this, a1, a2);
	}
};
