#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x13EBAD40)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_METHOD_5_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x13EBB560)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_METHOD_5_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x13EBB170)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EBB9B0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_START_OFFSET UNITYSDK_OFFSET(0x13EBADC0)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EBAE90)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBBBD0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundScene_OuteringDoor_TypeDefinitionIndex = 43301;

	class MonoSoundScene_OuteringDoor : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 Field_5_6 = 0xF; // 0x0
		::UnityEngine::Rigidbody* Field_5_0; // 0x18
		::System::Single triggerAngularVelocity; // 0x20
		::System::String* triggerSoundEvent; // 0x28
		::System::String* convertRTPCName; // 0x30
		::System::Single convertRTPCUpper; // 0x38
		::Il2CppArray<::System::Single>* Field_5_5; // 0x40
		::UnityEngine::GameObject* Field_5_7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_CEA32FF190776922()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_METHOD_5_CEA32FF190776922_OFFSET))(this);
		}

		::System::Void Method_5_AE828D899505A3B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_OUTERINGDOOR_METHOD_5_AE828D899505A3B4_OFFSET))(this);
		}
	};
}
