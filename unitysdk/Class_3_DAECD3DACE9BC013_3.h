#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchModifierOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DAECD3DACE9BC013_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1613B680)
#define CLASS_3_DAECD3DACE9BC013_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1613B630)

inline static constexpr unsigned int Class_3_DAECD3DACE9BC013_3_TypeDefinitionIndex = 59355;

class Class_3_DAECD3DACE9BC013_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchModifierOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchModifierOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};
