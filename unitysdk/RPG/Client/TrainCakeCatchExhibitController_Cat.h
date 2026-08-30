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

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE236DD0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xE237C20)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ISSHOWTRANSCAT_OFFSET UNITYSDK_OFFSET(0xE237D80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xE237C30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xE237C50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_ONREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xE232640)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET UNITYSDK_OFFSET(0xE2364D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET UNITYSDK_OFFSET(0xE237200)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET UNITYSDK_OFFSET(0xE2379F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSAVE_OFFSET UNITYSDK_OFFSET(0xE237840)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xE233B10)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0xE237C40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET UNITYSDK_OFFSET(0xE236B70)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TRIGGERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0xE233C40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__ADDSELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0xE2373E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0xE237000)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATETRANSCAT_OFFSET UNITYSDK_OFFSET(0xE237370)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2364C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0xE236F00)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYTRANSCAT_OFFSET UNITYSDK_OFFSET(0xE236FA0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xE237A50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTARGETLOCATION_OFFSET UNITYSDK_OFFSET(0xE236610)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xE237C80)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET UNITYSDK_OFFSET(0xE236BD0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET UNITYSDK_OFFSET(0xE2370F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET UNITYSDK_OFFSET(0xE2377A0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REMOVESELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0xE236E60)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_Cat_TypeDefinitionIndex = 60331;

	class TrainCakeCatchExhibitController_Cat : public ::System::Object
	{
	public:
		// static const ::System::String* _BODY_RENDERER_NAME; // 0x0
		::UnityEngine::GameObject* _TransCat; // 0x10
		::UnityEngine::Transform* FollowAttachPoint; // 0x18
		::System::String* _Prefix; // 0x20
		::RPG::GameCore::GameEntity* _Entity; // 0x28
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x30
		::RPG::GameCore::AnchorInfo* FollowAnchor; // 0x38
		::System::UInt32 _NpcID_k__BackingField; // 0x40
		::UnityEngine::Vector3 _SaveLerpStartPosition; // 0x44
		::UnityEngine::Vector3 PosOffset; // 0x50
		::System::Single _SaveLerpTimer; // 0x5C
		::UnityEngine::Quaternion _TargetRotation; // 0x60
		::System::Boolean _IsSelected; // 0x70
		::System::Boolean _IsInSavePerform; // 0x71
		::System::Boolean _HasSetLocation; // 0x72
		::System::Boolean _IsShowTransCat; // 0x73
		::UnityEngine::Quaternion _SaveLerpStartRotation; // 0x74
		::UnityEngine::Vector3 _TargetPosition; // 0x84

		::System::Void _ctor(::RPG::Client::TrainCakeCatchExhibitController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET))(this, a1);
		}

		::System::Void _LerpLocation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET))(this, a1);
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

		::System::Void SetNpcID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET))(this, a1, a2);
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

		::System::Void SetPrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET))(this, a1);
		}

		::System::Void _RefreshEntityName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET))(this);
		}

		::System::Void _RefreshTransCatName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET))(this, a1);
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

		::System::Void _FireEffectAsync(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET))(this);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET))(this);
		}

		::System::Void set_NpcID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET))(this, a1);
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
