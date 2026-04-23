#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EB7C8826DD8B11CF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x124499E0)
#define CLASS_3_EB7C8826DD8B11CF__CTOR_OFFSET UNITYSDK_OFFSET(0x12449940)

inline static constexpr unsigned int Class_3_EB7C8826DD8B11CF_TypeDefinitionIndex = 54503;

class Class_3_EB7C8826DD8B11CF : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_EB7C8826DD8B11CF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_EB7C8826DD8B11CF_EVALUATE_OFFSET))(this, a1, a2);
	}
};
