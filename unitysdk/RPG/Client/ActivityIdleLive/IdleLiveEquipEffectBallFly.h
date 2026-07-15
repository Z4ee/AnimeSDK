#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipBallFadeOutType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A65A840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_METHOD_5_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1A65B070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A65A880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_PLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1A65AA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_PLAY_OFFSET UNITYSDK_OFFSET(0x1A65AAE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A65A800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A65B100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65B0F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipEffectBallFly_TypeDefinitionIndex = 71568;

	class IdleLiveEquipEffectBallFly : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_0()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveEquipEffectBallFly_TypeDefinitionIndex)->GetStaticField(0x3E980);
		}
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		::System::Single Field_5_6; // 0x18
		::System::Single Field_5_7; // 0x1C
		::RPG::Client::ActivityIdleLive::EquipBallFadeOutType Field_5_8; // 0x20
		::RPG::Client::QuadricBezier* Field_5_9; // 0x28
		::UnityEngine::Animation* Field_5_10; // 0x30
		::UnityEngine::RectTransform* Field_5_11; // 0x38
		::UnityEngine::RectTransform* Field_5_12; // 0x40
		::UnityEngine::RectTransform* Field_5_13; // 0x48
		::RPG::Client::UIStateCtrl* Field_5_14; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY__CCTOR_OFFSET))();
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void PlayState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_PLAYSTATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::ActivityIdleLive::EquipBallFadeOutType a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::EquipBallFadeOutType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_B387E1AED8A8F880()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPEFFECTBALLFLY_METHOD_5_B387E1AED8A8F880_OFFSET))(this);
		}
	};
}
