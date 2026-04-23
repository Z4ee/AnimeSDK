#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4B524506463A9510_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11BF9C00)
#define CLASS_3_4B524506463A9510__CTOR_OFFSET UNITYSDK_OFFSET(0x11BF9B60)

inline static constexpr unsigned int Class_3_4B524506463A9510_TypeDefinitionIndex = 54534;

class Class_3_4B524506463A9510 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAidAttacker*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAidAttacker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + CLASS_3_4B524506463A9510__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4B524506463A9510_EVALUATE_OFFSET))(this, a1, a2);
	}
};
