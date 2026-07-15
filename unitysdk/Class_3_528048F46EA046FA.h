#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAbility; }
namespace RPG::GameCore { class TurnInsertAbilityCondition; }
namespace RPG::GameCore { class TurnInsertAbilityConditionBase; }
namespace RPG::GameCore { class TurnInsertAbilityConditionGroup; }
namespace System { class String; }

#define CLASS_3_528048F46EA046FA_METHOD_3_4BE71FC438788711_OFFSET UNITYSDK_OFFSET(0x179E9BF0)
#define CLASS_3_528048F46EA046FA_METHOD_3_9113469258BF468C_OFFSET UNITYSDK_OFFSET(0x179E9AF0)
#define CLASS_3_528048F46EA046FA_METHOD_3_D6822BC2D682AA46_OFFSET UNITYSDK_OFFSET(0x179EA010)
#define CLASS_3_528048F46EA046FA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179E8C50)
#define CLASS_3_528048F46EA046FA__CTOR_OFFSET UNITYSDK_OFFSET(0x179E8C20)

inline static constexpr unsigned int Class_3_528048F46EA046FA_TypeDefinitionIndex = 53250;

class Class_3_528048F46EA046FA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TurnInsertAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAbility*))((::PBYTE)hIl2Cpp + CLASS_3_528048F46EA046FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_528048F46EA046FA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_9113469258BF468C(::RPG::GameCore::TurnInsertAbilityConditionBase* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnInsertAbilityConditionBase*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_528048F46EA046FA_METHOD_3_9113469258BF468C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_D6822BC2D682AA46(::RPG::GameCore::TurnInsertAbilityConditionGroup* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnInsertAbilityConditionGroup*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_528048F46EA046FA_METHOD_3_D6822BC2D682AA46_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_4BE71FC438788711(::RPG::GameCore::TurnInsertAbilityCondition* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnInsertAbilityCondition*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_528048F46EA046FA_METHOD_3_4BE71FC438788711_OFFSET))(this, a1, a2, a3);
	}
};
