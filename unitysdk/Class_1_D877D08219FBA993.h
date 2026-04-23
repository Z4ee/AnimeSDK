#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_D877D08219FBA993__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1F850)

inline static constexpr unsigned int Class_1_D877D08219FBA993_TypeDefinitionIndex = 54133;

class Class_1_D877D08219FBA993 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::String* Field_1_3; // 0x18
	::RPG::Client::BattleShowUIPageParam* Field_1_4; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::RPG::GameCore::BattleHintToastServiceType Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D877D08219FBA993__CTOR_OFFSET))(this);
	}
};
