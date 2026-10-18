#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ED17B6CCBE9C897A;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC5475A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_METHOD_5_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xC547380)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_METHOD_5_F7380D66500DA4A4_OFFSET UNITYSDK_OFFSET(0xC547A30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC547550)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC5474A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_START_OFFSET UNITYSDK_OFFSET(0xC547330)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK__CTOR_OFFSET UNITYSDK_OFFSET(0xC547B20)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePetTailOffsetIK_TypeDefinitionIndex = 75957;

	class MarblePetTailOffsetIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* TailTipName; // 0x18
		::System::Int32 SpineBoneCount; // 0x20
		::UnityEngine::Vector3 LocalTipOffset; // 0x24
		::System::Single MaxOffsetDistance; // 0x30
		::System::Single SmoothTime; // 0x34
		::System::Boolean KeepTipRotation; // 0x38
		::System::Single FadeInTime; // 0x3C
		::System::Int32 MaxSolveIterations; // 0x40
		::Class_1_ED17B6CCBE9C897A* MOFKDLANDGM; // 0x48
		::UnityEngine::Transform* KAKCBIHFFHE; // 0x50
		::UnityEngine::Transform* OIIMANHFLLM; // 0x58
		::UnityEngine::Vector3 HIDGMPONBGP; // 0x60
		::UnityEngine::Vector3 DKJPFFLKDGK; // 0x6C
		::UnityEngine::Vector3 MOIFCJHALAH; // 0x78
		::System::Single MIDNAPGJMLN; // 0x84
		::System::Boolean DOFJLCMOJML; // 0x88
		::System::Boolean FOENJLEADCA; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_0581090195E9C81F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_METHOD_5_0581090195E9C81F_OFFSET))(this);
		}

		static ::UnityEngine::Transform* Method_5_F7380D66500DA4A4(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPETTAILOFFSETIK_METHOD_5_F7380D66500DA4A4_OFFSET))(a1, a2);
		}
	};
}
