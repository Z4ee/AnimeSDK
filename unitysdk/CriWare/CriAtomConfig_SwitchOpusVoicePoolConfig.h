#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_SWITCHOPUSVOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E65FA80)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_SwitchOpusVoicePoolConfig_TypeDefinitionIndex = 34361;

	class CriAtomConfig_SwitchOpusVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 memoryVoices; // 0x10
		::System::Int32 streamingVoices; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_SWITCHOPUSVOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
