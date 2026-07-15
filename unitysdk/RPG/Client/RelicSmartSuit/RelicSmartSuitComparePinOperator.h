#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PinOperationSourceType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_52F4A47C29C64CBB;
class Class_1_E369120BF5C606A0;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareSelectInfo; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1737C540)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GETPINNEDUID_OFFSET UNITYSDK_OFFSET(0x1737C840)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0x1737C450)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0x1737C390)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PLANRESULT_OFFSET UNITYSDK_OFFSET(0x1737C4A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0x1737C4F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_ISPINNED_OFFSET UNITYSDK_OFFSET(0x1737C770)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINORUNPINRELIC_OFFSET UNITYSDK_OFFSET(0x1737C8D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINRELIC_OFFSET UNITYSDK_OFFSET(0x1737CE40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_UNPINRELIC_OFFSET UNITYSDK_OFFSET(0x1737CA20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1737C5C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__GETCLONEPINDATA_OFFSET UNITYSDK_OFFSET(0x1737D4F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INITPINCHECKER_OFFSET UNITYSDK_OFFSET(0x1737C6B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INIT_OFFSET UNITYSDK_OFFSET(0x1737C5D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__NOTIFYMODIFYPIN_OFFSET UNITYSDK_OFFSET(0x1737DED0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__PINRELIC_B__17_0_OFFSET UNITYSDK_OFFSET(0x1737DF70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__REQUESTMODIFYPINRELIC_OFFSET UNITYSDK_OFFSET(0x1737D890)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__UNPINRELIC_B__18_0_OFFSET UNITYSDK_OFFSET(0x1737E1A0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitComparePinOperator_TypeDefinitionIndex = 71001;

	class RelicSmartSuitComparePinOperator : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* _ViewModel; // 0x10
		::Class_1_E369120BF5C606A0* _PinChecker; // 0x18

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PININFORECORDER_OFFSET))(this);
		}

		::Class_1_52F4A47C29C64CBB* get_DataSource()
		{
			return ((::Class_1_52F4A47C29C64CBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_DATASOURCE_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* get_PlanResult()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_PLANRESULT_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GET_SELECTINFO_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* Create(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INIT_OFFSET))(this);
		}

		::System::Void _InitPinChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__INITPINCHECKER_OFFSET))(this);
		}

		::System::Boolean IsPinned(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_ISPINNED_OFFSET))(this, a1);
		}

		::System::UInt32 GetPinnedUID(::RPG::GameCore::RelicType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_GETPINNEDUID_OFFSET))(this, a1);
		}

		::System::Void PinOrUnPinRelic(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINORUNPINRELIC_OFFSET))(this, a1);
		}

		::System::Void PinRelic(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicSmartSuit::PinOperationSourceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicSmartSuit::PinOperationSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_PINRELIC_OFFSET))(this, a1, a2);
		}

		::System::Void UnPinRelic(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicSmartSuit::PinOperationSourceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicSmartSuit::PinOperationSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR_UNPINRELIC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* _RequestModifyPinRelic(::RPG::Client::RelicSmartSuit::PinData* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__REQUESTMODIFYPINRELIC_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinData* _GetClonePinData()
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__GETCLONEPINDATA_OFFSET))(this);
		}

		::System::Void _NotifyModifyPin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR__NOTIFYMODIFYPIN_OFFSET))(this, a1);
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
