#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xC725340)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xC72B900)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC72BBC0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC7252A0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xC7253D0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0xC725710)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_66D1CC6071325C2F_OFFSET UNITYSDK_OFFSET(0xC72BC90)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC725460)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_C8E2469222842786_1_OFFSET UNITYSDK_OFFSET(0xC72B880)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xC727350)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_C948B80B0E3EE644_OFFSET UNITYSDK_OFFSET(0xC725120)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC7250C0)
#define RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__TRIGGEREFFECT_B__20_0_OFFSET UNITYSDK_OFFSET(0xC72BD60)

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_AirshipEffectConfig_TypeDefinitionIndex = 59924;

	class Airship_AirshipEffectConfig : public ::System::Object
	{
	public:
		::System::String* effectPrefab; // 0x10
		::UnityEngine::Vector3 positionOffset; // 0x18
		::UnityEngine::Vector3 rotationOffset; // 0x24
		::System::Boolean useWaterSurfaceTransform; // 0x30
		::UnityEngine::GameObject* _root; // 0x38
		::UnityEngine::Transform* _attachTransformOverride; // 0x40
		::System::Boolean _triggered; // 0x48
		::System::Boolean _enable; // 0x49
		::System::Boolean _visible; // 0x4A
		::System::String* _runtimeUniqueName; // 0x50
		::RPG::Client::MockAnimator* _Animator; // 0x58
		::UnityEngine::Animator* _boundAnimator; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* _pendingTriggerHashes; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_C948B80B0E3EE644(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_C948B80B0E3EE644_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_1_C8E2469222842786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_C8E2469222842786_OFFSET))(this);
		}

		::System::Void Method_1_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_1_C8E2469222842786_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_C8E2469222842786_1_OFFSET))(this);
		}

		::System::Void Method_1_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_1_66D1CC6071325C2F(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_66D1CC6071325C2F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
		}

		::System::Void _TriggerEffect_b__20_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AIRSHIPEFFECTCONFIG__TRIGGEREFFECT_B__20_0_OFFSET))(this, a1, a2);
		}
	};
}
