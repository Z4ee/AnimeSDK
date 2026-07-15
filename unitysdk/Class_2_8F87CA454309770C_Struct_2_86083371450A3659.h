#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueTournTitanBless; }

#define CLASS_2_8F87CA454309770C_STRUCT_2_86083371450A3659_METHOD_2_CE6F7E385BE54A97_OFFSET UNITYSDK_OFFSET(0x158D6FB0)

inline static constexpr unsigned int Class_2_8F87CA454309770C_Struct_2_86083371450A3659_TypeDefinitionIndex = 69053;

struct alignas(4) Class_2_8F87CA454309770C_Struct_2_86083371450A3659
{
	::RPG::GameCore::RogueTitanType Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	static ::Class_2_8F87CA454309770C_Struct_2_86083371450A3659 Method_2_CE6F7E385BE54A97(::RPG::Client::RogueTournTitanBless* a1)
	{
		return ((::Class_2_8F87CA454309770C_Struct_2_86083371450A3659(*)(::RPG::Client::RogueTournTitanBless*))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C_STRUCT_2_86083371450A3659_METHOD_2_CE6F7E385BE54A97_OFFSET))(a1);
	}
};
