#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPlanPhaseType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD3C48B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD3C4BC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_OPENWORKPROGRESSCOMMAND_OFFSET UNITYSDK_OFFSET(0xD3C4C00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PHASEDESC_OFFSET UNITYSDK_OFFSET(0xD3C4B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PHASERECORD_OFFSET UNITYSDK_OFFSET(0xD3C4BA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PLANID_OFFSET UNITYSDK_OFFSET(0xD3C4B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD3C4B40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PLANPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD3C4B60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_REPLAYPERFORMANCECOMMAND_OFFSET UNITYSDK_OFFSET(0xD3C4BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD3C4BD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_OPENWORKPROGRESSCOMMAND_OFFSET UNITYSDK_OFFSET(0xD3C4C10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PHASEDESC_OFFSET UNITYSDK_OFFSET(0xD3C4B90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PHASERECORD_OFFSET UNITYSDK_OFFSET(0xD3C4BB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PLANID_OFFSET UNITYSDK_OFFSET(0xD3C4B30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PLANPHASEID_OFFSET UNITYSDK_OFFSET(0xD3C4B50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PLANPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD3C4B70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_REPLAYPERFORMANCECOMMAND_OFFSET UNITYSDK_OFFSET(0xD3C4BF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C4B00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanReviewPhaseItemViewModel_TypeDefinitionIndex = 80441;

	class LimaoNewsPlanReviewPhaseItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OpenWorkProgressCommand_k__BackingField; // 0x20
		::Sofa::Core::SimpleCommand* _ReplayPerformanceCommand_k__BackingField; // 0x28
		::RPG::Client::TextID _PhaseDesc_k__BackingField; // 0x30
		::RPG::Client::TextID _PhaseRecord_k__BackingField; // 0x40
		::RPG::GameCore::LimaoNewsPlanPhaseType _PlanPhaseType_k__BackingField; // 0x50
		::System::UInt32 _PlanPhaseID_k__BackingField; // 0x54
		::System::Boolean _IsFinished_k__BackingField; // 0x58
		::System::UInt32 _PlanID_k__BackingField; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a1, ::System::Boolean a2, ::System::UInt32 a3, ::RPG::Client::LimaoNews::LimaoNewsPlanService* a4, ::RPG::Client::LimaoNews::LimaoNewsWindowService* a5)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*, ::System::Boolean, ::System::UInt32, ::RPG::Client::LimaoNews::LimaoNewsPlanService*, ::RPG::Client::LimaoNews::LimaoNewsWindowService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_PlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PLANID_OFFSET))(this);
		}

		::System::Void set_PlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PLANID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlanPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PLANPHASEID_OFFSET))(this);
		}

		::System::Void set_PlanPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PLANPHASEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LimaoNewsPlanPhaseType get_PlanPhaseType()
		{
			return ((::RPG::GameCore::LimaoNewsPlanPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PLANPHASETYPE_OFFSET))(this);
		}

		::System::Void set_PlanPhaseType(::RPG::GameCore::LimaoNewsPlanPhaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsPlanPhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PLANPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PhaseDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PHASEDESC_OFFSET))(this);
		}

		::System::Void set_PhaseDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PHASEDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PhaseRecord()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_PHASERECORD_OFFSET))(this);
		}

		::System::Void set_PhaseRecord(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_PHASERECORD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ReplayPerformanceCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_REPLAYPERFORMANCECOMMAND_OFFSET))(this);
		}

		::System::Void set_ReplayPerformanceCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_REPLAYPERFORMANCECOMMAND_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OpenWorkProgressCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_GET_OPENWORKPROGRESSCOMMAND_OFFSET))(this);
		}

		::System::Void set_OpenWorkProgressCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL_SET_OPENWORKPROGRESSCOMMAND_OFFSET))(this, a1);
		}
	};
}
