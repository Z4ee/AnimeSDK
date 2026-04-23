#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB329F80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xB32AD80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ISSHOWTRANSCAT_OFFSET UNITYSDK_OFFSET(0xB32AEE0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xB32AD90)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xB32ADB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_ONREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xB325780)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET UNITYSDK_OFFSET(0xB3296A0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET UNITYSDK_OFFSET(0xB32A3B0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET UNITYSDK_OFFSET(0xB32AB50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSAVE_OFFSET UNITYSDK_OFFSET(0xB32A9A0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xB326C40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0xB32ADA0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET UNITYSDK_OFFSET(0xB329D20)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TRIGGERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0xB326D70)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__ADDSELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0xB32A590)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0xB32A1B0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATETRANSCAT_OFFSET UNITYSDK_OFFSET(0xB32A520)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CTOR_OFFSET UNITYSDK_OFFSET(0xB329690)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0xB32A0B0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYTRANSCAT_OFFSET UNITYSDK_OFFSET(0xB32A150)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xB32ABB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTARGETLOCATION_OFFSET UNITYSDK_OFFSET(0xB3297D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xB32ADE0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET UNITYSDK_OFFSET(0xB329D80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET UNITYSDK_OFFSET(0xB32A2A0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET UNITYSDK_OFFSET(0xB32A900)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REMOVESELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0xB32A010)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_Cat_TypeDefinitionIndex = 55524;

	class TrainCakeCatchExhibitController_Cat : public ::System::Object
	{
	public:
		// static const ::System::String* _BODY_RENDERER_NAME; // 0x0
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x10
		::System::String* _Prefix; // 0x18
		::UnityEngine::Transform* FollowAttachPoint; // 0x20
		::RPG::GameCore::GameEntity* _Entity; // 0x28
		::RPG::GameCore::AnchorInfo* FollowAnchor; // 0x30
		::UnityEngine::GameObject* _TransCat; // 0x38
		::UnityEngine::Vector3 PosOffset; // 0x40
		::UnityEngine::Vector3 _TargetPosition; // 0x4C
		::System::Single _SaveLerpTimer; // 0x58
		::System::UInt32 _NpcID_k__BackingField; // 0x5C
		::System::Boolean _IsShowTransCat; // 0x60
		::System::Boolean _IsInSavePerform; // 0x61
		::System::Boolean _HasSetLocation; // 0x62
		::System::Boolean _IsSelected; // 0x63
		::UnityEngine::Quaternion _SaveLerpStartRotation; // 0x64
		::UnityEngine::Vector3 _SaveLerpStartPosition; // 0x74
		::UnityEngine::Quaternion _TargetRotation; // 0x80

		::System::Void _ctor(::RPG::Client::TrainCakeCatchExhibitController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CTOR_OFFSET))(this, owner);
		}

		::System::Void RefreshLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void _LerpLocation(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET))(this, deltaTime);
		}

		::System::Boolean _GetTargetLocation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTARGETLOCATION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_DISPOSE_OFFSET))(this);
		}

		::System::Void _CreateEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATEENTITY_OFFSET))(this);
		}

		::System::Void _DestroyEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYENTITY_OFFSET))(this);
		}

		::System::Void SetNpcID(::System::UInt32 npcID, ::System::Boolean useTransCat)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET))(this, npcID, useTransCat);
		}

		::System::Void OnRegionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_ONREGIONCHANGE_OFFSET))(this);
		}

		::System::Void _CreateTransCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATETRANSCAT_OFFSET))(this);
		}

		::System::Void _DestroyTransCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYTRANSCAT_OFFSET))(this);
		}

		::System::Void SetSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSAVE_OFFSET))(this);
		}

		::System::Void SetPrefix(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET))(this, prefix);
		}

		::System::Void _RefreshEntityName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET))(this);
		}

		::System::Void _RefreshTransCatName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET))(this, isSelected);
		}

		::System::Void _AddSelectedEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__ADDSELECTEDEFFECT_OFFSET))(this);
		}

		::System::Void _RemoveSelectedEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REMOVESELECTEDEFFECT_OFFSET))(this);
		}

		::System::Void TriggerChangeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TRIGGERCHANGEEFFECT_OFFSET))(this);
		}

		::System::Void _FireEffectAsync(::System::String* effectPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET))(this, effectPath);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET))(this);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET))(this);
		}

		::System::Void set_NpcID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TransformPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_TRANSFORMPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetTransformPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTRANSFORMPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsShowTransCat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ISSHOWTRANSCAT_OFFSET))(this);
		}
	};
}
