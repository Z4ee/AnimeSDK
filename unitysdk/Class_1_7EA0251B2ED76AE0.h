#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_7EA0251B2ED76AE0_METHOD_1_02A7FCEDE09AD0D7_OFFSET UNITYSDK_OFFSET(0x920F600)
#define CLASS_1_7EA0251B2ED76AE0_METHOD_1_7A10FF0393E8C892_OFFSET UNITYSDK_OFFSET(0x920F6B0)
#define CLASS_1_7EA0251B2ED76AE0_METHOD_1_8FE7DFD4607B9D92_OFFSET UNITYSDK_OFFSET(0x920F7C0)

inline static constexpr unsigned int Class_1_7EA0251B2ED76AE0_TypeDefinitionIndex = 51395;

class Class_1_7EA0251B2ED76AE0 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_02A7FCEDE09AD0D7(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7EA0251B2ED76AE0_METHOD_1_02A7FCEDE09AD0D7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7A10FF0393E8C892(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7EA0251B2ED76AE0_METHOD_1_7A10FF0393E8C892_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8FE7DFD4607B9D92(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7EA0251B2ED76AE0_METHOD_1_8FE7DFD4607B9D92_OFFSET))(a1, a2);
	}
};
