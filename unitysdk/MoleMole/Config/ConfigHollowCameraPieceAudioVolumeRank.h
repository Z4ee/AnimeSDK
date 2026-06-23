#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraPieceAudioVolumeRank_TypeDefinitionIndex = 76939;

	struct alignas(4) ConfigHollowCameraPieceAudioVolumeRank
	{
		::UnityEngine::Vector4 border; // 0x10
		::System::Int32 volumnRank; // 0x20
	};
}
