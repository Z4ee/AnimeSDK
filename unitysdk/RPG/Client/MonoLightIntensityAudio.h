#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_METHOD_5_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0xD844270)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_METHOD_5_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0xD844060)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_METHOD_5_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0xD8442F0)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_START_OFFSET UNITYSDK_OFFSET(0xD843F20)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0xD844130)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0xD844360)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLightIntensityAudio_TypeDefinitionIndex = 68608;

	class MonoLightIntensityAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single MNMKACKAKDF; // 0x0
		::UnityEngine::Light* _LightObject; // 0x18
		::System::Single LFBOFFNMACP; // 0x20
		::System::Boolean LFKFOKNFJFN; // 0x24
		::RPG::Client::GeneralAudioItem* _TurnOnAudio; // 0x28
		::RPG::Client::GeneralAudioItem* _TurnOffAudio; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_0C44FB644D25C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_METHOD_5_0C44FB644D25C1C2_OFFSET))(this);
		}

		::System::Void Method_5_B7A43C06FD78D78B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_METHOD_5_B7A43C06FD78D78B_OFFSET))(this);
		}

		::System::Void Method_5_899EC372DEC6EBDF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_METHOD_5_899EC372DEC6EBDF_OFFSET))(this, a1);
		}
	};
}
