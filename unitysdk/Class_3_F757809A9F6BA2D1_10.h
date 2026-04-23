#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectLeave; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F757809A9F6BA2D1_10_EVALUATE_OFFSET UNITYSDK_OFFSET(0x97698B0)
#define CLASS_3_F757809A9F6BA2D1_10__CTOR_OFFSET UNITYSDK_OFFSET(0x9769830)

inline static constexpr unsigned int Class_3_F757809A9F6BA2D1_10_TypeDefinitionIndex = 54652;

class Class_3_F757809A9F6BA2D1_10 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchDataViewUISelectLeave*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchDataViewUISelectLeave* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_10__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_10_EVALUATE_OFFSET))(this, a1, a2);
	}
};
