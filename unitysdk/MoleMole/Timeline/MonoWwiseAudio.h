#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_AWAKE_OFFSET UNITYSDK_OFFSET(0x15BC7C70)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_GET_IGNORESTOPALL_OFFSET UNITYSDK_OFFSET(0x15BC7C50)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15BC7D80)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x15BC7E90)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_REGISTER_OFFSET UNITYSDK_OFFSET(0x15BC7CC0)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_SET_IGNORESTOPALL_OFFSET UNITYSDK_OFFSET(0x15BC7C60)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_STOPALL_OFFSET UNITYSDK_OFFSET(0x15BC7F60)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x15BC7DD0)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC8030)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoWwiseAudio_TypeDefinitionIndex = 48348;

	class MonoWwiseAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ignoreStopAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_GET_IGNORESTOPALL_OFFSET))(this);
		}

		::System::Void set_ignoreStopAll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_SET_IGNORESTOPALL_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_REGISTER_OFFSET))(this);
		}

		::System::Void UnRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_UNREGISTER_OFFSET))(this);
		}

		::System::Void PostEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_POSTEVENT_OFFSET))(this, a1);
		}

		::System::Void StopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOWWISEAUDIO_STOPALL_OFFSET))(this);
		}
	};
}
