#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAudio_Enum_3_574D1DA45D1E5E58.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x142A4BB0)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_METHOD_7_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x142A4E00)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x142A4C10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAudio_TypeDefinitionIndex = 43236;

	class MonoEffectPluginAudio : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean sendCasterSize; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* effectStartAudioList; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* effectEndAudioList; // 0x68
		::MoleMole::Config::ConfigSoundActionGeneral* startSoundAction; // 0x70
		::MoleMole::Config::ConfigSoundActionGeneral* endSoundAction; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* MpEffectStartAudioList; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* MpEffectEndAudioList; // 0x88
		::MoleMole::Config::ConfigSoundActionGeneral* MpStartSoundAction; // 0x90
		::MoleMole::Config::ConfigSoundActionGeneral* MpEndSoundAction; // 0x98
		::System::Boolean isMpEffectAudioEnable; // 0xA0
		::System::Boolean adjustPosToApproachAvatar; // 0xA1
		::MoleMole::MonoEffectPluginAudio_Enum_3_574D1DA45D1E5E58 adjustPosMode; // 0xA4
		::UnityEngine::Vector3 startPos; // 0xA8
		::UnityEngine::Vector3 endPos; // 0xB4
		::System::Boolean mergeAudioEffect; // 0xC0
		::System::Single mergeRadius; // 0xC4
		::System::Boolean followCasterSyncs; // 0xC8
		::UnityEngine::GameObject* emitter; // 0xD0
		::UnityEngine::GameObject* caster; // 0xD8
		::System::Boolean haveTriggeredEnd; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO__CTOR_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_7_BC46FCF99873D9DD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_METHOD_7_BC46FCF99873D9DD_OFFSET))(this);
		}
	};
}
