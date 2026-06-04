#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_METHOD_5_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xC5F94A0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC5F8D90)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_METHOD_5_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xC5F8E70)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC5F8DE0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_START_OFFSET UNITYSDK_OFFSET(0xC5F8BE0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xC5F8C70)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F9510)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION___LOADACTIONEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xC5F9520)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionRatioAction_TypeDefinitionIndex = 73468;

	class RogueCollectionRatioAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* EffectHideRoot; // 0x18
		::System::Single WaitUnloadSeconds; // 0x20
		::System::String* TriggerActionStateName; // 0x28
		::System::Int32 TriggerActionStateLayer; // 0x30
		::RPG::GameCore::TriggerEffectList* TriggerEffectList; // 0x38
		::UnityEngine::Vector3 ThrowRotate; // 0x40
		::UnityEngine::Animator* Field_5_6; // 0x50
		::System::Boolean Field_5_7; // 0x58
		::System::Int32 Field_5_8; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_289F28027FF47717()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_METHOD_5_289F28027FF47717_OFFSET))(this);
		}

		::System::Void Method_5_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_METHOD_5_EAD10B3E55E2C4C5_OFFSET))(this);
		}

		::System::Void __LoadActionEffect_b__5_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION___LOADACTIONEFFECT_B__5_0_OFFSET))(this, a1, a2);
		}
	};
}
