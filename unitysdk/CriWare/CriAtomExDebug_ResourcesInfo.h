#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_ResourceUsage.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExDebug_ResourcesInfo_TypeDefinitionIndex = 38020;

	struct alignas(4) CriAtomExDebug_ResourcesInfo
	{
		::CriWare::CriAtomEx_ResourceUsage virtualVoiceUsage; // 0x10
		::CriWare::CriAtomEx_ResourceUsage sequenceUsage; // 0x18
		::CriWare::CriAtomEx_ResourceUsage sequenceTrackUsage; // 0x20
		::CriWare::CriAtomEx_ResourceUsage sequenceTrackItemUsage; // 0x28
		::CriWare::CriAtomEx_ResourceUsage parameterBlock; // 0x30
		::CriWare::CriAtomEx_ResourceUsage beatSyncInfo; // 0x38
		::CriWare::CriAtomEx_ResourceUsage beatSyncTransitionSetting; // 0x40
		::CriWare::CriAtomEx_ResourceUsage beatSyncJob; // 0x48
	};
}
