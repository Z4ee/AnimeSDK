#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastServiceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_4DF1A3BD91ECD091__CTOR_OFFSET UNITYSDK_OFFSET(0x170CC190)

inline static constexpr unsigned int Class_1_4DF1A3BD91ECD091_TypeDefinitionIndex = 58865;

class Class_1_4DF1A3BD91ECD091 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::Client::BattleShowUIPageParam* NNACKOBKFGE; // 0x20
	::System::Boolean GNDCCBNILML; // 0x28
	::RPG::GameCore::BattleHintToastServiceType GMPGDEINODK; // 0x2C
	::System::Single KIPAGNCANAJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF1A3BD91ECD091__CTOR_OFFSET))(this);
	}
};
