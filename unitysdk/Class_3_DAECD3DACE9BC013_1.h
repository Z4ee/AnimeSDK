#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DAECD3DACE9BC013_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17FDB520)
#define CLASS_3_DAECD3DACE9BC013_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDB4D0)

inline static constexpr unsigned int Class_3_DAECD3DACE9BC013_1_TypeDefinitionIndex = 59283;

class Class_3_DAECD3DACE9BC013_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAidDefender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAidDefender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
