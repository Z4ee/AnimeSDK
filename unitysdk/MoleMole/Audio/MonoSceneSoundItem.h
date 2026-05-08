#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xFEFB780)
#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xFEFB720)
#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xFEFB710)
#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFEFB830)
#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_ONSCENELEAVE_OFFSET UNITYSDK_OFFSET(0xFEFBB40)
#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_ONSCENETAGCHANGED_OFFSET UNITYSDK_OFFSET(0xFEFB910)
#define MOLEMOLE_AUDIO_MONOSCENESOUNDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFEFBBC0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSceneSoundItem_TypeDefinitionIndex = 68269;

	class MonoSceneSoundItem : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::GameObject* soundEmitter; // 0x58
		::System::Boolean currentActive; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* activeWhenSoundSceneTags; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnSceneTagChanged(::System::Collections::Generic::HashSet_1<::System::String*>* sceneTags, ::System::Collections::Generic::HashSet_1<::System::String*>* globalTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_ONSCENETAGCHANGED_OFFSET))(this, sceneTags, globalTags);
		}

		::System::Void OnSceneLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSCENESOUNDITEM_ONSCENELEAVE_OFFSET))(this);
		}
	};
}
