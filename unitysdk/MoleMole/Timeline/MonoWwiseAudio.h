#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A1BEE00)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_GET_IGNORESTOPALL_OFFSET UNITYSDK_OFFSET(0x1A1BEDE0)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1BEF10)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1A1BF020)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A1BEE50)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_SET_IGNORESTOPALL_OFFSET UNITYSDK_OFFSET(0x1A1BEDF0)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_STOPALL_OFFSET UNITYSDK_OFFSET(0x1A1BF0F0)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1A1BEF60)
#define MOLEMOLE_TIMELINE_MONOWWISEAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BF1C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoWwiseAudio_TypeDefinitionIndex = 44964;

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
