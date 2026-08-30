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

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197C61C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x197C7020)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ISSHOWTRANSCAT_OFFSET UNITYSDK_OFFSET(0x197C7180)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0x197C7030)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x197C7050)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_ONREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0x197C1A40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET UNITYSDK_OFFSET(0x197C58D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET UNITYSDK_OFFSET(0x197C65F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET UNITYSDK_OFFSET(0x197C6DF0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSAVE_OFFSET UNITYSDK_OFFSET(0x197C6C30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x197C2F10)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0x197C7040)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET UNITYSDK_OFFSET(0x197C5F50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TRIGGERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x197C3040)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__ADDSELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0x197C67D0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x197C63F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATETRANSCAT_OFFSET UNITYSDK_OFFSET(0x197C6760)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CTOR_OFFSET UNITYSDK_OFFSET(0x197C58C0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x197C62F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYTRANSCAT_OFFSET UNITYSDK_OFFSET(0x197C6390)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0x197C6E50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTARGETLOCATION_OFFSET UNITYSDK_OFFSET(0x197C5A00)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x197C7080)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET UNITYSDK_OFFSET(0x197C5FB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET UNITYSDK_OFFSET(0x197C64E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET UNITYSDK_OFFSET(0x197C6B90)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REMOVESELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0x197C6250)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_Cat_TypeDefinitionIndex = 60331;

	class TrainCakeCatchExhibitController_Cat : public ::System::Object
	{
	public:
		// static const ::System::String* _BODY_RENDERER_NAME; // 0x0
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::UnityEngine::GameObject* _TransCat; // 0x20
		::System::String* _Prefix; // 0x28
		::RPG::GameCore::AnchorInfo* FollowAnchor; // 0x30
		::UnityEngine::Transform* FollowAttachPoint; // 0x38
		::UnityEngine::Quaternion _TargetRotation; // 0x40
		::System::Boolean _IsSelected; // 0x50
		::System::Boolean _IsInSavePerform; // 0x51
		::System::Boolean _IsShowTransCat; // 0x52
		::System::Boolean _HasSetLocation; // 0x53
		::UnityEngine::Vector3 _TargetPosition; // 0x54
		::UnityEngine::Quaternion _SaveLerpStartRotation; // 0x60
		::System::UInt32 _NpcID_k__BackingField; // 0x70
		::UnityEngine::Vector3 PosOffset; // 0x74
		::UnityEngine::Vector3 _SaveLerpStartPosition; // 0x80
		::System::Single _SaveLerpTimer; // 0x8C

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
