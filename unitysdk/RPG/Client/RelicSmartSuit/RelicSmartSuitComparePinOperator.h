#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PinOperationSourceType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_045F75CAE3CBF38C;
class Class_1_81595715048249D2;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareSelectInfo; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xAFB1750)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GETPINNEDUID_OFFSET UNITYSDK_OFFSET(0xAFB1A50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0xAFB16F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xAFB1690)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0xAFB1710)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xAFB1730)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_ISPINNED_OFFSET UNITYSDK_OFFSET(0xAFB1980)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINORUNPINRELIC_OFFSET UNITYSDK_OFFSET(0xAFB1AE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINRELIC_OFFSET UNITYSDK_OFFSET(0xAFB1EF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_UNPINRELIC_OFFSET UNITYSDK_OFFSET(0xAFB1C30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB17D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__GETCLONEPINDATA_OFFSET UNITYSDK_OFFSET(0xAFB2390)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INITPINCHECKER_OFFSET UNITYSDK_OFFSET(0xAFB18C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INIT_OFFSET UNITYSDK_OFFSET(0xAFB17E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__NOTIFYMODIFYPIN_OFFSET UNITYSDK_OFFSET(0xAFB2A20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__PINRELIC_B__17_0_OFFSET UNITYSDK_OFFSET(0xAFB2AC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__REQUESTMODIFYPINRELIC_OFFSET UNITYSDK_OFFSET(0xAFB2660)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__UNPINRELIC_B__18_0_OFFSET UNITYSDK_OFFSET(0xAFB2CF0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitComparePinOperator_TypeDefinitionIndex = 68666;

	class RelicSmartSuitComparePinOperator : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* _ViewModel; // 0x10
		::Class_1_045F75CAE3CBF38C* _PinChecker; // 0x18

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__CTOR_OFFSET))(this, viewModel);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PININFORECORDER_OFFSET))(this);
		}

		::Class_1_81595715048249D2* get_DataSource()
		{
			return ((::Class_1_81595715048249D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_DATASOURCE_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_PlanResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PLANRESULT_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_SELECTINFO_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* Create(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* viewModel)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_CREATE_OFFSET))(viewModel);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INIT_OFFSET))(this);
		}

		::System::Void _InitPinChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INITPINCHECKER_OFFSET))(this);
		}

		::System::Boolean IsPinned(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_ISPINNED_OFFSET))(this, relic);
		}

		::System::UInt32 GetPinnedUID(::RPG::GameCore::RelicType relicType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GETPINNEDUID_OFFSET))(this, relicType);
		}

		::System::Void PinOrUnPinRelic(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINORUNPINRELIC_OFFSET))(this, relic);
		}

		::System::Void PinRelic(::RPG::Client::RelicItemData* relic, ::RPG::Client::RelicSmartSuit::PinOperationSourceType sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicSmartSuit::PinOperationSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINRELIC_OFFSET))(this, relic, sourceType);
		}

		::System::Void UnPinRelic(::RPG::Client::RelicItemData* relic, ::RPG::Client::RelicSmartSuit::PinOperationSourceType sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicSmartSuit::PinOperationSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_UNPINRELIC_OFFSET))(this, relic, sourceType);
		}

		::RPG::Client::Promises::Promise* _RequestModifyPinRelic(::RPG::Client::RelicSmartSuit::PinData* pinData)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__REQUESTMODIFYPINRELIC_OFFSET))(this, pinData);
		}

		::RPG::Client::RelicSmartSuit::PinData* _GetClonePinData()
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__GETCLONEPINDATA_OFFSET))(this);
		}

		::System::Void _NotifyModifyPin(::System::Boolean isPin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__NOTIFYMODIFYPIN_OFFSET))(this, isPin);
		}

		::System::Void _PinRelic_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__PINRELIC_B__17_0_OFFSET))(this);
		}

		::System::Void _UnPinRelic_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__UNPINRELIC_B__18_0_OFFSET))(this);
		}
	};
}
