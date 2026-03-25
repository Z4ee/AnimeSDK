#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AIPropertySelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_64F4DF6918F5ED84_METHOD_1_33884B09D9A76EE6_OFFSET UNITYSDK_OFFSET(0x8C70910)
#define CLASS_1_64F4DF6918F5ED84_METHOD_1_A8265A155457A83A_OFFSET UNITYSDK_OFFSET(0x8C70A90)

inline static constexpr unsigned int Class_1_64F4DF6918F5ED84_TypeDefinitionIndex = 43424;

class Class_1_64F4DF6918F5ED84 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_33884B09D9A76EE6(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AbilityProperty a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64F4DF6918F5ED84_METHOD_1_33884B09D9A76EE6_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_A8265A155457A83A(::RPG::GameCore::AIPropertySelector* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::AIPropertySelector*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F4DF6918F5ED84_METHOD_1_A8265A155457A83A_OFFSET))(a1, a2);
	}
};
