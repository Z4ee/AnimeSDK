#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchRogueMagicScepterList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C042602817EF9FC9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x106220D0)
#define CLASS_3_C042602817EF9FC9__CTOR_OFFSET UNITYSDK_OFFSET(0x10622080)

inline static constexpr unsigned int Class_3_C042602817EF9FC9_TypeDefinitionIndex = 55259;

class Class_3_C042602817EF9FC9 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchRogueMagicScepterList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchRogueMagicScepterList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + CLASS_3_C042602817EF9FC9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C042602817EF9FC9_EVALUATE_OFFSET))(this, a1, a2);
	}
};
