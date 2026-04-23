#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBattleRightInfoMode.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3A625BE1D0B270;
class Class_1_9015B34004B876E5;
namespace RPG { template <typename T> class PoolablePooledList_1; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectBase; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLEGRIDFIGHTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA456930)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMAUGMENTDATABYSEARCHKEY_OFFSET UNITYSDK_OFFSET(0xA457D60)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMTRAITDATABYSEARCHKEY_OFFSET UNITYSDK_OFFSET(0xA457AE0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA457930)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBEENTITYOFBACKENDAVATAR_OFFSET UNITYSDK_OFFSET(0xA4586E0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xA457A40)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xA458DB0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDYNAMICTRAITCOUNT_OFFSET UNITYSDK_OFFSET(0xA457F90)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETENTITYOFAVATAR_OFFSET UNITYSDK_OFFSET(0xA456B10)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTENTITY_OFFSET UNITYSDK_OFFSET(0xA458670)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTMANAGER_OFFSET UNITYSDK_OFFSET(0xA4567D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_1_OFFSET UNITYSDK_OFFSET(0xA456990)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_2_OFFSET UNITYSDK_OFFSET(0xA456A30)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_OFFSET UNITYSDK_OFFSET(0xA451630)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xA4593A0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETRELATEDGRIDFIGHTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA4504D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIGBYID_OFFSET UNITYSDK_OFFSET(0xA457760)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xA457710)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITDATABYBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0xA458450)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWDAMAGE_OFFSET UNITYSDK_OFFSET(0xA458D40)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xA458C00)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWMINI_OFFSET UNITYSDK_OFFSET(0xA458C60)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWTRAIT_OFFSET UNITYSDK_OFFSET(0xA458CD0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_INITRIGHTINFOMODE_OFFSET UNITYSDK_OFFSET(0xA458AA0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SENDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xA459BE0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_1_OFFSET UNITYSDK_OFFSET(0xA456BC0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_OFFSET UNITYSDK_OFFSET(0xA456AA0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCOINDETAIL_OFFSET UNITYSDK_OFFSET(0xA457490)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCONSUMABLEDETAIL_OFFSET UNITYSDK_OFFSET(0xA4571B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWELATIONDETAIL_OFFSET UNITYSDK_OFFSET(0xA4575D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWEQUIPDETAIL_OFFSET UNITYSDK_OFFSET(0xA457010)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWHPDETAIL_OFFSET UNITYSDK_OFFSET(0xA457350)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_1_OFFSET UNITYSDK_OFFSET(0xA456E10)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0xA456D90)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TOGGLERIGHTINFODETAILMINI_OFFSET UNITYSDK_OFFSET(0xA458B00)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TOGGLERIGHTINFOTRAITDAMAGE_OFFSET UNITYSDK_OFFSET(0xA458B80)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERBATTLESTARTTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xA459430)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERORBDROPTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xA459B70)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xA459A80)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESERVANTSKILLDESC_OFFSET UNITYSDK_OFFSET(0xA44FBE0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESKILLDESC_OFFSET UNITYSDK_OFFSET(0xA450530)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS__GETDESCSKILLID_OFFSET UNITYSDK_OFFSET(0xA459E20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleUtils_TypeDefinitionIndex = 66576;

	class GridFightBattleUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightBattleRightInfoMode* StaticGet__RightInfoMode()
		{
			return (::RPG::Client::GridFightBattleRightInfoMode*)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleUtils_TypeDefinitionIndex)->GetStaticField(0x69B0);
		}
		// static const ::System::String* _Key_Battle_Start; // 0x0
		// static const ::System::String* _Key_Orb_Drop; // 0x0

		static ::RPG::GameCore::GridFightManager* GetGridFightManager()
		{
			return ((::RPG::GameCore::GridFightManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTMANAGER_OFFSET))();
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* GetBattleGridFightAvatarData(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLEGRIDFIGHTAVATARDATA_OFFSET))(avatarID);
		}

		static ::RPG::Client::GridFightRole* GetGridFightRoleOnBoard(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_OFFSET))(entity);
		}

		static ::RPG::Client::GridFightRole* GetGridFightRoleOnBoard_1(::RPG::GameCore::BattleGridFightAvatarData* avatarData)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_1_OFFSET))(avatarData);
		}

		static ::RPG::Client::GridFightRole* GetGridFightRoleOnBoard_2(::System::UInt32 roleID)
		{
			return ((::RPG::Client::GridFightRole*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_2_OFFSET))(roleID);
		}

		static ::System::Void ShowAvatarDetail(::RPG::GameCore::BattleGridFightAvatarData* avatarData, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight, ::System::Boolean isBackEndRole)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightAvatarData*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_OFFSET))(avatarData, anchor, isToRight, isBackEndRole);
		}

		static ::System::Void ShowAvatarDetail_1(::RPG::GameCore::BattleGridFightAvatarData* avatarData, ::RPG::GameCore::GameEntity* entity, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight, ::System::Boolean isBackEndRole)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_1_OFFSET))(avatarData, entity, anchor, isToRight, isBackEndRole);
		}

		static ::System::Void ShowTraitDetail(::RPG::GameCore::BattleGridFightTeamTraitData* traitData, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightTeamTraitData*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_OFFSET))(traitData, anchor, isToRight, closeCallback);
		}

		static ::System::Void ShowTraitDetail_1(::System::UInt32 teamTraitID, ::System::UInt32 activeCount, ::System::UInt32 activeLayer, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_1_OFFSET))(teamTraitID, activeCount, activeLayer, anchor, isToRight, closeCallback);
		}

		static ::System::Void ShowEquipDetail(::System::UInt32 equipItemID, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWEQUIPDETAIL_OFFSET))(equipItemID, anchor, isToRight);
		}

		static ::System::Void ShowConsumableDetail(::System::UInt32 consumableItemID, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCONSUMABLEDETAIL_OFFSET))(consumableItemID, anchor, isToRight);
		}

		static ::System::Void ShowHpDetail(::UnityEngine::Transform* anchor, ::System::Boolean isToRight)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWHPDETAIL_OFFSET))(anchor, isToRight);
		}

		static ::System::Void ShowCoinDetail(::UnityEngine::Transform* anchor, ::System::Boolean isToRight)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCOINDETAIL_OFFSET))(anchor, isToRight);
		}

		static ::System::Void ShowElationDetail(::RPG::Client::GridFightTraitEffectBase* elationEffect, ::UnityEngine::Transform* anchor, ::System::Boolean isToRight)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightTraitEffectBase*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWELATIONDETAIL_OFFSET))(elationEffect, anchor, isToRight);
		}

		static ::RPG::Client::GridFightTraitConfigBase* GetTraitConfig(::RPG::GameCore::BattleGridFightTeamTraitData* traitData)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIG_OFFSET))(traitData);
		}

		static ::RPG::Client::GridFightTraitConfigBase* GetTraitConfigByID(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIGBYID_OFFSET))(traitID);
		}

		static ::RPG::GameCore::GridFightTraitEffectType GetBattleTraitEffectType(::RPG::GameCore::BattleGridFightTeamTraitData* traitData)
		{
			return ((::RPG::GameCore::GridFightTraitEffectType(*)(::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETRAITEFFECTTYPE_OFFSET))(traitData);
		}

		static ::System::String* GetColorState(::RPG::GameCore::GridFightTrailLayerQuality quality)
		{
			return ((::System::String*(*)(::RPG::GameCore::GridFightTrailLayerQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETCOLORSTATE_OFFSET))(quality);
		}

		static ::RPG::GameCore::BattleGridFightTeamTraitData* GetBattleTeamTraitDataBySearchKey(::System::String* traitSearchKey)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMTRAITDATABYSEARCHKEY_OFFSET))(traitSearchKey);
		}

		static ::Class_1_9015B34004B876E5* GetBattleTeamAugmentDataBySearchKey(::System::String* augmentSearchKey)
		{
			return ((::Class_1_9015B34004B876E5*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMAUGMENTDATABYSEARCHKEY_OFFSET))(augmentSearchKey);
		}

		static ::System::UInt32 GetDynamicTraitCount(::System::UInt32 traitID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDYNAMICTRAITCOUNT_OFFSET))(traitID);
		}

		static ::RPG::GameCore::BattleGridFightTeamTraitData* GetTraitDataByBattleEventID(::System::UInt32 battleEventID)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITDATABYBATTLEEVENTID_OFFSET))(battleEventID);
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* GetRelatedGridFightAvatarData(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETRELATEDGRIDFIGHTAVATARDATA_OFFSET))(entity);
		}

		static ::RPG::GameCore::GameEntity* GetEntityOfAvatar(::RPG::GameCore::BattleGridFightAvatarData* gridFightAvatarData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETENTITYOFAVATAR_OFFSET))(gridFightAvatarData);
		}

		static ::RPG::GameCore::GameEntity* GetGridFightEntity(::System::UInt32 roleID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTENTITY_OFFSET))(roleID);
		}

		static ::RPG::GameCore::GameEntity* GetBEEntityOfBackEndAvatar(::RPG::GameCore::BattleGridFightAvatarData* gridFightAvatarData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBEENTITYOFBACKENDAVATAR_OFFSET))(gridFightAvatarData);
		}

		static ::System::Void InitRightInfoMode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_INITRIGHTINFOMODE_OFFSET))();
		}

		static ::System::Void ToggleRightInfoDetailMini()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TOGGLERIGHTINFODETAILMINI_OFFSET))();
		}

		static ::System::Void ToggleRightInfoTraitDamage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TOGGLERIGHTINFOTRAITDAMAGE_OFFSET))();
		}

		static ::System::Boolean get_IsShowDetail()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWDETAIL_OFFSET))();
		}

		static ::System::Boolean get_IsShowMini()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWMINI_OFFSET))();
		}

		static ::System::Boolean get_IsShowTrait()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWTRAIT_OFFSET))();
		}

		static ::System::Boolean get_IsShowDamage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWDAMAGE_OFFSET))();
		}

		static ::RPG::PoolablePooledList_1<::Class_1_6D3A625BE1D0B270*>* GetDamageStatistics()
		{
			return ((::RPG::PoolablePooledList_1<::Class_1_6D3A625BE1D0B270*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDAMAGESTATISTICS_OFFSET))();
		}

		static ::Class_1_6D3A625BE1D0B270* GetMaxDamage()
		{
			return ((::Class_1_6D3A625BE1D0B270*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETMAXDAMAGE_OFFSET))();
		}

		static ::System::Void TriggerBattleStartTaskUnlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERBATTLESTARTTASKUNLOCK_OFFSET))();
		}

		static ::System::Void TriggerOrbDropTaskUnlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERORBDROPTASKUNLOCK_OFFSET))();
		}

		static ::System::Void TriggerTaskUnlock(::System::String* str)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERTASKUNLOCK_OFFSET))(str);
		}

		static ::System::Void SendCustomString(::System::String* str)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SENDCUSTOMSTRING_OFFSET))(str);
		}

		static ::System::Void TryOverrideSkillDesc(::RPG::Client::GridFightRole* role, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightRole*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESKILLDESC_OFFSET))(role, entity);
		}

		static ::System::Void TryOverrideServantSkillDesc(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESERVANTSKILLDESC_OFFSET))(entity);
		}

		static ::System::UInt32 _GetDescSkillID(::System::UInt32 skillID, ::Il2CppArray<::System::UInt32>* overrideSrcList, ::Il2CppArray<::System::UInt32>* overrideDestList, ::Il2CppArray<::System::UInt32>* showList)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS__GETDESCSKILLID_OFFSET))(skillID, overrideSrcList, overrideDestList, showList);
		}
	};
}
