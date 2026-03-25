#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x908E460)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x908DF10)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x908FBD0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_66D1CC6071325C2F_OFFSET UNITYSDK_OFFSET(0x9090860)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x9090510)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x908E5C0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x908DFC0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x90907B0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_B092775E5BAB567B_OFFSET UNITYSDK_OFFSET(0x908E270)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x9090480)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9090930)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__TRIGGEREFFECT_B__17_0_OFFSET UNITYSDK_OFFSET(0x9090940)

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_AirshipEffectConfig_TypeDefinitionIndex = 48405;

	class Airship_AirshipEffectConfig : public ::System::Object
	{
	public:
		::System::String* effectPrefab; // 0x10
		::UnityEngine::Vector3 positionOffset; // 0x18
		::UnityEngine::Vector3 rotationOffset; // 0x24
		::System::Boolean useWaterSurfaceTransform; // 0x30
		::UnityEngine::GameObject* _root; // 0x38
		::System::Boolean _triggered; // 0x40
		::System::Boolean _enable; // 0x41
		::System::Boolean _visible; // 0x42
		::System::String* _runtimeUniqueName; // 0x48
		::RPG::Client::MockAnimator* _Animator; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B092775E5BAB567B(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_B092775E5BAB567B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_1_913947B6596EB50A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_913947B6596EB50A_OFFSET))(this);
		}

		::System::Void Method_1_03C4FFAD29DE0852()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
		}

		::System::Void Method_1_8B848E52913DFCE9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
		}

		::System::Void Method_1_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::System::Void Method_1_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_1_AAD864A9DF964170()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_AAD864A9DF964170_OFFSET))(this);
		}

		::System::Void Method_1_66D1CC6071325C2F(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_66D1CC6071325C2F_OFFSET))(this, a1, a2);
		}

		::System::Void _TriggerEffect_b__17_0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams p)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__TRIGGEREFFECT_B__17_0_OFFSET))(this, effect, p);
		}
	};
}
