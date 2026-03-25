#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLevelEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4246C6C1BCF01844_6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1198BD90)
#define CLASS_3_4246C6C1BCF01844_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1198BD10)

inline static constexpr unsigned int Class_3_4246C6C1BCF01844_6_TypeDefinitionIndex = 47885;

class Class_3_4246C6C1BCF01844_6 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLevelEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLevelEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_6_EVALUATE_OFFSET))(this, a1, a2);
	}
};
