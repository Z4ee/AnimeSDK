#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFarmElementEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_55B4659DC91FED19_EVALUATE_OFFSET UNITYSDK_OFFSET(0x134B34A0)
#define CLASS_3_55B4659DC91FED19__CTOR_OFFSET UNITYSDK_OFFSET(0x134B3430)

inline static constexpr unsigned int Class_3_55B4659DC91FED19_TypeDefinitionIndex = 55380;

class Class_3_55B4659DC91FED19 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchFarmElementEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchFarmElementEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + CLASS_3_55B4659DC91FED19__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_55B4659DC91FED19_EVALUATE_OFFSET))(this, a1, a2);
	}
};
