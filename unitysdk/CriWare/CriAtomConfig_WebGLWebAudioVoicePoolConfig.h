#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_WEBGLWEBAUDIOVOICEPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFFB00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_WebGLWebAudioVoicePoolConfig_TypeDefinitionIndex = 35016;

	class CriAtomConfig_WebGLWebAudioVoicePoolConfig : public ::System::Object
	{
	public:
		::System::Int32 voices; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_WEBGLWEBAUDIOVOICEPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
