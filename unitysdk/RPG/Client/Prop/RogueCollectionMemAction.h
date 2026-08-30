#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class Effect_Transform; }
namespace RPG::Client::Prop { class RogueCollectionBubbleTalk; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x16641190)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16641020)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x16640F20)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x166417E0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_482B8042EC421109_OFFSET UNITYSDK_OFFSET(0x16641220)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x16641080)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x16640D90)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x16640E50)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x16640BB0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16640F80)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_START_OFFSET UNITYSDK_OFFSET(0x16640540)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x16640740)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16641860)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionMemAction_TypeDefinitionIndex = 78476;

	class RogueCollectionMemAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* FHKBMEPBALG; // 0x0
		::UnityEngine::Transform* PrefabTransform; // 0x18
		::System::String* TriggerIdleActionStateName; // 0x20
		::System::String* TriggerSleepActionStateName; // 0x28
		::System::String* TriggerWakeUpActionStateName; // 0x30
		::System::Int32 TriggerActionStateLayer; // 0x38
		::UnityEngine::Material* NormalMaterial; // 0x40
		::UnityEngine::Material* SleepMaterial; // 0x48
		::UnityEngine::Material* WakeUpMaterial; // 0x50
		::RPG::GameCore::TriggerEffectList* WakeUpTriggerEffectList; // 0x58
		::System::Single RotateSmoothTime; // 0x60
		::System::Single RotateSpeedStop; // 0x64
		::System::Single IdleTime; // 0x68
		::UnityEngine::Animator* FDEHOEKKPLA; // 0x70
		::System::String* CNICJFPMIKA; // 0x78
		::RPG::Client::Effect_Transform* LPHHDFJCLOC; // 0x80
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x88
		::System::Boolean HBLADIPKHHK; // 0x90
		::System::Single GLMGPPLLDFC; // 0x94
		::System::Single JOBAKPHHKHJ; // 0x98
		::System::Single PJJEMPOLDIJ; // 0x9C
		::RPG::Client::Prop::RogueCollectionBubbleTalk* GMBPKGHNFJO; // 0xA0
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0xA8
		::UnityEngine::Transform* LPEOHKHOLEP; // 0xB0
		::System::Int32 GBANOELPHIO; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Method_5_AAD21DE195D05736()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_AAD21DE195D05736_OFFSET))(this);
		}

		::System::Void Method_5_BD3078E21D74E44F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_BD3078E21D74E44F_OFFSET))(this);
		}

		::System::Void Method_5_8F537CE539CF0103()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_8F537CE539CF0103_OFFSET))(this);
		}

		::System::Void Method_5_0581090195E9C81F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_0581090195E9C81F_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_482B8042EC421109(::RPG::GameCore::TriggerEffectList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_METHOD_5_482B8042EC421109_OFFSET))(this, a1);
		}
	};
}
