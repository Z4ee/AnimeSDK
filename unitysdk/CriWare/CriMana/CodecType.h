#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int CodecType_TypeDefinitionIndex = 34395;

	enum class CodecType : ::System::Int32
	{
		Unknown = 0,
		SofdecPrime = 1,
		H264 = 5,
		VP9 = 9,
	};
}
