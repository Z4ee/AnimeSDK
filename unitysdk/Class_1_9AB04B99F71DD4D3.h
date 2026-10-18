#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_9AB04B99F71DD4D3__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF2500)

inline static constexpr unsigned int Class_1_9AB04B99F71DD4D3_TypeDefinitionIndex = 58717;

class Class_1_9AB04B99F71DD4D3 : public ::System::Object
{
public:
	::System::String* GFNAPNFFGPJ; // 0x10
	::RPG::Client::BattleShowUIPageParam* NNACKOBKFGE; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	::Enum_3_ED790DAC948A65A9_6 GMPGDEINODK; // 0x28
	::System::Boolean GNDCCBNILML; // 0x2C
	::System::Single KIPAGNCANAJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AB04B99F71DD4D3__CTOR_OFFSET))(this);
	}
};
