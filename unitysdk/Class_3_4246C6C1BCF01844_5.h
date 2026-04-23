#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4246C6C1BCF01844_5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9379BF0)
#define CLASS_3_4246C6C1BCF01844_5__CTOR_OFFSET UNITYSDK_OFFSET(0x9379B50)

inline static constexpr unsigned int Class_3_4246C6C1BCF01844_5_TypeDefinitionIndex = 54611;

class Class_3_4246C6C1BCF01844_5 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLockTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4246C6C1BCF01844_5_EVALUATE_OFFSET))(this, a1, a2);
	}
};
