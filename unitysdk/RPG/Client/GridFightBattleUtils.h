#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBattleRightInfoMode.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_1C6D038ACA57B217;
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

#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLEGRIDFIGHTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xBAF3160)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMAUGMENTDATABYSEARCHKEY_OFFSET UNITYSDK_OFFSET(0xBAF45D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMTRAITDATABYSEARCHKEY_OFFSET UNITYSDK_OFFSET(0xBAF4350)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBAF41A0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBEENTITYOFBACKENDAVATAR_OFFSET UNITYSDK_OFFSET(0xBAF4E60)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xBAF42B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xBAF5420)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDYNAMICTRAITCOUNT_OFFSET UNITYSDK_OFFSET(0xBAF4810)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETENTITYOFAVATAR_OFFSET UNITYSDK_OFFSET(0xBAF3340)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTENTITY_OFFSET UNITYSDK_OFFSET(0xBAF4DF0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTMANAGER_OFFSET UNITYSDK_OFFSET(0xBAF2FF0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_1_OFFSET UNITYSDK_OFFSET(0xBAF31C0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_2_OFFSET UNITYSDK_OFFSET(0xBAF3260)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_OFFSET UNITYSDK_OFFSET(0xBAEDC10)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xBAF5A10)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETRELATEDGRIDFIGHTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xBAECBE0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIGBYID_OFFSET UNITYSDK_OFFSET(0xBAF3FD0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xBAF3F80)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITDATABYBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0xBAF4BD0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWDAMAGE_OFFSET UNITYSDK_OFFSET(0xBAF53D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF5300)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWMINI_OFFSET UNITYSDK_OFFSET(0xBAF5340)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GET_ISSHOWTRAIT_OFFSET UNITYSDK_OFFSET(0xBAF5390)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_INITRIGHTINFOMODE_OFFSET UNITYSDK_OFFSET(0xBAF5220)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SENDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xBAF6240)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_1_OFFSET UNITYSDK_OFFSET(0xBAF33F0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF32D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCOINDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF3D30)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCONSUMABLEDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF3A50)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWELATIONDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF3E50)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWEQUIPDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF3890)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWHPDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF3C10)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_1_OFFSET UNITYSDK_OFFSET(0xBAF3630)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0xBAF35B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TOGGLERIGHTINFODETAILMINI_OFFSET UNITYSDK_OFFSET(0xBAF5260)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TOGGLERIGHTINFOTRAITDAMAGE_OFFSET UNITYSDK_OFFSET(0xBAF52B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERBATTLESTARTTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xBAF5AA0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERORBDROPTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xBAF61D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xBAF60E0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESERVANTSKILLDESC_OFFSET UNITYSDK_OFFSET(0xBAEC390)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESKILLDESC_OFFSET UNITYSDK_OFFSET(0xBAECC40)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS__GETDESCSKILLID_OFFSET UNITYSDK_OFFSET(0xBAF6460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleUtils_TypeDefinitionIndex = 67517;

	class GridFightBattleUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightBattleRightInfoMode* StaticGet__RightInfoMode()
		{
			return (::RPG::Client::GridFightBattleRightInfoMode*)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleUtils_TypeDefinitionIndex)->GetStaticField(0x9910);
		}
		// static const ::System::String* _Key_Battle_Start; // 0x0
		// static const ::System::String* _Key_Orb_Drop; // 0x0

		static ::RPG::GameCore::GridFightManager* GetGridFightManager()
		{
			return ((::RPG::GameCore::GridFightManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTMANAGER_OFFSET))();
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* GetBattleGridFightAvatarData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLEGRIDFIGHTAVATARDATA_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightRole* GetGridFightRoleOnBoard(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightRole* GetGridFightRoleOnBoard_1(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_1_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightRole* GetGridFightRoleOnBoard_2(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTROLEONBOARD_2_OFFSET))(a1);
		}

		static ::System::Void ShowAvatarDetail(::RPG::GameCore::BattleGridFightAvatarData* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightAvatarData*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShowAvatarDetail_1(::RPG::GameCore::BattleGridFightAvatarData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWAVATARDETAIL_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ShowTraitDetail(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightTeamTraitData*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShowTraitDetail_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWTRAITDETAIL_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ShowEquipDetail(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWEQUIPDETAIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowConsumableDetail(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCONSUMABLEDETAIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowHpDetail(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWHPDETAIL_OFFSET))(a1, a2);
		}

		static ::System::Void ShowCoinDetail(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWCOINDETAIL_OFFSET))(a1, a2);
		}

		static ::System::Void ShowElationDetail(::RPG::Client::GridFightTraitEffectBase* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightTraitEffectBase*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SHOWELATIONDETAIL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightTraitConfigBase* GetTraitConfig(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightTraitConfigBase* GetTraitConfigByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITCONFIGBYID_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightTraitEffectType GetBattleTraitEffectType(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::RPG::GameCore::GridFightTraitEffectType(*)(::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETRAITEFFECTTYPE_OFFSET))(a1);
		}

		static ::System::String* GetColorState(::RPG::GameCore::GridFightTrailLayerQuality a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GridFightTrailLayerQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETCOLORSTATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleGridFightTeamTraitData* GetBattleTeamTraitDataBySearchKey(::System::String* a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMTRAITDATABYSEARCHKEY_OFFSET))(a1);
		}

		static ::Class_1_9015B34004B876E5* GetBattleTeamAugmentDataBySearchKey(::System::String* a1)
		{
			return ((::Class_1_9015B34004B876E5*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBATTLETEAMAUGMENTDATABYSEARCHKEY_OFFSET))(a1);
		}

		static ::System::UInt32 GetDynamicTraitCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDYNAMICTRAITCOUNT_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleGridFightTeamTraitData* GetTraitDataByBattleEventID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETTRAITDATABYBATTLEEVENTID_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* GetRelatedGridFightAvatarData(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETRELATEDGRIDFIGHTAVATARDATA_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetEntityOfAvatar(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETENTITYOFAVATAR_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetGridFightEntity(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETGRIDFIGHTENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetBEEntityOfBackEndAvatar(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETBEENTITYOFBACKENDAVATAR_OFFSET))(a1);
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

		static ::RPG::PoolablePooledList_1<::Class_1_1C6D038ACA57B217*>* GetDamageStatistics()
		{
			return ((::RPG::PoolablePooledList_1<::Class_1_1C6D038ACA57B217*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETDAMAGESTATISTICS_OFFSET))();
		}

		static ::Class_1_1C6D038ACA57B217* GetMaxDamage()
		{
			return ((::Class_1_1C6D038ACA57B217*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_GETMAXDAMAGE_OFFSET))();
		}

		static ::System::Void TriggerBattleStartTaskUnlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERBATTLESTARTTASKUNLOCK_OFFSET))();
		}

		static ::System::Void TriggerOrbDropTaskUnlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERORBDROPTASKUNLOCK_OFFSET))();
		}

		static ::System::Void TriggerTaskUnlock(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRIGGERTASKUNLOCK_OFFSET))(a1);
		}

		static ::System::Void SendCustomString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_SENDCUSTOMSTRING_OFFSET))(a1);
		}

		static ::System::Void TryOverrideSkillDesc(::RPG::Client::GridFightRole* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightRole*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESKILLDESC_OFFSET))(a1, a2);
		}

		static ::System::Void TryOverrideServantSkillDesc(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS_TRYOVERRIDESERVANTSKILLDESC_OFFSET))(a1);
		}

		static ::System::UInt32 _GetDescSkillID(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS__GETDESCSKILLID_OFFSET))(a1, a2, a3, a4);
		}
	};
}
