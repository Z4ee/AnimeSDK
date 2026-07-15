#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Emo2DAtlasConfig_TypeDefinitionIndex = 67929;

	struct alignas(4) Emo2DAtlasConfig
	{
		::System::Boolean EnableEye; // 0x10
		::System::Int32 LeftEyeIndex; // 0x14
		::System::Int32 RightEyeIndex; // 0x18
		::System::Boolean EnableMouth; // 0x1C
		::System::Int32 MouthIndex; // 0x20
	};
}
