#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/PostEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PostEffect_Config_TypeDefinitionIndex = 64378;

	struct alignas(8) ConfigHollowChessboard_PostEffect_Config
	{
		::System::Single Duration; // 0x10
		::ProtoScript::PostEffectType Type; // 0x14
		::System::Boolean Enable; // 0x18
		::System::String* Key; // 0x20
	};
}
