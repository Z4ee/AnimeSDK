#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentDamageAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4246C6C1BCF01844_EVALUATE_OFFSET UNITYSDK_OFFSET(0x104A51E0)
#define CLASS_3_4246C6C1BCF01844__CTOR_OFFSET UNITYSDK_OFFSET(0x104A5140)

inline static constexpr unsigned int Class_3_4246C6C1BCF01844_TypeDefinitionIndex = 47782;

class Class_3_4246C6C1BCF01844 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentDamageAttacker*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentDamageAttacker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_EVALUATE_OFFSET))(this, a1, a2);
	}
};
