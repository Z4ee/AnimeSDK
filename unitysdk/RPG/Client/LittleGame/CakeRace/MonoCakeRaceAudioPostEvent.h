#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AudioManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD4AEAF0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_3D9D7F249A4577C0_OFFSET UNITYSDK_OFFSET(0xD4AF440)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_CC9738720171171B_OFFSET UNITYSDK_OFFSET(0xD4AEF10)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_D0D3ED1387E89D3E_OFFSET UNITYSDK_OFFSET(0xD4AF2D0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0xD4AEE90)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_FB257962C61468C7_OFFSET UNITYSDK_OFFSET(0xD4AF060)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4AF1F0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4AEC70)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD4AF4B0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int MonoCakeRaceAudioPostEvent_TypeDefinitionIndex = 77511;

	class MonoCakeRaceAudioPostEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent>* _AudioEventList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FDCGDJJDDOF; // 0x28
		::System::Int32 CLPKBAJPOOL; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean Method_5_CC9738720171171B(::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_CC9738720171171B_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_F54DE4640CE99063(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_F54DE4640CE99063_OFFSET))(this, a1);
		}

		::System::Void Method_5_FB257962C61468C7(::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_FB257962C61468C7_OFFSET))(this, a1);
		}

		::System::Void Method_5_D0D3ED1387E89D3E(::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_D0D3ED1387E89D3E_OFFSET))(this, a1);
		}

		::RPG::Client::AudioManager* Method_5_3D9D7F249A4577C0()
		{
			return ((::RPG::Client::AudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_METHOD_5_3D9D7F249A4577C0_OFFSET))(this);
		}
	};
}
