#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCameraStretch_ParaInfo_TypeDefinitionIndex = 42560;

	struct alignas(8) ChessboardCameraStretch_ParaInfo
	{
		::System::String* ShakeKey; // 0x10
	};
}
