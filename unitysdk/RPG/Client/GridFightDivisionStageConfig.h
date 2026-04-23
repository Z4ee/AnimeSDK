#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::GameCore { class GridFightSeasonExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xA4691A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_AFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0xA46BFB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_DIVISIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA46B840)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xA46BFF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENEMYHARDLEVEL_OFFSET UNITYSDK_OFFSET(0xA46BFD0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENVIRONMENTBUFFLIST_OFFSET UNITYSDK_OFFSET(0xA46BF50)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0xA46BF90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXISTINGPROMOTION_OFFSET UNITYSDK_OFFSET(0xA46BF30)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXPMODIFY_OFFSET UNITYSDK_OFFSET(0xA46C120)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXP_OFFSET UNITYSDK_OFFSET(0xA46BEA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xA46BE80)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xA46C000)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ISTHEORETICALYCLOSETOPROMOTION_OFFSET UNITYSDK_OFFSET(0xA46BF20)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OCSCORERULE_OFFSET UNITYSDK_OFFSET(0xA46C0E0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OVERCHARGEEXP_OFFSET UNITYSDK_OFFSET(0xA46BF00)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OVERCHARGEWEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0xA46BEE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_PREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0xA46C060)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_PROMOTIONLEVELTITLE_OFFSET UNITYSDK_OFFSET(0xA46BF40)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_SCORERULE_OFFSET UNITYSDK_OFFSET(0xA46C0C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_UNIQUEENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0xA46BF70)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_WEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0xA46BEC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_WEEKSCOREMODIFY_OFFSET UNITYSDK_OFFSET(0xA46C100)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_AFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0xA46BFC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENEMYHARDLEVEL_OFFSET UNITYSDK_OFFSET(0xA46BFE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENVIRONMENTBUFFLIST_OFFSET UNITYSDK_OFFSET(0xA46BF60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0xA46BFA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_EXPMODIFY_OFFSET UNITYSDK_OFFSET(0xA46C130)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_EXP_OFFSET UNITYSDK_OFFSET(0xA46BEB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xA46BE90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OCSCORERULE_OFFSET UNITYSDK_OFFSET(0xA46C0F0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OVERCHARGEEXP_OFFSET UNITYSDK_OFFSET(0xA46BF10)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OVERCHARGEWEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0xA46BEF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_SCORERULE_OFFSET UNITYSDK_OFFSET(0xA46C0D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_UNIQUEENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0xA46BF80)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_WEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0xA46BED0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_WEEKSCOREMODIFY_OFFSET UNITYSDK_OFFSET(0xA46C110)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA46ADA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__EXISTINGPROMOTION_OFFSET UNITYSDK_OFFSET(0xA46B8D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__GETPROMOTIONLEVELTITLE_OFFSET UNITYSDK_OFFSET(0xA46BB50)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__INITAFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0xA46B420)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__INITEXPANDSCORE_OFFSET UNITYSDK_OFFSET(0xA46B010)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__ISTHEORETICALYCLOSETOPROMOTION_OFFSET UNITYSDK_OFFSET(0xA46B580)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG___INITEXPANDSCORE_B__3_0_OFFSET UNITYSDK_OFFSET(0xA46C140)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG___INITEXPANDSCORE_B__3_1_OFFSET UNITYSDK_OFFSET(0xA46C160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionStageConfig_TypeDefinitionIndex = 59391;

	class GridFightDivisionStageConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionStageConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionStageConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageConfig_TypeDefinitionIndex)->GetStaticField(0x155D0);
		}
		::Il2CppArray<::System::String*>* _EnvironmentDescList_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _EnvironmentBuffList_k__BackingField; // 0x18
		::Il2CppArray<::System::String*>* _UniqueEnvironmentDescList_k__BackingField; // 0x20
		::System::UInt32 _OCScoreRule_k__BackingField; // 0x28
		::System::UInt32 _ScoreRule_k__BackingField; // 0x2C
		::System::UInt32 _AffixCount_k__BackingField; // 0x30
		::System::UInt32 _WeekScoreModify_k__BackingField; // 0x34
		::System::UInt32 _OverChargeWeeklyScore_k__BackingField; // 0x38
		::System::UInt32 _OverChargeExp_k__BackingField; // 0x3C
		::System::UInt32 _WeeklyScore_k__BackingField; // 0x40
		::System::UInt32 _Exp_k__BackingField; // 0x44
		::System::UInt32 _EnemyHardLevel_k__BackingField; // 0x48
		::System::UInt32 _ID_k__BackingField; // 0x4C
		::System::UInt32 _ExpModify_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::GridFightDivisionStageConfig* GetConfig(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightDivisionStageConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GETCONFIG_OFFSET))(id);
		}

		::System::Void _InitExpAndScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__INITEXPANDSCORE_OFFSET))(this);
		}

		::System::Void _InitAffixCount(::Il2CppArray<::System::UInt32>* affixNumList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__INITAFFIXCOUNT_OFFSET))(this, affixNumList);
		}

		::System::Boolean _IsTheoreticalyCloseToPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__ISTHEORETICALYCLOSETOPROMOTION_OFFSET))(this);
		}

		::System::Boolean _ExistingPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__EXISTINGPROMOTION_OFFSET))(this);
		}

		::System::String* _GetPromotionLevelTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__GETPROMOTIONLEVELTITLE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_EXP_OFFSET))(this, value);
		}

		::System::UInt32 get_WeeklyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_WEEKLYSCORE_OFFSET))(this);
		}

		::System::Void set_WeeklyScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_WEEKLYSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_OverChargeWeeklyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OVERCHARGEWEEKLYSCORE_OFFSET))(this);
		}

		::System::Void set_OverChargeWeeklyScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OVERCHARGEWEEKLYSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_OverChargeExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OVERCHARGEEXP_OFFSET))(this);
		}

		::System::Void set_OverChargeExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OVERCHARGEEXP_OFFSET))(this, value);
		}

		::System::Boolean get_IsTheoreticalyCloseToPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ISTHEORETICALYCLOSETOPROMOTION_OFFSET))(this);
		}

		::System::Boolean get_ExistingPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXISTINGPROMOTION_OFFSET))(this);
		}

		::System::String* get_PromotionLevelTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_PROMOTIONLEVELTITLE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EnvironmentBuffList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENVIRONMENTBUFFLIST_OFFSET))(this);
		}

		::System::Void set_EnvironmentBuffList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENVIRONMENTBUFFLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_UniqueEnvironmentDescList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_UNIQUEENVIRONMENTDESCLIST_OFFSET))(this);
		}

		::System::Void set_UniqueEnvironmentDescList(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_UNIQUEENVIRONMENTDESCLIST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_EnvironmentDescList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENVIRONMENTDESCLIST_OFFSET))(this);
		}

		::System::Void set_EnvironmentDescList(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENVIRONMENTDESCLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_AffixCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_AFFIXCOUNT_OFFSET))(this);
		}

		::System::Void set_AffixCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_AFFIXCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_EnemyHardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENEMYHARDLEVEL_OFFSET))(this);
		}

		::System::Void set_EnemyHardLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENEMYHARDLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_DIVISIONID_OFFSET))(this);
		}

		::RPG::Client::GridFightDivisionConfig* get_DivisionConfig()
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_DIVISIONCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_PrevDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_PREVDIVISIONID_OFFSET))(this);
		}

		::System::UInt32 get_ScoreRule()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_SCORERULE_OFFSET))(this);
		}

		::System::Void set_ScoreRule(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_SCORERULE_OFFSET))(this, value);
		}

		::System::UInt32 get_OCScoreRule()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OCSCORERULE_OFFSET))(this);
		}

		::System::Void set_OCScoreRule(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OCSCORERULE_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekScoreModify()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_WEEKSCOREMODIFY_OFFSET))(this);
		}

		::System::Void set_WeekScoreModify(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_WEEKSCOREMODIFY_OFFSET))(this, value);
		}

		::System::UInt32 get_ExpModify()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXPMODIFY_OFFSET))(this);
		}

		::System::Void set_ExpModify(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_EXPMODIFY_OFFSET))(this, value);
		}

		::System::Boolean __InitExpAndScore_b__3_0(::RPG::GameCore::GridFightSeasonExpScoreRow* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightSeasonExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG___INITEXPANDSCORE_B__3_0_OFFSET))(this, x);
		}

		::System::Boolean __InitExpAndScore_b__3_1(::RPG::GameCore::GridFightSeasonExpScoreRow* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightSeasonExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG___INITEXPANDSCORE_B__3_1_OFFSET))(this, x);
		}
	};
}
