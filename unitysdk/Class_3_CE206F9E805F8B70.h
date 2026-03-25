#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllStanceBreakEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CE206F9E805F8B70_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11704E70)
#define CLASS_3_CE206F9E805F8B70__CTOR_OFFSET UNITYSDK_OFFSET(0x11704DF0)

inline static constexpr unsigned int Class_3_CE206F9E805F8B70_TypeDefinitionIndex = 47779;

class Class_3_CE206F9E805F8B70 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAllStanceBreakEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAllStanceBreakEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CE206F9E805F8B70__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_CE206F9E805F8B70_EVALUATE_OFFSET))(this, a1, a2);
	}
};
