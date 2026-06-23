#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1107D9C0)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_METHOD_5_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x1107DFF0)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1107DD90)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_START_OFFSET UNITYSDK_OFFSET(0x1107DA00)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1107DA40)
#define MOLEMOLE_AUDIO_MONOSOUND_DOPPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1107E510)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSound_Doppler_TypeDefinitionIndex = 62686;

	class MonoSound_Doppler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3, ::System::Single>>* Field_5_0; // 0x18
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Vector3, ::System::Single>>* Field_5_1; // 0x20
		::System::Int32 Field_5_2; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x2C
		::UnityEngine::Vector3 Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x44
		::System::Single Field_5_6; // 0x48
		::System::Single Field_5_7; // 0x4C
		::System::Single Field_5_8; // 0x50
		::System::String* dopplerRTPCName; // 0x58
		::System::Single dopplerScale; // 0x60
		::System::Single maxDopplerVelocity; // 0x64
		::System::Single Field_5_12; // 0x68
		::UnityEngine::GameObject* audioEmitter; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_METHOD_5_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUND_DOPPLER_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}
	};
}
