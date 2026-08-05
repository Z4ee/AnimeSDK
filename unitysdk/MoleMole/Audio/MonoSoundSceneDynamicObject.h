#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x12799A20)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x12799C90)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x12799CF0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x12799500)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12799960)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12799440)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12799C30)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneDynamicObject_TypeDefinitionIndex = 62749;

	class MonoSoundSceneDynamicObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* eventName; // 0x18
		::System::Single activeDistance; // 0x20
		::UnityEngine::GameObject* soundEmitter; // 0x28
		::System::Boolean multiplePosition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_5_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_937F8473216A3162_OFFSET))(this);
		}

		::System::Void Method_5_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_EEED34E9AAC26D51_OFFSET))(this);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}
	};
}
