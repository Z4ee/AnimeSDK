#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3C4310)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GETPLANPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD3BA2A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_DESCWAITING_OFFSET UNITYSDK_OFFSET(0xD3C4640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANDESC_OFFSET UNITYSDK_OFFSET(0xD3C4620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANID_OFFSET UNITYSDK_OFFSET(0xD3C45C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD3C45E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xD3C4600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD3C4660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_DESCWAITING_OFFSET UNITYSDK_OFFSET(0xD3C4650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANDESC_OFFSET UNITYSDK_OFFSET(0xD3C4630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANID_OFFSET UNITYSDK_OFFSET(0xD3C45D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANPHASEDATALIST_OFFSET UNITYSDK_OFFSET(0xD3C45F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xD3C4610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD3C4670)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C44D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanData_TypeDefinitionIndex = 80301;

	class LimaoNewsPlanData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*>* _PlanPhaseDataList_k__BackingField; // 0x10
		::RPG::Client::TextID _PlanDesc_k__BackingField; // 0x18
		::RPG::Client::TextID _PlanTitle_k__BackingField; // 0x28
		::RPG::Client::TextID _DescWaiting_k__BackingField; // 0x38
		::System::UInt32 _RewardID_k__BackingField; // 0x48
		::System::UInt32 _PlanID_k__BackingField; // 0x4C

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
