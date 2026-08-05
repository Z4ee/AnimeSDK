#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Enum_3_250FDB97D78391EE.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/Enum_3_9E57FDCD22022C4B.h"
#include "unitysdk/Enum_3_C3F47346D3138590.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_477;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_GET_EFFECTPOSITION_OFFSET UNITYSDK_OFFSET(0x1279CE40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONBORNEFFECTCREATED_OFFSET UNITYSDK_OFFSET(0x1279D2C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONIDLEEFFECTCREATED_OFFSET UNITYSDK_OFFSET(0x1279D560)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1279D7B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1279D110)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SimpleDropItemSubSystem_SimpleDropItem_TypeDefinitionIndex = 76809;

	class SimpleDropItemSubSystem_SimpleDropItem : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Battle::Entity*>* OnBornEffectCreatedCallback; // 0x10
		::MoleMole::Config::ItemDropEffectSetting* ItemDropSetting; // 0x18
		::UnityEngine::Collider* Collider; // 0x20
		::UnityEngine::Rigidbody* Rigidbody; // 0x28
		::MoleMole::Config::SurfGameItemDataEntry SurfItemConfig; // 0x30
		::UnityEngine::Transform* Transform; // 0x48
		::MoleMole::GameplayTag PickerTag; // 0x50
		::Class_2_208CC9941471731A_477* ItemTemplateConfig; // 0x60
		::UnityEngine::GameObject* ModelGo; // 0x68
		::Foundation::AssetPath PrefabPath; // 0x70
		::MoleMole::EntityHandle CachedPickerEntity; // 0x80
		::UnityEngine::Transform* EffectAttachTrans; // 0x90
		::System::Action_1<::MoleMole::Battle::Entity*>* OnIdleEffectCreatedCallback; // 0x98
		::MoleMole::EntityHandle BornEffect; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Renderers; // 0xB0
		::MoleMole::EntityHandle IdleEffect; // 0xB8
		::System::Single MotionPowerXZ; // 0xC8
		::System::Boolean IsAutoRotateEnable; // 0xCC
		::System::Boolean IsBornEffectEnable; // 0xCD
		::System::Boolean Active; // 0xCE
		::System::Boolean IsTargetYOffsetInited; // 0xCF
		::System::Single PickUpFlyTimer; // 0xD0
		::System::Single JumpEndTime; // 0xD4
		::System::Single InitPickUpPower; // 0xD8
		::UnityEngine::Vector3 Position; // 0xDC
		::UnityEngine::Vector3 MotionSpeed; // 0xE8
		::System::Boolean EnterTriggerBounds; // 0xF4
		::System::Boolean IsReleased; // 0xF5
		::UnityEngine::Vector3 LastMotionPosition; // 0xF8
		::Enum_3_9E57FDCD22022C4B PickType; // 0x104
		::System::Single MotionEstLifeDuration; // 0x108
		::Enum_3_C3F47346D3138590 Stage; // 0x10C
		::Enum_3_250FDB97D78391EE DropEffect; // 0x110
		::System::Single JumpRepeatDelayTime; // 0x114
		::UnityEngine::Bounds TriggerBounds; // 0x118
		::System::Single JumpPower; // 0x130
		::System::Single BornEffectDuration; // 0x134
		::UnityEngine::Vector3 BornVelocity; // 0x138
		::System::Single LerpPickUpDirSpeed; // 0x144
		::System::Int32 HandleId; // 0x148
		::System::Int32 ItemCount; // 0x14C
		::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> ServerIndex; // 0x150
		::System::Boolean HasSurfItemData; // 0x15C
		::System::Boolean OnGround; // 0x15D
		::System::Boolean IsLoaded; // 0x15E
		::System::Boolean ShouldUpdateLastMotionPosition; // 0x15F
		::System::Single MotionGravity; // 0x160
		::System::Single GroundDistance; // 0x164
		::UnityEngine::Vector3 AutoPickMoveVelocity; // 0x168
		::System::Single GravityMultiplier; // 0x174
		::System::Single VelocityY; // 0x178
		::System::Boolean HasColliderDefault; // 0x17C
		::System::Boolean ColliderDefaultEnabled; // 0x17D
		::System::Boolean StartAutoPickUp; // 0x17E
		::System::Boolean HasRegisterTrigger; // 0x17F
		::System::Single MotionPowerY; // 0x180
		::System::Single WaitForAutoPickUpTime; // 0x184
		::System::Single LastAirTime; // 0x188
		::System::Single MotionTime; // 0x18C
		::System::Single ClampPower; // 0x190
		::UnityEngine::Vector3 Forward; // 0x194
		::System::Single WaitForAutoPickUpTimer; // 0x1A0
		::UnityEngine::Vector3 ModelForward; // 0x1A4
		::System::Int32 ItemTemplateID; // 0x1B0
		::Enum_3_337A0D7142819EB2 DropSource; // 0x1B4
		::UnityEngine::Vector3 VerticalVelocity; // 0x1B8
		::UnityEngine::LayerMask GroundLayers; // 0x1C4
		::System::Single ItemPickToTargetYOffset; // 0x1C8
		::System::Int32 SurfItemID; // 0x1CC
		::System::Single SqrMaxSpeedToPick; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EffectPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_GET_EFFECTPOSITION_OFFSET))(this);
		}

		::System::Void OnBornEffectCreated(::MoleMole::Battle::Entity* effect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONBORNEFFECTCREATED_OFFSET))(this, effect);
		}

		::System::Void OnIdleEffectCreated(::MoleMole::Battle::Entity* effect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONIDLEEFFECTCREATED_OFFSET))(this, effect);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_RESET_OFFSET))(this);
		}
	};
}
