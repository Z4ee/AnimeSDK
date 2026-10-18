#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_875869CB2AE4238A;
namespace RPG::Client { class MonoEmoAnimBlinkLayerController_AnimLayerBlink; }

#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD80BD00)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_BEGINIDLE_OFFSET UNITYSDK_OFFSET(0xD80BFE0)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xD80C030)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_GETBLINKWEIGHT_OFFSET UNITYSDK_OFFSET(0xD80C140)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD80BE80)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD80BDA0)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xD80BEF0)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xD80BF70)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xD80C0A0)
#define RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD80C190)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoAnimBlinkLayerController_TypeDefinitionIndex = 71138;

	class MonoEmoAnimBlinkLayerController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEmoAnimBlinkLayerController_AnimLayerBlink* BlinkConfig; // 0x18
		::Class_2_875869CB2AE4238A* KADDKEGNCHE; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void BeginIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_BEGINIDLE_OFFSET))(this);
		}

		::System::Void EnableAutoBlink(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_ENABLEAUTOBLINK_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Single GetBlinkWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMBLINKLAYERCONTROLLER_GETBLINKWEIGHT_OFFSET))(this);
		}
	};
}
