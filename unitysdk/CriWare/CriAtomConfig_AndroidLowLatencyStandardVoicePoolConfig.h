#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_ANDROIDLOWLATENCYSTANDARDVOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE5CA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig_TypeDefinitionIndex = 38003;

	class CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 memoryVoices; // 0x10
		::System::Int32 streamingVoices; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_ANDROIDLOWLATENCYSTANDARDVOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
