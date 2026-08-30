#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_7EA0251B2ED76AE0_METHOD_1_02A7FCEDE09AD0D7_OFFSET UNITYSDK_OFFSET(0xBBBAA70)
#define CLASS_1_7EA0251B2ED76AE0_METHOD_1_8B80E4F27F82BCD6_OFFSET UNITYSDK_OFFSET(0xBBBAB20)
#define CLASS_1_7EA0251B2ED76AE0_METHOD_1_9B177C9F31C5AF5B_OFFSET UNITYSDK_OFFSET(0xBBBABA0)

inline static constexpr unsigned int Class_1_7EA0251B2ED76AE0_TypeDefinitionIndex = 55934;

class Class_1_7EA0251B2ED76AE0 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_02A7FCEDE09AD0D7(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7EA0251B2ED76AE0_METHOD_1_02A7FCEDE09AD0D7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8B80E4F27F82BCD6(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7EA0251B2ED76AE0_METHOD_1_8B80E4F27F82BCD6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9B177C9F31C5AF5B(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7EA0251B2ED76AE0_METHOD_1_9B177C9F31C5AF5B_OFFSET))(a1, a2);
	}
};
