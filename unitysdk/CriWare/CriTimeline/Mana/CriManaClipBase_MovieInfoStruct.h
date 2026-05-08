#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClipBase_MovieInfoStruct_TypeDefinitionIndex = 32827;

	struct alignas(4) CriManaClipBase_MovieInfoStruct
	{
		::System::UInt32 width; // 0x10
		::System::UInt32 height; // 0x14
		::System::UInt32 dispWidth; // 0x18
		::System::UInt32 dispHeight; // 0x1C
		::System::UInt32 framerateN; // 0x20
		::System::UInt32 framerateD; // 0x24
		::System::UInt32 totalFrames; // 0x28
		::CriWare::CriMana::CodecType _codecType; // 0x2C
		::CriWare::CriMana::CodecType _alphaCodecType; // 0x30
	};
}
