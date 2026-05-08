#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_ShadersThatShareTiling_ShaderThatSharesTiling_TypeDefinitionIndex = 85079;

	struct alignas(8) MB3_ShadersThatShareTiling_ShaderThatSharesTiling
	{
		::System::String* shadername; // 0x10
		::System::Boolean allPropsShareTiling; // 0x18
		::System::String* tilingTexturePropName; // 0x20
	};
}
