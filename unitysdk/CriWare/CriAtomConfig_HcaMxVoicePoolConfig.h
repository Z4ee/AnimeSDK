#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_HCAMXVOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14684E70)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_HcaMxVoicePoolConfig_TypeDefinitionIndex = 37193;

	class CriAtomConfig_HcaMxVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 memoryVoices; // 0x10
		::System::Int32 streamingVoices; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_HCAMXVOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
