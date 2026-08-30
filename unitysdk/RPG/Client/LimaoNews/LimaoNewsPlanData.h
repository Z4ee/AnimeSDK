#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C558760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GETPLANPHASEDATA_OFFSET UNITYSDK_OFFSET(0x1C54D820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_DESCWAITING_OFFSET UNITYSDK_OFFSET(0x1C558A80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANDESC_OFFSET UNITYSDK_OFFSET(0x1C558A60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANID_OFFSET UNITYSDK_OFFSET(0x1C558A00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0x1C558A20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0x1C558A40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1C558AA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_DESCWAITING_OFFSET UNITYSDK_OFFSET(0x1C558A90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANDESC_OFFSET UNITYSDK_OFFSET(0x1C558A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANID_OFFSET UNITYSDK_OFFSET(0x1C558A10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0x1C558A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0x1C558A50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1C558AB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C558920)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanData_TypeDefinitionIndex = 78978;

	class LimaoNewsPlanData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*>* _PlanPhaseDataList_k__BackingField; // 0x10
		::System::UInt32 _PlanID_k__BackingField; // 0x18
		::System::UInt32 _RewardID_k__BackingField; // 0x1C
		::RPG::Client::TextID _PlanTitle_k__BackingField; // 0x20
		::RPG::Client::TextID _PlanDesc_k__BackingField; // 0x30
		::RPG::Client::TextID _DescWaiting_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPlanData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* GetPlanPhaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GETPLANPHASEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANID_OFFSET))(this);
		}

		::System::Void set_PlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*>* get_PlanPhaseDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANPHASEDATALIST_OFFSET))(this);
		}

		::System::Void set_PlanPhaseDataList(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANPHASEDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlanTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANTITLE_OFFSET))(this);
		}

		::System::Void set_PlanTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlanDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANDESC_OFFSET))(this);
		}

		::System::Void set_PlanDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DescWaiting()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_DESCWAITING_OFFSET))(this);
		}

		::System::Void set_DescWaiting(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_DESCWAITING_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_REWARDID_OFFSET))(this, a1);
		}
	};
}
