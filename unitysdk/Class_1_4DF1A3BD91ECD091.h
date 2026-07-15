#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_4DF1A3BD91ECD091__CTOR_OFFSET UNITYSDK_OFFSET(0x150920D0)

inline static constexpr unsigned int Class_1_4DF1A3BD91ECD091_TypeDefinitionIndex = 56090;

class Class_1_4DF1A3BD91ECD091 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::BattleShowUIPageParam* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::BattleHintToastServiceType Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF1A3BD91ECD091__CTOR_OFFSET))(this);
	}
};
