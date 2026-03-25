#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6CAAD6111812C23A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x114B9860)
#define CLASS_3_6CAAD6111812C23A__CTOR_OFFSET UNITYSDK_OFFSET(0x114B97E0)

inline static constexpr unsigned int Class_3_6CAAD6111812C23A_TypeDefinitionIndex = 47767;

class Class_3_6CAAD6111812C23A : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::GroupFetchLocalTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::GroupFetchLocalTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + CLASS_3_6CAAD6111812C23A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_6CAAD6111812C23A_EVALUATE_OFFSET))(this, a1, a2);
	}
};
