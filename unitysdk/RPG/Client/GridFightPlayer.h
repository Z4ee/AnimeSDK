#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_35.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_854;
class Class_1_93AA40F7202497D0_11;
class Class_1_9A024DE866AAE534_1;
class Class_1_B590C31C505191E5_4;
class Class_1_D17272E82AE804C2_467;
class Class_2_F1D65D77731F2AD9;
class Class_2_FD0167EB507B9435_2;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGamePlayResConfig; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightVictoryCountRule; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightPlayerLevelConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER_BUYEXP_OFFSET UNITYSDK_OFFSET(0x1CA4FE50)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ENTERPREPARATION_OFFSET UNITYSDK_OFFSET(0x1CA50C80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1CA51400)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETLEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1CA52280)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETVICTORYRULES_OFFSET UNITYSDK_OFFSET(0x1CA51910)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GETWILLGAININTEREST_OFFSET UNITYSDK_OFFSET(0x1CA52190)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_APPLIEDGAMEREFSHARECODE_OFFSET UNITYSDK_OFFSET(0x1CA52A30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BANROLEIDS_OFFSET UNITYSDK_OFFSET(0x1CA538E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLECOINADD_OFFSET UNITYSDK_OFFSET(0x1CA53680)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLEEXPADD_OFFSET UNITYSDK_OFFSET(0x1CA537C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x1CA530C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPCOST_OFFSET UNITYSDK_OFFSET(0x1CA527F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPGAIN_OFFSET UNITYSDK_OFFSET(0x1CA52D90)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPHPCOST_OFFSET UNITYSDK_OFFSET(0x1CA52830)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_CURPLAYER_OFFSET UNITYSDK_OFFSET(0x1CA4CF70)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXPRESID_OFFSET UNITYSDK_OFFSET(0x1CA4D060)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1CA52720)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_GENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1CA52C30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_GOLD_OFFSET UNITYSDK_OFFSET(0x1CA52760)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_HP_OFFSET UNITYSDK_OFFSET(0x1CA52660)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_INBATTLELOCK_OFFSET UNITYSDK_OFFSET(0x1CA532E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_INPENDINGLOCK_OFFSET UNITYSDK_OFFSET(0x1CA53260)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA52C80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINCNT_OFFSET UNITYSDK_OFFSET(0x1CA528F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINGOLD_OFFSET UNITYSDK_OFFSET(0x1CA52F70)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1CA52CF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CA526E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKREASON_OFFSET UNITYSDK_OFFSET(0x1CA528B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1CA52870)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBACKROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA52930)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBENCHROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA52970)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1CA526A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXINTERESTNUM_OFFSET UNITYSDK_OFFSET(0x1CA529B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA52A70)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXTRACKTRAITNUM_OFFSET UNITYSDK_OFFSET(0x1CA530A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_PLAYERLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1CA529F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_PREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1CA531E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_REFRESHRESID_OFFSET UNITYSDK_OFFSET(0x1CA4D170)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_ROLEMAXNUM_OFFSET UNITYSDK_OFFSET(0x1CA527A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_SHOWBATTLEREWARD_OFFSET UNITYSDK_OFFSET(0x1CA53350)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKEDTRAITNUM_OFFSET UNITYSDK_OFFSET(0x1CA53050)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKTRAITS_OFFSET UNITYSDK_OFFSET(0x1CA4FC00)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET_WILLGAININTEREST_OFFSET UNITYSDK_OFFSET(0x1CA52E80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET__BUYEXPCOSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CA53B80)
#define RPG_CLIENT_GRIDFIGHTPLAYER_GET__LEVELUPEXPMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CA52320)
#define RPG_CLIENT_GRIDFIGHTPLAYER_HASGUIDERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1CA50FF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_INIT_OFFSET UNITYSDK_OFFSET(0x1CA4D5C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISFIRSTENTERCURSECTIONPREPARETION_OFFSET UNITYSDK_OFFSET(0x1CA50640)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISINACTIVITYMODULE_OFFSET UNITYSDK_OFFSET(0x1CA52480)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISROLEUNRELEASED_OFFSET UNITYSDK_OFFSET(0x1CA525D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACKROLE_OFFSET UNITYSDK_OFFSET(0x1CA50330)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACK_OFFSET UNITYSDK_OFFSET(0x1CA50270)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ISVICTORYRULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CA51FB0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_NEEDWARNINGROLENOTENOUGH_OFFSET UNITYSDK_OFFSET(0x1CA50AE0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_NOTWARNINGROLENOTENOUGHTTHISSESSION_OFFSET UNITYSDK_OFFSET(0x1CA50950)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x1CA4D7D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x1CA4D900)
#define RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x1CA4DA30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4D280)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1CA4DB60)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_APPLIEDGAMEREFSHARECODE_OFFSET UNITYSDK_OFFSET(0x1CA4EE90)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPCOST_OFFSET UNITYSDK_OFFSET(0x1CA4EAA0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPHPCOST_OFFSET UNITYSDK_OFFSET(0x1CA4EB30)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_EXP_OFFSET UNITYSDK_OFFSET(0x1CA4E5E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_GOLD_OFFSET UNITYSDK_OFFSET(0x1CA4E6C0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_HP_OFFSET UNITYSDK_OFFSET(0x1CA4E810)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_KEEPWINCNT_OFFSET UNITYSDK_OFFSET(0x1CA4ECE0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CA4E650)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKREASON_OFFSET UNITYSDK_OFFSET(0x1CA4EC50)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1CA4EBC0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBACKROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA4ED70)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBENCHROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA4EE00)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1CA4E880)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXINTERESTNUM_OFFSET UNITYSDK_OFFSET(0x1CA4E8F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXTRACKTRAITNUM_OFFSET UNITYSDK_OFFSET(0x1CA530B0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_PLAYERLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1CA4EA10)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_ROLEMAXNUM_OFFSET UNITYSDK_OFFSET(0x1CA4E550)
#define RPG_CLIENT_GRIDFIGHTPLAYER_SET_TRACKTRAITS_OFFSET UNITYSDK_OFFSET(0x1CA4E980)
#define RPG_CLIENT_GRIDFIGHTPLAYER_TRACKTRAIT_OFFSET UNITYSDK_OFFSET(0x1CA50010)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UNTRACKTRAIT_OFFSET UNITYSDK_OFFSET(0x1CA50140)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOSTGLOBALHP_OFFSET UNITYSDK_OFFSET(0x1CA4F540)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOST_OFFSET UNITYSDK_OFFSET(0x1CA4F490)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATECOINNUM_OFFSET UNITYSDK_OFFSET(0x1CA4F000)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEEXPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA4F050)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEHP_OFFSET UNITYSDK_OFFSET(0x1CA4F230)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEINTERESTMAX_OFFSET UNITYSDK_OFFSET(0x1CA4F3E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEKEEPWINCNT_OFFSET UNITYSDK_OFFSET(0x1CA4FC40)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATELOCK_OFFSET UNITYSDK_OFFSET(0x1CA4F5F0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBACKROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA4FCF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBENCHROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA4FDA0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x1CA4F330)
#define RPG_CLIENT_GRIDFIGHTPLAYER_UPDATETRACKTRAIT_OFFSET UNITYSDK_OFFSET(0x1CA4F770)
#define RPG_CLIENT_GRIDFIGHTPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA53EF0)
#define RPG_CLIENT_GRIDFIGHTPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA53CE0)
#define RPG_CLIENT_GRIDFIGHTPLAYER__GETMODULEBANROLEIDS_OFFSET UNITYSDK_OFFSET(0x1CA53930)
#define RPG_CLIENT_GRIDFIGHTPLAYER__GET_KEEPWINGOLD_B__108_0_OFFSET UNITYSDK_OFFSET(0x1CA53F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer_TypeDefinitionIndex = 65131;

	class GridFightPlayer : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_ExpResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)Il2CppClass::FromTypeDefinitionIndex(GridFightPlayer_TypeDefinitionIndex)->GetStaticField(0x3CE00);
		}
		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_RefreshResConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)Il2CppClass::FromTypeDefinitionIndex(GridFightPlayer_TypeDefinitionIndex)->GetStaticField(0x3CE08);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _TrackTraits; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightVictoryCountRule*>* _VictoryRules; // 0x20
		::System::String* _AppliedRefShareCode; // 0x28
		::RPG::GameCore::GridFightPlayerLevelConfigRow* _ConfigRow; // 0x30
		::System::Collections::Generic::IList_1<::System::UInt32>* _ActivityModuleIDs; // 0x38
		::System::UInt32 _MaxInterestNum; // 0x40
		::System::UInt32 _Level; // 0x44
		::System::UInt32 _BuyExpHpCost; // 0x48
		::System::UInt32 _BuyExpCost; // 0x4C
		::System::UInt32 _MaxLevel; // 0x50
		::System::UInt32 _MaxBenchRoleNum; // 0x54
		::Enum_3_DB663931210BBC27_35 _LockType; // 0x58
		::System::Int32 _GoldNum; // 0x5C
		::System::UInt32 _MaxHP; // 0x60
		::System::UInt32 _PlayerLevelLimit; // 0x64
		::System::UInt32 _MaxTrackTraitNum_k__BackingField; // 0x68
		::System::UInt32 _Exp; // 0x6C
		::System::Int32 _CurHP; // 0x70
		::Enum_3_DB663931210BBC27_36 _LockReason; // 0x74
		::System::UInt32 _KeepWinCnt; // 0x78
		::System::UInt32 _MaxBackRoleNum; // 0x7C
		::System::UInt32 _MaxRoleNum; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPlayer* get_CurPlayer()
		{
			return ((::RPG::Client::GridFightPlayer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_CURPLAYER_OFFSET))();
		}

		static ::System::UInt32 get_ExpResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXPRESID_OFFSET))();
		}

		static ::System::UInt32 get_RefreshResID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_REFRESHRESID_OFFSET))();
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_854* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_854*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_INIT_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void OnModifierUpdate(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetData(::Class_1_9A024DE866AAE534_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A024DE866AAE534_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SETDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateCoinNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATECOINNUM_OFFSET))(this, a1);
		}

		::System::Void UpdateExpLevel(::Class_1_D17272E82AE804C2_467* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_467*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEEXPLEVEL_OFFSET))(this, a1);
		}

		::System::Void UpdateHP(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEHP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXROLENUM_OFFSET))(this, a1);
		}

		::System::Void UpdateInterestMax(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEINTERESTMAX_OFFSET))(this, a1);
		}

		::System::Void UpdateBuyExpCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOST_OFFSET))(this, a1);
		}

		::System::Void UpdateBuyExpCostGlobalHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEBUYEXPCOSTGLOBALHP_OFFSET))(this, a1);
		}

		::System::Void UpdateLock(::Class_1_93AA40F7202497D0_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATELOCK_OFFSET))(this, a1);
		}

		::System::Void UpdateTrackTrait(::Class_1_B590C31C505191E5_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATETRACKTRAIT_OFFSET))(this, a1);
		}

		::System::Void UpdateKeepWinCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEKEEPWINCNT_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxBackRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBACKROLENUM_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxBenchRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UPDATEMAXBENCHROLENUM_OFFSET))(this, a1);
		}

		::System::Void BuyExp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_BUYEXP_OFFSET))(this);
		}

		::System::Void TrackTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_TRACKTRAIT_OFFSET))(this, a1);
		}

		::System::Void UntrackTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_UNTRACKTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsTraitTrack(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACK_OFFSET))(this, a1);
		}

		::System::Boolean IsTraitTrackRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISTRAITTRACKROLE_OFFSET))(this, a1);
		}

		::System::Boolean IsFirstEnterCurSectionPreparetion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISFIRSTENTERCURSECTIONPREPARETION_OFFSET))(this);
		}

		::System::Void NotWarningRoleNotEnoughtThisSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_NOTWARNINGROLENOTENOUGHTTHISSESSION_OFFSET))(this);
		}

		::System::Boolean NeedWarningRoleNotEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_NEEDWARNINGROLENOTENOUGH_OFFSET))(this);
		}

		::System::Void EnterPreparation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ENTERPREPARATION_OFFSET))(this);
		}

		::System::Boolean HasGuideRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_HASGUIDERECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETGUIDERECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightVictoryCountRule*>* GetVictoryRules()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightVictoryCountRule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETVICTORYRULES_OFFSET))(this);
		}

		::System::Boolean IsVictoryRuleUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISVICTORYRULEUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 GetWillGainInterest(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETWILLGAININTEREST_OFFSET))(this, a1);
		}

		::System::UInt32 GetLevelUpNeedExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GETLEVELUPNEEDEXP_OFFSET))(this, a1);
		}

		::System::Boolean IsInActivityModule(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISINACTIVITYMODULE_OFFSET))(this, a1);
		}

		::System::Boolean IsRoleUnreleased(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_ISROLEUNRELEASED_OFFSET))(this, a1);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_HP_OFFSET))(this);
		}

		::System::Void set_HP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_HP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_EXP_OFFSET))(this, a1);
		}

		::System::Int32 get_Gold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_GOLD_OFFSET))(this);
		}

		::System::Void set_Gold(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_GOLD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleMaxNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_ROLEMAXNUM_OFFSET))(this);
		}

		::System::Void set_RoleMaxNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_ROLEMAXNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyExpCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPCOST_OFFSET))(this);
		}

		::System::Void set_BuyExpCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyExpHpCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPHPCOST_OFFSET))(this);
		}

		::System::Void set_BuyExpHpCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_BUYEXPHPCOST_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_35 get_LockType()
		{
			return ((::Enum_3_DB663931210BBC27_35(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKTYPE_OFFSET))(this);
		}

		::System::Void set_LockType(::Enum_3_DB663931210BBC27_35 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_35))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKTYPE_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_36 get_LockReason()
		{
			return ((::Enum_3_DB663931210BBC27_36(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LOCKREASON_OFFSET))(this);
		}

		::System::Void set_LockReason(::Enum_3_DB663931210BBC27_36 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_LOCKREASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TrackTraits()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKTRAITS_OFFSET))(this);
		}

		::System::Void set_TrackTraits(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_TRACKTRAITS_OFFSET))(this, a1);
		}

		::System::UInt32 get_KeepWinCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINCNT_OFFSET))(this);
		}

		::System::Void set_KeepWinCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_KEEPWINCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBackRoleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBACKROLENUM_OFFSET))(this);
		}

		::System::Void set_MaxBackRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBACKROLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBenchRoleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXBENCHROLENUM_OFFSET))(this);
		}

		::System::Void set_MaxBenchRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXBENCHROLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxInterestNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXINTERESTNUM_OFFSET))(this);
		}

		::System::Void set_MaxInterestNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXINTERESTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerLevelLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_PLAYERLEVELLIMIT_OFFSET))(this);
		}

		::System::Void set_PlayerLevelLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_PLAYERLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::String* get_AppliedGameRefShareCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_APPLIEDGAMEREFSHARECODE_OFFSET))(this);
		}

		::System::Void set_AppliedGameRefShareCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_APPLIEDGAMEREFSHARECODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_GeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_GENERALPROPERTYLIST_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpNeedExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_LEVELUPNEEDEXP_OFFSET))(this);
		}

		::System::UInt32 get_BuyExpGain()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BUYEXPGAIN_OFFSET))(this);
		}

		::System::UInt32 get_WillGainInterest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_WILLGAININTEREST_OFFSET))(this);
		}

		::System::UInt32 get_KeepWinGold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_KEEPWINGOLD_OFFSET))(this);
		}

		::System::Int32 get_TrackedTraitNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_TRACKEDTRAITNUM_OFFSET))(this);
		}

		::System::UInt32 get_MaxTrackTraitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_MAXTRACKTRAITNUM_OFFSET))(this);
		}

		::System::Void set_MaxTrackTraitNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_SET_MAXTRACKTRAITNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_Blocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BLOCKED_OFFSET))(this);
		}

		::System::Boolean get_InPendingLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_INPENDINGLOCK_OFFSET))(this);
		}

		::System::Boolean get_InBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_INBATTLELOCK_OFFSET))(this);
		}

		::RPG::Client::PlayerPreparationState get_PreparationState()
		{
			return ((::RPG::Client::PlayerPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_PREPARATIONSTATE_OFFSET))(this);
		}

		::System::Boolean get_ShowBattleReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_SHOWBATTLEREWARD_OFFSET))(this);
		}

		::System::UInt32 get_BattleCoinAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLECOINADD_OFFSET))(this);
		}

		::System::UInt32 get_BattleExpAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BATTLEEXPADD_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_BanRoleIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET_BANROLEIDS_OFFSET))(this);
		}

		::Class_2_F1D65D77731F2AD9* get__LevelUpExpModifier()
		{
			return ((::Class_2_F1D65D77731F2AD9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET__LEVELUPEXPMODIFIER_OFFSET))(this);
		}

		::Class_2_FD0167EB507B9435_2* get__BuyExpCostModifier()
		{
			return ((::Class_2_FD0167EB507B9435_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_GET__BUYEXPCOSTMODIFIER_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* _GetModuleBanRoleIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER__GETMODULEBANROLEIDS_OFFSET))(this);
		}

		::System::Boolean _get_KeepWinGold_b__108_0(::RPG::Client::GridFightVictoryCountRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightVictoryCountRule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER__GET_KEEPWINGOLD_B__108_0_OFFSET))(this, a1);
		}
	};
}
