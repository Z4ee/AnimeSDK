#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_230F5EDDB35DAEBA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0x179930B0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17993D20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_FIREPASSTHROUGHEFFECT_OFFSET UNITYSDK_OFFSET(0x179931C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_METHOD_5_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x179930A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17993090)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x17993140)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x179937C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_UPDATE_OFFSET UNITYSDK_OFFSET(0x17993DF0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING__CTOR_OFFSET UNITYSDK_OFFSET(0x17993E80)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameAccelerationRing_TypeDefinitionIndex = 75432;

	class MonoRoadRashGameAccelerationRing : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* AccelerationModifierName; // 0x18
		::RPG::Client::RoadRash::MonoEffectConfig TriggerEffectConfig; // 0x20
		::UnityEngine::Animator* Animator; // 0x50
		::System::String* TriggerName; // 0x58
		::RPG::Client::RoadRash::MonoEffectConfig PassThroughEffectConfig; // 0x60
		::System::Int32 OMBFMIKBLHL; // 0x90
		::System::UInt32 FBMJMGBBHFH; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING__CTOR_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_METHOD_5_126AB3935214AA22_1_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void OnTriggered(::Class_2_230F5EDDB35DAEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_ONTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void FirePassThroughEffect(::Class_2_230F5EDDB35DAEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_FIREPASSTHROUGHEFFECT_OFFSET))(this, a1);
		}

		::System::Void TriggerEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_TRIGGEREFFECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_UPDATE_OFFSET))(this);
		}
	};
}
