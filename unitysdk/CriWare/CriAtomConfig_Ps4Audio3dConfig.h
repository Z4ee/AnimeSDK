#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig; }

#define CRIWARE_CRIATOMCONFIG_PS4AUDIO3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14684F10)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_Ps4Audio3dConfig_TypeDefinitionIndex = 37204;

	class CriAtomConfig_Ps4Audio3dConfig : public ::System::Object
	{
	public:
		::System::Boolean useAudio3D; // 0x10
		::CriWare::CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig* voicePoolConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_PS4AUDIO3DCONFIG__CTOR_OFFSET))(this);
		}
	};
}
