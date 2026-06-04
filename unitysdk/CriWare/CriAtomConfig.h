#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomConfig_InGamePreviewSwitchMode.h"
#include "unitysdk/CriWare/CriAtomConfig_LinuxOutput.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_EditorPcmOutputConfig; }
namespace CriWare { class CriAtomConfig_HcaMxVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_InGamePreviewConfig; }
namespace CriWare { class CriAtomConfig_Ps4Atrac9VoicePoolConfig; }
namespace CriWare { class CriAtomConfig_Ps4Audio3dConfig; }
namespace CriWare { class CriAtomConfig_Ps5PortConfig; }
namespace CriWare { class CriAtomConfig_StandardVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_SwitchOpusVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_VitaAtrac9VoicePoolConfig; }
namespace CriWare { class CriAtomConfig_VitaManaVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_WebGLWebAudioVoicePoolConfig; }
namespace System { class String; }

#define CRIWARE_CRIATOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14684C90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_TypeDefinitionIndex = 37191;

	class CriAtomConfig : public ::System::Object
	{
	public:
		::System::String* acfFileName; // 0x10
		::System::Int32 maxVirtualVoices; // 0x18
		::System::Int32 maxVoiceLimitGroups; // 0x1C
		::System::Int32 maxCategories; // 0x20
		::System::Int32 maxAisacs; // 0x24
		::System::Int32 maxBusSends; // 0x28
		::System::Int32 maxSequenceEventsPerFrame; // 0x2C
		::System::Int32 maxBeatSyncCallbacksPerFrame; // 0x30
		::System::Int32 maxCueLinkCallbacksPerFrame; // 0x34
		::CriWare::CriAtomConfig_StandardVoicePoolConfig* standardVoicePoolConfig; // 0x38
		::CriWare::CriAtomConfig_HcaMxVoicePoolConfig* hcaMxVoicePoolConfig; // 0x40
		::System::Int32 outputSamplingRate; // 0x48
		::System::Boolean usesInGamePreview; // 0x4C
		::CriWare::CriAtomConfig_InGamePreviewSwitchMode inGamePreviewMode; // 0x50
		::System::Boolean switchInitializeSocket; // 0x54
		::CriWare::CriAtomConfig_InGamePreviewConfig* inGamePreviewConfig; // 0x58
		::System::Single serverFrequency; // 0x60
		::System::Int32 asrOutputChannels; // 0x64
		::System::Boolean useRandomSeedWithTime; // 0x68
		::System::Int32 categoriesPerPlayback; // 0x6C
		::System::Int32 maxFaders; // 0x70
		::System::Int32 maxBuses; // 0x74
		::System::Int32 maxParameterBlocks; // 0x78
		::System::Boolean vrMode; // 0x7C
		::System::Boolean keepPlayingSoundOnPause; // 0x7D
		::CriWare::CriAtomConfig_EditorPcmOutputConfig* editorPcmOutputConfig; // 0x80
		::System::Int32 pcBufferingTime; // 0x88
		::CriWare::CriAtomConfig_LinuxOutput linuxOutput; // 0x8C
		::System::Int32 linuxPulseLatencyUsec; // 0x90
		::System::Boolean iosEnableSonicSync; // 0x94
		::System::Int32 iosBufferingTime; // 0x98
		::System::Boolean iosOverrideIPodMusic; // 0x9C
		::System::Boolean androidEnableSonicSync; // 0x9D
		::System::Int32 androidBufferingTime; // 0xA0
		::System::Int32 androidStartBufferingTime; // 0xA4
		::CriWare::CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig* androidLowLatencyStandardVoicePoolConfig; // 0xA8
		::System::Boolean androidUsesAndroidFastMixer; // 0xB0
		::System::Boolean androidForceToUseAsrForDefaultPlayback; // 0xB1
		::System::Boolean androidUsesAAudio; // 0xB2
		::System::Int32 androidStreamType; // 0xB4
		::CriWare::CriAtomConfig_VitaManaVoicePoolConfig* vitaManaVoicePoolConfig; // 0xB8
		::CriWare::CriAtomConfig_VitaAtrac9VoicePoolConfig* vitaAtrac9VoicePoolConfig; // 0xC0
		::CriWare::CriAtomConfig_Ps4Atrac9VoicePoolConfig* ps4Atrac9VoicePoolConfig; // 0xC8
		::CriWare::CriAtomConfig_Ps5PortConfig* ps5PortConfig; // 0xD0
		::System::Boolean switchEnableSonicSync; // 0xD8
		::CriWare::CriAtomConfig_SwitchOpusVoicePoolConfig* switchOpusVoicePoolConfig; // 0xE0
		::CriWare::CriAtomConfig_Ps4Audio3dConfig* ps4Audio3dConfig; // 0xE8
		::CriWare::CriAtomConfig_WebGLWebAudioVoicePoolConfig* webglWebAudioVoicePoolConfig; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
