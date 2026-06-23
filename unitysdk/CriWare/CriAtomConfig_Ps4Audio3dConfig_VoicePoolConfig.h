#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_PS4AUDIO3DCONFIG_VOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E401870)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig_TypeDefinitionIndex = 34363;

	class CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 memoryVoices; // 0x10
		::System::Int32 streamingVoices; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_PS4AUDIO3DCONFIG_VOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
