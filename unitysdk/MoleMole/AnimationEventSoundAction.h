#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_AUTOCREATECUSTOMSOUNDEMITTER_OFFSET UNITYSDK_OFFSET(0x116C6340)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x116C68B0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x116C66B0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_SOUNDOTHER_OFFSET UNITYSDK_OFFSET(0x116C69F0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_SOUNDPLAY_OFFSET UNITYSDK_OFFSET(0x116C6910)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_SOUNDSTOP_OFFSET UNITYSDK_OFFSET(0x116C6980)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x116C6B00)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationEventSoundAction_TypeDefinitionIndex = 68773;

	class AnimationEventSoundAction : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* soundActionPlay; // 0x58
		::MoleMole::Config::ConfigSoundActionGeneral* soundActionStop; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* soundActionOthers; // 0x68
		::System::Boolean useDefaultGameObject; // 0x70
		::System::Boolean useSelf; // 0x71
		::UnityEngine::GameObject* target; // 0x78
		::System::Boolean mutePlay; // 0x80
		::System::Boolean muteStop; // 0x81
		::System::Boolean muteOthers; // 0x82

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION__CTOR_OFFSET))(this);
		}

		::System::Void AutoCreateCustomSoundEmitter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_AUTOCREATECUSTOMSOUNDEMITTER_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void SoundPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_SOUNDPLAY_OFFSET))(this);
		}

		::System::Void SoundStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_SOUNDSTOP_OFFSET))(this);
		}

		::System::Void SoundOther(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_SOUNDOTHER_OFFSET))(this, key);
		}
	};
}
