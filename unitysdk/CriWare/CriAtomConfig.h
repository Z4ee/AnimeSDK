#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomConfig_InGamePreviewSwitchMode.h"
#include "unitysdk/CriWare/CriAtomConfig_LinuxOutput.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/CriWare/CriAtom_SpeakerMapping.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_EditorPcmOutputConfig; }
namespace CriWare { class CriAtomConfig_HcaMxVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_InGamePreviewConfig; }
namespace CriWare { class CriAtomConfig_Ps4Atrac9VoicePoolConfig; }
namespace CriWare { class CriAtomConfig_Ps4Audio3dConfig; }
namespace CriWare { class CriAtomConfig_Ps5PortConfig; }
namespace CriWare { class CriAtomConfig_StandardVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_Switch2OpusVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_SwitchOpusVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_VitaAtrac9VoicePoolConfig; }
namespace CriWare { class CriAtomConfig_VitaManaVoicePoolConfig; }
namespace CriWare { class CriAtomConfig_WebGLWebAudioVoicePoolConfig; }
namespace System { class String; }

#define CRIWARE_CRIATOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x164A6A90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_TypeDefinitionIndex = 38855;

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
		::System::Boolean switch2InitializeSocket; // 0x55
		::CriWare::CriAtomConfig_InGamePreviewConfig* inGamePreviewConfig; // 0x58
		::System::Single serverFrequency; // 0x60
		::CriWare::CriAtom_SpeakerMapping speakerMapping; // 0x64
		::System::Int32 asrOutputChannels; // 0x68
		::System::Boolean useRandomSeedWithTime; // 0x6C
		::System::Int32 categoriesPerPlayback; // 0x70
		::System::Int32 maxFaders; // 0x74
		::System::Int32 maxBuses; // 0x78
		::System::Single maxPitch; // 0x7C
		::System::Int32 maxParameterBlocks; // 0x80
		::CriWare::CriAtomEx_SoundRendererType soundRendererType; // 0x84
		::System::Boolean keepPlayingSoundOnPause; // 0x88
		::System::Boolean enableSonicSync; // 0x89
		::System::Boolean enableAtomSoundDisabledMode; // 0x8A
		::System::Boolean enableAtomSoundDisabledModeLinux; // 0x8B
		::CriWare::CriAtomConfig_EditorPcmOutputConfig* editorPcmOutputConfig; // 0x90
		::System::Int32 pcBufferingTime; // 0x98
		::System::Boolean useMicrosoftSpatialSound; // 0x9C
		::CriWare::CriAtomConfig_LinuxOutput linuxOutput; // 0xA0
		::System::Int32 linuxPulseLatencyUsec; // 0xA4
		::System::Boolean iosEnableSonicSync; // 0xA8
		::System::Int32 iosBufferingTime; // 0xAC
		::System::Boolean iosOverrideIPodMusic; // 0xB0
		::System::Boolean iosEnableOSNotificationHandling; // 0xB1
		::System::Boolean androidEnableSonicSync; // 0xB2
		::System::Int32 androidBufferingTime; // 0xB4
		::System::Int32 androidStartBufferingTime; // 0xB8
		::CriWare::CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig* androidLowLatencyStandardVoicePoolConfig; // 0xC0
		::System::Boolean androidUsesAndroidFastMixer; // 0xC8
		::System::Boolean androidForceToUseAsrForDefaultPlayback; // 0xC9
		::System::Boolean androidUsesAAudio; // 0xCA
		::System::Int32 androidStreamType; // 0xCC
		::CriWare::CriAtomConfig_VitaManaVoicePoolConfig* vitaManaVoicePoolConfig; // 0xD0
		::CriWare::CriAtomConfig_VitaAtrac9VoicePoolConfig* vitaAtrac9VoicePoolConfig; // 0xD8
		::CriWare::CriAtomConfig_Ps4Atrac9VoicePoolConfig* ps4Atrac9VoicePoolConfig; // 0xE0
		::CriWare::CriAtomConfig_Ps5PortConfig* ps5PortConfig; // 0xE8
		::System::Int32 ps5Mp3StreamingVoices; // 0xF0
		::System::Boolean switchEnableSonicSync; // 0xF4
		::CriWare::CriAtomConfig_SwitchOpusVoicePoolConfig* switchOpusVoicePoolConfig; // 0xF8
		::CriWare::CriAtomConfig_Switch2OpusVoicePoolConfig* switch2OpusVoicePoolConfig; // 0x100
		::CriWare::CriAtomConfig_Ps4Audio3dConfig* ps4Audio3dConfig; // 0x108
		::System::Int32 ps4Mp3StreamingVoices; // 0x110
		::CriWare::CriAtomConfig_WebGLWebAudioVoicePoolConfig* webglWebAudioVoicePoolConfig; // 0x118
		::System::Boolean webglUseWebAudioMixerAsDefault; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
