#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int CurvePreviewInfo_TypeDefinitionIndex = 66999;

	struct alignas(8) CurvePreviewInfo
	{
		::System::Int32 Index; // 0x10
		::System::String* CurveName; // 0x18
	};
}
