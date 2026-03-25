#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::GameCore { class GridFightSeasonExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x97EF360)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_AFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0x97F1FB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_DIVISIONCONFIG_OFFSET UNITYSDK_OFFSET(0x97F18C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x97F1FF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENEMYHARDLEVEL_OFFSET UNITYSDK_OFFSET(0x97F1FD0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENVIRONMENTBUFFLIST_OFFSET UNITYSDK_OFFSET(0x97F1F50)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0x97F1F90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXISTINGPROMOTION_OFFSET UNITYSDK_OFFSET(0x97F1F30)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXPMODIFY_OFFSET UNITYSDK_OFFSET(0x97F2120)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_EXP_OFFSET UNITYSDK_OFFSET(0x97F1EA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x97F1E80)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x97F2000)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_ISTHEORETICALYCLOSETOPROMOTION_OFFSET UNITYSDK_OFFSET(0x97F1F20)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OCSCORERULE_OFFSET UNITYSDK_OFFSET(0x97F20E0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OVERCHARGEEXP_OFFSET UNITYSDK_OFFSET(0x97F1F00)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_OVERCHARGEWEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0x97F1EE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_PREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0x97F2060)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_PROMOTIONLEVELTITLE_OFFSET UNITYSDK_OFFSET(0x97F1F40)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_SCORERULE_OFFSET UNITYSDK_OFFSET(0x97F20C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_UNIQUEENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0x97F1F70)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_WEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0x97F1EC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_GET_WEEKSCOREMODIFY_OFFSET UNITYSDK_OFFSET(0x97F2100)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_AFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0x97F1FC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENEMYHARDLEVEL_OFFSET UNITYSDK_OFFSET(0x97F1FE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENVIRONMENTBUFFLIST_OFFSET UNITYSDK_OFFSET(0x97F1F60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0x97F1FA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_EXPMODIFY_OFFSET UNITYSDK_OFFSET(0x97F2130)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_EXP_OFFSET UNITYSDK_OFFSET(0x97F1EB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x97F1E90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OCSCORERULE_OFFSET UNITYSDK_OFFSET(0x97F20F0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OVERCHARGEEXP_OFFSET UNITYSDK_OFFSET(0x97F1F10)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_OVERCHARGEWEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0x97F1EF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_SCORERULE_OFFSET UNITYSDK_OFFSET(0x97F20D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_UNIQUEENVIRONMENTDESCLIST_OFFSET UNITYSDK_OFFSET(0x97F1F80)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_WEEKLYSCORE_OFFSET UNITYSDK_OFFSET(0x97F1ED0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG_SET_WEEKSCOREMODIFY_OFFSET UNITYSDK_OFFSET(0x97F2110)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x97F0E50)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__EXISTINGPROMOTION_OFFSET UNITYSDK_OFFSET(0x97F1950)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__GETPROMOTIONLEVELTITLE_OFFSET UNITYSDK_OFFSET(0x97F1B90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__INITAFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0x97F14D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__INITEXPANDSCORE_OFFSET UNITYSDK_OFFSET(0x97F10C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG__ISTHEORETICALYCLOSETOPROMOTION_OFFSET UNITYSDK_OFFSET(0x97F1630)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG___INITEXPANDSCORE_B__3_0_OFFSET UNITYSDK_OFFSET(0x97F2140)
#define RPG_CLIENT_GRIDFIGHTDIVISIONSTAGECONFIG___INITEXPANDSCORE_B__3_1_OFFSET UNITYSDK_OFFSET(0x97F2160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionStageConfig_TypeDefinitionIndex = 52433;

	class GridFightDivisionStageConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionStageConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionStageConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageConfig_TypeDefinitionIndex)->GetStaticField(0x139E0);
		}
		::Il2CppArray<::System::String*>* _UniqueEnvironmentDescList_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _EnvironmentBuffList_k__BackingField; // 0x18
		::Il2CppArray<::System::String*>* _EnvironmentDescList_k__BackingField; // 0x20
		::System::UInt32 _OverChargeExp_k__BackingField; // 0x28
		::System::UInt32 _AffixCount_k__BackingField; // 0x2C
		::System::UInt32 _WeekScoreModify_k__BackingField; // 0x30
		::System::UInt32 _WeeklyScore_k__BackingField; // 0x34
		::System::UInt32 _Exp_k__BackingField; // 0x38
		::System::UInt32 _OCScoreRule_k__BackingField; // 0x3C
		::System::UInt32 _OverChargeWeeklyScore_k__BackingField; // 0x40
		::System::UInt32 _EnemyHardLevel_k__BackingField; // 0x44
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::UInt32 _ScoreRule_k__BackingField; // 0x4C
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
