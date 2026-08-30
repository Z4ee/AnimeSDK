#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_PARTICLESYSTEMPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xDA44440)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xDA446F0)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_PLAYONPARTICLEBEGIN_OFFSET UNITYSDK_OFFSET(0xDA44750)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_PLAY_OFFSET UNITYSDK_OFFSET(0xDA44500)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_SETAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xDA447A0)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_STOP_OFFSET UNITYSDK_OFFSET(0xDA44680)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA44810)
#define RPG_CLIENT_PARTICLESYSTEMPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xDA449C0)
#define RPG_CLIENT_PARTICLESYSTEMPROXY__TRYPOSTAUDIO_OFFSET UNITYSDK_OFFSET(0xDA44570)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemProxy_TypeDefinitionIndex = 60096;

	class ParticleSystemProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* _ParticleSystem; // 0x18
		::System::Single _Timer; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* _AudioList; // 0x28
		::Il2CppArray<::RPG::Client::GeneralAudioItem*>* _PlayEventNames; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_STOP_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_CLEAR_OFFSET))(this);
		}

		::System::Void PlayOnParticleBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_PLAYONPARTICLEBEGIN_OFFSET))(this);
		}

		::System::Void SetAutoPlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_SETAUTOPLAY_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void _TryPostAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY__TRYPOSTAUDIO_OFFSET))(this);
		}
	};
}
