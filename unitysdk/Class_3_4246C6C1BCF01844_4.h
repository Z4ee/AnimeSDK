#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4246C6C1BCF01844_4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12A94B40)
#define CLASS_3_4246C6C1BCF01844_4__CTOR_OFFSET UNITYSDK_OFFSET(0x12A94AC0)

inline static constexpr unsigned int Class_3_4246C6C1BCF01844_4_TypeDefinitionIndex = 54610;

class Class_3_4246C6C1BCF01844_4 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAbilityTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_4_EVALUATE_OFFSET))(this, a1, a2);
	}
};
