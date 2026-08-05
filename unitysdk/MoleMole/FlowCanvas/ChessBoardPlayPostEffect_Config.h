#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/PostEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardPlayPostEffect_Config_TypeDefinitionIndex = 68137;

	struct alignas(8) ChessBoardPlayPostEffect_Config
	{
		::System::Single Duration; // 0x10
		::ProtoScript::PostEffectType Type; // 0x14
		::System::Boolean Enable; // 0x18
		::System::String* Key; // 0x20
	};
}
