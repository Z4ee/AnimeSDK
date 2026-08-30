#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTaskActionTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DAECD3DACE9BC013_4_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC74B10)
#define CLASS_3_DAECD3DACE9BC013_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBC74AC0)

inline static constexpr unsigned int Class_3_DAECD3DACE9BC013_4_TypeDefinitionIndex = 59373;

class Class_3_DAECD3DACE9BC013_4 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTaskActionTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTaskActionTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_4_EVALUATE_OFFSET))(this, a1, a2);
	}
};
