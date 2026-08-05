#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Audio/MonoSound_SimpleMASTS_Watcher_Enum_3_AFB340EC45DBD241.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Audio { class MonoSound_SimpleMASTS_Watcher_Class_1_87A39285B4D9F2A1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x14830EA0)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_METHOD_5_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x14831800)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x14831200)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_START_OFFSET UNITYSDK_OFFSET(0x14830F70)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14831280)
#define MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x14831730)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSound_SimpleMASTS_Watcher_TypeDefinitionIndex = 69523;

	class MonoSound_SimpleMASTS_Watcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rigidbody* Field_5_2; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Audio::MonoSound_SimpleMASTS_Watcher_Enum_3_AFB340EC45DBD241>* watchTypes; // 0x20
		::System::Collections::Generic::Dictionary_2<::MoleMole::Audio::MonoSound_SimpleMASTS_Watcher_Enum_3_AFB340EC45DBD241, ::MoleMole::Audio::MonoSound_SimpleMASTS_Watcher_Class_1_87A39285B4D9F2A1*>* Field_5_0; // 0x28
		::System::Int32 historyWindowSize; // 0x30
		::System::Single Field_5_6; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_START_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_E21AC6EE08DC160A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_SIMPLEMASTS_WATCHER_METHOD_5_E21AC6EE08DC160A_OFFSET))(this);
		}
	};
}
