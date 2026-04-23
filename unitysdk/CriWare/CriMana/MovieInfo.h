#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/AudioInfo.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANA_MOVIEINFO_GET_HASALPHA_OFFSET UNITYSDK_OFFSET(0x12C109F0)
#define CRIWARE_CRIMANA_MOVIEINFO_SET_HASALPHA_OFFSET UNITYSDK_OFFSET(0x12C118E0)
#define CRIWARE_CRIMANA_MOVIEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C118F0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int MovieInfo_TypeDefinitionIndex = 36945;

	class MovieInfo : public ::System::Object
	{
	public:
		::System::UInt32 _reserved1; // 0x10
		::System::UInt32 numAlphaStreams; // 0x14
		::System::UInt32 width; // 0x18
		::System::UInt32 height; // 0x1C
		::System::UInt32 dispWidth; // 0x20
		::System::UInt32 dispHeight; // 0x24
		::System::UInt32 framerateN; // 0x28
		::System::UInt32 framerateD; // 0x2C
		::System::UInt32 totalFrames; // 0x30
		::CriWare::CriMana::CodecType codecType; // 0x34
		::CriWare::CriMana::CodecType alphaCodecType; // 0x38
		::System::UInt32 numAudioStreams; // 0x3C
		::Il2CppArray<::CriWare::CriMana::AudioInfo>* audioPrm; // 0x40
		::System::UInt32 numSubtitleChannels; // 0x48
		::System::UInt32 maxSubtitleSize; // 0x4C
		::System::UInt32 maxChunkSize; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_MOVIEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_hasAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_MOVIEINFO_GET_HASALPHA_OFFSET))(this);
		}

		::System::Void set_hasAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_MOVIEINFO_SET_HASALPHA_OFFSET))(this, value);
		}
	};
}
