#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_PARTICLESYSTEMPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xAC3FD70)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xAC40030)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_PLAYONPARTICLEBEGIN_OFFSET UNITYSDK_OFFSET(0xAC40090)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_PLAY_OFFSET UNITYSDK_OFFSET(0xAC3FE30)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_SETAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xAC400E0)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_STOP_OFFSET UNITYSDK_OFFSET(0xAC3FFC0)
#define RPG_CLIENT_PARTICLESYSTEMPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xAC40150)
#define RPG_CLIENT_PARTICLESYSTEMPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xAC402F0)
#define RPG_CLIENT_PARTICLESYSTEMPROXY__TRYPOSTAUDIO_OFFSET UNITYSDK_OFFSET(0xAC3FEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemProxy_TypeDefinitionIndex = 55325;

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

		::System::Void SetAutoPlay(::System::Boolean autoPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMPROXY_SETAUTOPLAY_OFFSET))(this, autoPlay);
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
