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

class Class_1_95E1BEF84A79D9EB;
namespace RPG::Client { class GridFightForgeItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB0A8A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBB098D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBB098F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_PERSPECTIVEROOT_OFFSET UNITYSDK_OFFSET(0xBB098E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xBB09950)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xBB09960)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCONSUMEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0D470)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0D340)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0AA20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYENHANCECHOOSEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0C5E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0D870)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0D540)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_1_OFFSET UNITYSDK_OFFSET(0xBB0AD70)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_2_OFFSET UNITYSDK_OFFSET(0xBB0B1F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0AC80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFORGEFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0B810)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0C4A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGROWUPEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0BF40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYHACKCOPYEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0C150)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYORBFLYEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0BA40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYRANDOMFLY_OFFSET UNITYSDK_OFFSET(0xBB0B600)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0D9B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRANSFEREFFECT_OFFSET UNITYSDK_OFFSET(0xBB0C2D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPROLEREPLACE_OFFSET UNITYSDK_OFFSET(0xBB0C6F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAITACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0BC30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_1_OFFSET UNITYSDK_OFFSET(0xBB0CBC0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_2_OFFSET UNITYSDK_OFFSET(0xBB0D2C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0C810)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETPARTICLEPERSPECTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBB0A8F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0DBF0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETFLYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xBB0B0F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYUPGRADEREFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0xBB0D130)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB0D800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController_TypeDefinitionIndex = 60261;

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
		::Class_1_95E1BEF84A79D9EB* _PoolMgr; // 0x50

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

		::System::Void SetParticlePerspectiveCamera(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_SETPARTICLEPERSPECTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void PlayCyreneFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEFLYEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayFlyEffect_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightFlyType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayFlyEffect_2(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightFlyType a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFLYEFFECT_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayRandomFly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightFlyType a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightFlyType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYRANDOMFLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayForgeFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::GridFightForgeItemData* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::GridFightForgeItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYFORGEFLYEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayOrbFlyEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GridFightOrbType a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightOrbType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYORBFLYEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayTraitActiveEffect(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYTRAITACTIVEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayGrowupEffect(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGROWUPEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayHackCopyEffect(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYHACKCOPYEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRoleTransferEffect(::System::UInt32 a1, ::RPG::Client::GridFightRoleChangeType a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRANSFEREFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayGridPutDownEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYGRIDPUTDOWNEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayEnhanceChooseEffect(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYENHANCECHOOSEEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayShopRoleReplace(::UnityEngine::Transform* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYSHOPROLEREPLACE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayUpgradeEffect(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Int32 a4, ::System::Action* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayUpgradeEffect_1(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayUpgradeEffect_2(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYUPGRADEEFFECT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayUpgradeRefreshEffect(::UnityEngine::Transform* a1, ::System::Int32 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__PLAYUPGRADEREFRESHEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayCyreneActiveEffect(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCYRENEACTIVEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayConsumeEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GridFightConsumeType a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GridFightConsumeType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYCONSUMEEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* _GetFlyEffectPath(::RPG::Client::GridFightFlyType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__GETFLYEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Void PlayEquipEffect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::System::Int32 a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _SetNodeVisible(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER__SETNODEVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayEquipActiveEffect(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYEQUIPACTIVEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayRoleTraitEffect(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitEffectType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER_PLAYROLETRAITEFFECT_OFFSET))(this, a1, a2, a3);
		}
	};
}
