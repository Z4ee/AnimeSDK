#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/AlphaType.h"
#include "unitysdk/CriWare/CriMana/ColorSpaceConversionType.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANA_FRAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x164F5A90)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int FrameInfo_TypeDefinitionIndex = 38914;

	class FrameInfo : public ::System::Object
	{
	public:
		::System::Int32 frameNo; // 0x10
		::System::Int32 frameNoPerFile; // 0x14
		::System::UInt32 width; // 0x18
		::System::UInt32 height; // 0x1C
		::System::UInt32 dispWidth; // 0x20
		::System::UInt32 dispHeight; // 0x24
		::System::UInt32 numImages; // 0x28
		::System::UInt32 framerateN; // 0x2C
		::System::UInt32 framerateD; // 0x30
		::System::UInt32 _reserved1; // 0x34
		::System::UInt64 time; // 0x38
		::System::UInt64 tunit; // 0x40
		::System::UInt32 cntConcatenatedMovie; // 0x48
		::CriWare::CriMana::AlphaType alphaType; // 0x4C
		::System::UInt32 cntSkippedFrames; // 0x50
		::System::UInt32 totalFramesPerFile; // 0x54
		::CriWare::CriMana::ColorSpaceConversionType colorConv; // 0x58
		::System::Int32 padding; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_FRAMEINFO__CTOR_OFFSET))(this);
		}
	};
}
