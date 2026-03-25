#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicSmartSuitLogSwitch.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicSmartSuitStage.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_61CCFA89E19EDD2D;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_FILTERRELICUID_OFFSET UNITYSDK_OFFSET(0xA2B9160)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_LEFTRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2BAA60)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0xA2BABE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RIGHTRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2BAB20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_ISSWITCHON_OFFSET UNITYSDK_OFFSET(0xA2B9220)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOGFORRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2BA3C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_1_OFFSET UNITYSDK_OFFSET(0xA2BA240)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_OFFSET UNITYSDK_OFFSET(0xA2B9510)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETCOMPARERELICINFO_OFFSET UNITYSDK_OFFSET(0xA2BADB0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETRELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0xA2BAF20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_1_OFFSET UNITYSDK_OFFSET(0xA2B94C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_2_OFFSET UNITYSDK_OFFSET(0xA2B4E80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_OFFSET UNITYSDK_OFFSET(0xA2B9400)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xA2B92B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_FILTERRELICUID_OFFSET UNITYSDK_OFFSET(0xA2B91C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_LEFTRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2BAAC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0xA2BAC40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RIGHTRELICINFO_OFFSET UNITYSDK_OFFSET(0xA2BAB80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_UPDATEPLANRESULTDATA_OFFSET UNITYSDK_OFFSET(0xA2BACA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2BAFF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA2B9C00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANTYPE_OFFSET UNITYSDK_OFFSET(0xA2B95C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_1_OFFSET UNITYSDK_OFFSET(0xA2BA900)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_2_OFFSET UNITYSDK_OFFSET(0xA2BA2E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_OFFSET UNITYSDK_OFFSET(0xA2BA410)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__ISINSTAGE_OFFSET UNITYSDK_OFFSET(0xA2B9370)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitDebugger_TypeDefinitionIndex = 61162;

	class RelicSmartSuitDebugger : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PlanType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>** StaticGet_PlanResultDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PlanType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x13940);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo** StaticGet__RightRelicInfo_k__BackingField()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x13948);
		}
		static ::Class_1_61CCFA89E19EDD2D** StaticGet__RelicScoreCalculator_k__BackingField()
		{
			return (::Class_1_61CCFA89E19EDD2D**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x13950);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo** StaticGet__LeftRelicInfo_k__BackingField()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x13958);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitStage* StaticGet__CurrentStage()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitStage*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x5C80);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch* StaticGet__LogSwitch()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x5C84);
		}
		static ::System::UInt32* StaticGet__FilterRelicUID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x5C88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_FilterRelicUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_FILTERRELICUID_OFFSET))();
		}

		static ::System::Void set_FilterRelicUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_FILTERRELICUID_OFFSET))(value);
		}

		static ::System::Boolean IsSwitchOn(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch switchFlags)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_ISSWITCHON_OFFSET))(switchFlags);
		}

		static ::System::Void SetSwitchState(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch switchFlags, ::System::Boolean toOn)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSWITCHSTATE_OFFSET))(switchFlags, toOn);
		}

		static ::System::Boolean _IsInStage(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage stage)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__ISINSTAGE_OFFSET))(stage);
		}

		static ::System::Void SetStageState(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage stageFlags, ::System::Boolean toOn)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_OFFSET))(stageFlags, toOn);
		}

		static ::System::Void SetStageState_1(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig strategy, ::System::Boolean toOn)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_1_OFFSET))(strategy, toOn);
		}

		static ::System::Void SetStageState_2(::RPG::Client::RelicSmartSuit::PlanType planType, ::System::Boolean toOn)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::PlanType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_2_OFFSET))(planType, toOn);
		}

		static ::System::Void Log(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_OFFSET))(message);
		}

		static ::System::Void Log_1(::System::String* message, ::RPG::Client::RelicItemData* relicData)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_1_OFFSET))(message, relicData);
		}

		static ::System::Void LogForRelicInfo(::System::String* message, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* info)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOGFORRELICINFO_OFFSET))(message, info);
		}

		static ::System::Boolean _FilterPlanType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANTYPE_OFFSET))();
		}

		static ::System::Boolean _FilterPlanStrategy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANSTRATEGY_OFFSET))();
		}

		static ::System::Boolean _FilterRelic(::RPG::GameCore::RelicType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_OFFSET))(type);
		}

		static ::System::Boolean _FilterRelic_1(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_1_OFFSET))(uid);
		}

		static ::System::Boolean _FilterRelic_2(::RPG::Client::RelicItemData* relicData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_2_OFFSET))(relicData);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_LeftRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_LEFTRELICINFO_OFFSET))();
		}

		static ::System::Void set_LeftRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* value)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_LEFTRELICINFO_OFFSET))(value);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_RightRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RIGHTRELICINFO_OFFSET))();
		}

		static ::System::Void set_RightRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* value)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RIGHTRELICINFO_OFFSET))(value);
		}

		static ::Class_1_61CCFA89E19EDD2D* get_RelicScoreCalculator()
		{
			return ((::Class_1_61CCFA89E19EDD2D*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RELICSCORECALCULATOR_OFFSET))();
		}

		static ::System::Void set_RelicScoreCalculator(::Class_1_61CCFA89E19EDD2D* value)
		{
			return ((::System::Void(*)(::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RELICSCORECALCULATOR_OFFSET))(value);
		}

		static ::System::Void UpdatePlanResultData(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* resultData)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_UPDATEPLANRESULTDATA_OFFSET))(resultData);
		}

		static ::System::Void SetCompareRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* leftRelicInfo, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* rightRelicInfo)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETCOMPARERELICINFO_OFFSET))(leftRelicInfo, rightRelicInfo);
		}

		static ::System::Void SetRelicScoreCalculator(::Class_1_61CCFA89E19EDD2D* relicScoreCalculator)
		{
			return ((::System::Void(*)(::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETRELICSCORECALCULATOR_OFFSET))(relicScoreCalculator);
		}
	};
}
