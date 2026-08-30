#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
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

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_FILTERRELICUID_OFFSET UNITYSDK_OFFSET(0x1795FF40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_LEFTRELICINFO_OFFSET UNITYSDK_OFFSET(0x179611D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x17961350)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RIGHTRELICINFO_OFFSET UNITYSDK_OFFSET(0x17961290)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_ISSWITCHON_OFFSET UNITYSDK_OFFSET(0x17960040)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOGFORRELICINFO_OFFSET UNITYSDK_OFFSET(0x17960B30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x179609B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_OFFSET UNITYSDK_OFFSET(0x179602E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETCOMPARERELICINFO_OFFSET UNITYSDK_OFFSET(0x17961520)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETRELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x17961690)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_1_OFFSET UNITYSDK_OFFSET(0x1795A630)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_OFFSET UNITYSDK_OFFSET(0x17960220)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x179600D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_FILTERRELICUID_OFFSET UNITYSDK_OFFSET(0x1795FFC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_LEFTRELICINFO_OFFSET UNITYSDK_OFFSET(0x17961230)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x179613B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RIGHTRELICINFO_OFFSET UNITYSDK_OFFSET(0x179612F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_UPDATEPLANRESULTDATA_OFFSET UNITYSDK_OFFSET(0x17961410)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17961760)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANTYPE_OFFSET UNITYSDK_OFFSET(0x17960370)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_1_OFFSET UNITYSDK_OFFSET(0x17961070)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_2_OFFSET UNITYSDK_OFFSET(0x17960A50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_OFFSET UNITYSDK_OFFSET(0x17960B80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__ISINSTAGE_OFFSET UNITYSDK_OFFSET(0x17960190)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitDebugger_TypeDefinitionIndex = 74307;

	class RelicSmartSuitDebugger : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PlanType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>** StaticGet_PlanResultDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PlanType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x65790);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo** StaticGet__LeftRelicInfo_k__BackingField()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x65798);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo** StaticGet__RightRelicInfo_k__BackingField()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x657A0);
		}
		static ::Class_1_61CCFA89E19EDD2D** StaticGet__RelicScoreCalculator_k__BackingField()
		{
			return (::Class_1_61CCFA89E19EDD2D**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x657A8);
		}
		static ::System::UInt32* StaticGet__FilterRelicUID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x15050);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitStage* StaticGet__CurrentStage()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitStage*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x15054);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch* StaticGet__LogSwitch()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitDebugger_TypeDefinitionIndex)->GetStaticField(0x15058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_FilterRelicUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_FILTERRELICUID_OFFSET))();
		}

		static ::System::Void set_FilterRelicUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_FILTERRELICUID_OFFSET))(a1);
		}

		static ::System::Boolean IsSwitchOn(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_ISSWITCHON_OFFSET))(a1);
		}

		static ::System::Void SetSwitchState(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSWITCHSTATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsInStage(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__ISINSTAGE_OFFSET))(a1);
		}

		static ::System::Void SetStageState(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_OFFSET))(a1, a2);
		}

		static ::System::Void SetStageState_1(::RPG::Client::RelicSmartSuit::PlanType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::PlanType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_1_OFFSET))(a1, a2);
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_OFFSET))(a1);
		}

		static ::System::Void Log_1(::System::String* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogForRelicInfo(::System::String* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOGFORRELICINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean _FilterPlanType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANTYPE_OFFSET))();
		}

		static ::System::Boolean _FilterRelic(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_OFFSET))(a1);
		}

		static ::System::Boolean _FilterRelic_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_1_OFFSET))(a1);
		}

		static ::System::Boolean _FilterRelic_2(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_2_OFFSET))(a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_LeftRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_LEFTRELICINFO_OFFSET))();
		}

		static ::System::Void set_LeftRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_LEFTRELICINFO_OFFSET))(a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_RightRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RIGHTRELICINFO_OFFSET))();
		}

		static ::System::Void set_RightRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RIGHTRELICINFO_OFFSET))(a1);
		}

		static ::Class_1_61CCFA89E19EDD2D* get_RelicScoreCalculator()
		{
			return ((::Class_1_61CCFA89E19EDD2D*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RELICSCORECALCULATOR_OFFSET))();
		}

		static ::System::Void set_RelicScoreCalculator(::Class_1_61CCFA89E19EDD2D* a1)
		{
			return ((::System::Void(*)(::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RELICSCORECALCULATOR_OFFSET))(a1);
		}

		static ::System::Void UpdatePlanResultData(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_UPDATEPLANRESULTDATA_OFFSET))(a1);
		}

		static ::System::Void SetCompareRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETCOMPARERELICINFO_OFFSET))(a1, a2);
		}

		static ::System::Void SetRelicScoreCalculator(::Class_1_61CCFA89E19EDD2D* a1)
		{
			return ((::System::Void(*)(::Class_1_61CCFA89E19EDD2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETRELICSCORECALCULATOR_OFFSET))(a1);
		}
	};
}
