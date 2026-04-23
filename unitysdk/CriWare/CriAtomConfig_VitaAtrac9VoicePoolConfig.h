#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_VITAATRAC9VOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC81A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_VitaAtrac9VoicePoolConfig_TypeDefinitionIndex = 36900;

	class CriAtomConfig_VitaAtrac9VoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 memoryVoices; // 0x10
		::System::Int32 streamingVoices; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_VITAATRAC9VOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
