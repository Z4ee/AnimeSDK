#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightFlyType.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client { class GridFightForgeItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA46EAC0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA46DAF0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA46DB10)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEROOT_OFFSET UNITYSDK_OFFSET(0xA46DB00)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xA46DB70)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xA46DB80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCONSUMEEFFECT_OFFSET UNITYSDK_OFFSET(0xA471540)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xA471410)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xA46EC50)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYENHANCECHOOSEEFFECT_OFFSET UNITYSDK_OFFSET(0xA4706F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xA471940)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0xA471610)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_1_OFFSET UNITYSDK_OFFSET(0xA46EF90)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_2_OFFSET UNITYSDK_OFFSET(0xA46F400)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xA46EEA0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFORGEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xA46F9A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNEFFECT_OFFSET UNITYSDK_OFFSET(0xA4705C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGROWUPEFFECT_OFFSET UNITYSDK_OFFSET(0xA4700D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYHACKCOPYEFFECT_OFFSET UNITYSDK_OFFSET(0xA470280)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYORBFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xA46FBD0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYRANDOMFLY_OFFSET UNITYSDK_OFFSET(0xA46F7A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xA471BC0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRANSFEREFFECT_OFFSET UNITYSDK_OFFSET(0xA470400)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPROLEREPLACE_OFFSET UNITYSDK_OFFSET(0xA470800)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAITACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xA46FDC0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_1_OFFSET UNITYSDK_OFFSET(0xA470CB0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_2_OFFSET UNITYSDK_OFFSET(0xA471380)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0xA470920)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETPARTICLEPERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA46EB10)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA471DA0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETFLYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xA46F2F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYUPGRADEREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0xA4711F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0xA4718D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController_TypeDefinitionIndex = 59326;

	class GridFightEffectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* BUY_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* EQUIP_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* GOLD_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* FAST_GOLD_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_PATH; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK1; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK2; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK3; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK4; // 0x0
		// static const ::System::String* TRAIT_ACTIVE_EFFECT_RANK5; // 0x0
		// static const ::System::String* UPGRADE_FLY_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_2_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_3_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* UPGRADE_4_STAR_REFRESH_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_1_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_2_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_3_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_4_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_5_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_RANK_6_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_CYRENE_EFFECT_PATH; // 0x0
		// static const ::System::String* GRID_PUTDOWN_EFFECT; // 0x0
		// static const ::System::String* EQUIP_ACTIVE_PATH; // 0x0
		// static const ::System::String* EQUIP_ACTIVE_MINI_PATH; // 0x0
		// static const ::System::String* CORE_ROLE_BY_EQUIP_EFFECT_PATH; // 0x0
		// static const ::System::String* CORE_ROLE_EFFECT_PATH; // 0x0
		// static const ::System::String* BACK_STRENGTHEN_FRONT_EFFECT_PATH; // 0x0
		// static const ::System::String* ENHANCE_CHOOSE_EFFECT_PATH; // 0x0
		// static const ::System::String* CYRENE_ACTIVE_EFFECT_PATH; // 0x0
		// static const ::System::String* ROLE_GROWUP_BLUE_PATH; // 0x0
		// static const ::System::String* ROLE_GROWUP_YELLOW_PATH; // 0x0
		// static const ::System::String* ROLE_GROWUP_COLORFUL_PATH; // 0x0
		// static const ::System::String* ROLE_CHANGE_PATH; // 0x0
		// static const ::System::String* ROLE_CHANGE_TO_MEMORY; // 0x0
		// static const ::System::String* ROLE_CHANGE_NORMAL; // 0x0
		// static const ::System::String* ROLE_CHANGE_RARITY; // 0x0
		// static const ::System::String* HACK_COPY_ROLE_EFFECT_PATH; // 0x0
		// static const ::System::String* ROLE_SHOP_REPLACE; // 0x0
		::UnityEngine::Transform* _PerspectiveRoot; // 0x18
		::UnityEngine::Camera* _PrespectiveCamera; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightTrailLayerQuality, ::System::String*>* _TraitLayerQualityToPath; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GridFightRoleChangeType, ::System::String*>* _RoleChangePath; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GridFightFlyType, ::System::String*>* _FlyEffectByType; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _TraitShowEffectByType; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _GrowUpEffectByRank; // 0x48
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_PerspectiveCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVECAMERA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_PerspectiveRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_PerspectiveOrTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEORTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ROOT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetParticlePerspectiveCamera(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETPARTICLEPERSPECTIVECAMERA_OFFSET))(this, root);
		}

		::System::Void PlayCyreneFlyEffect(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEFLYEFFECT_OFFSET))(this, start, end, callback);
		}

		::System::Void PlayFlyEffect(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Int32 rank, ::System::Action* callback, ::System::Boolean isRandomLine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_OFFSET))(this, start, end, rank, callback, isRandomLine);
		}

		::System::Void PlayFlyEffect_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::RPG::Client::GridFightFlyType type, ::System::Action* callback, ::System::Boolean isRandomLine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_1_OFFSET))(this, start, end, type, callback, isRandomLine);
		}

		::System::Void PlayFlyEffect_2(::UnityEngine::RectTransform* tf, ::UnityEngine::Vector3 end, ::RPG::Client::GridFightFlyType type, ::System::Action* callback, ::System::Boolean isRandomLine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_2_OFFSET))(this, tf, end, type, callback, isRandomLine);
		}

		::System::Void PlayRandomFly(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::RPG::Client::GridFightFlyType type, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYRANDOMFLY_OFFSET))(this, start, end, type, callback);
		}

		::System::Void PlayForgeFlyEffect(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::RPG::Client::GridFightForgeItemData* forgeItem, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightForgeItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFORGEFLYEFFECT_OFFSET))(this, start, end, forgeItem, callback);
		}

		::System::Void PlayOrbFlyEffect(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::RPG::GameCore::GridFightOrbType orbType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightOrbType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYORBFLYEFFECT_OFFSET))(this, start, end, orbType, callback);
		}

		::System::Void PlayTraitActiveEffect(::System::UInt32 uid, ::System::UInt32 traitID, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAITACTIVEEFFECT_OFFSET))(this, uid, traitID, speed);
		}

		::System::Void PlayGrowupEffect(::System::UInt32 rank, ::System::UInt32 uid, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGROWUPEFFECT_OFFSET))(this, rank, uid, onFinish);
		}

		::System::Void PlayHackCopyEffect(::System::UInt32 uid, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYHACKCOPYEFFECT_OFFSET))(this, uid, onFinish);
		}

		::System::Void PlayRoleTransferEffect(::System::UInt32 uid, ::RPG::Client::GridFightRoleChangeType changeType, ::System::Action* onChangeRole, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRANSFEREFFECT_OFFSET))(this, uid, changeType, onChangeRole, onFinish);
		}

		::System::Void PlayGridPutDownEffect(::UnityEngine::Transform* tf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNEFFECT_OFFSET))(this, tf);
		}

		::System::Void PlayEnhanceChooseEffect(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYENHANCECHOOSEEFFECT_OFFSET))(this, transform);
		}

		::System::Void PlayShopRoleReplace(::UnityEngine::Transform* transform, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPROLEREPLACE_OFFSET))(this, transform, onFinish);
		}

		::System::Void PlayUpgradeEffect(::UnityEngine::Transform* start1, ::UnityEngine::Transform* start2, ::UnityEngine::Transform* end, ::System::Int32 star, ::System::Action* onFinished, ::System::Boolean isEndPerspective)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_OFFSET))(this, start1, start2, end, star, onFinished, isEndPerspective);
		}

		::System::Void PlayUpgradeEffect_1(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* starts, ::UnityEngine::Transform* end, ::System::Int32 star, ::System::Action* onFinished, ::System::Boolean isEndPerspective)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_1_OFFSET))(this, starts, end, star, onFinished, isEndPerspective);
		}

		::System::Void PlayUpgradeEffect_2(::UnityEngine::Transform* pos, ::System::Int32 star, ::System::Boolean isPerspective)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_2_OFFSET))(this, pos, star, isPerspective);
		}

		::System::Void _PlayUpgradeRefreshEffect(::UnityEngine::Transform* pos, ::System::Int32 star, ::UnityEngine::Camera* particleCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYUPGRADEREFRESHEFFECT_OFFSET))(this, pos, star, particleCamera);
		}

		::System::Void PlayCyreneActiveEffect(::UnityEngine::Transform* pos, ::System::Boolean isPerspective)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEACTIVEEFFECT_OFFSET))(this, pos, isPerspective);
		}

		::System::Void PlayConsumeEffect(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::RPG::GameCore::GridFightConsumeType type, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightConsumeType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCONSUMEEFFECT_OFFSET))(this, start, end, type, callback);
		}

		::System::String* _GetFlyEffectPath(::RPG::Client::GridFightFlyType flyType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETFLYEFFECTPATH_OFFSET))(this, flyType);
		}

		::System::Void PlayEquipEffect(::UnityEngine::Vector3 startPoint, ::UnityEngine::Vector3 endPoint, ::UnityEngine::Transform* itemTrans, ::UnityEngine::Transform* effectAddTrans, ::System::Int32 rank, ::System::Action* onRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPEFFECT_OFFSET))(this, startPoint, endPoint, itemTrans, effectAddTrans, rank, onRefresh);
		}

		::System::Void _SetNodeVisible(::UnityEngine::Transform* trans, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SETNODEVISIBLE_OFFSET))(this, trans, visible);
		}

		::System::Void PlayEquipActiveEffect(::UnityEngine::Transform* pos, ::UnityEngine::Camera* particleCamera, ::System::Boolean isMini)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_OFFSET))(this, pos, particleCamera, isMini);
		}

		::System::Void PlayRoleTraitEffect(::System::UInt32 uid, ::RPG::GameCore::GridFightTraitEffectType effectType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRAITEFFECT_OFFSET))(this, uid, effectType, callback);
		}
	};
}
