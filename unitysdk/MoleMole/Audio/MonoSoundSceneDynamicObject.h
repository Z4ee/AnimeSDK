#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x141D2A60)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x141D2D30)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x141D2CD0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x141D2550)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x141D29A0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x141D2490)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x141D2C70)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundSceneDynamicObject_TypeDefinitionIndex = 49022;

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

		::System::Void Method_5_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_937F8473216A3162_OFFSET))(this);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Method_5_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_5_D68547FF19A170E2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENEDYNAMICOBJECT_METHOD_5_D68547FF19A170E2_OFFSET))(this);
		}
	};
}
