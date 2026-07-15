#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_4D3F8674ABF7F9DE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_72;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityHotData_ItemProgress; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class ActivityHotRow; }
namespace RPG::GameCore { class ActivityPanelRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTDATA_GETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x19D14110)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x19D13460)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x19D12E50)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x19D13390)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYPANELIDOVERWRITE_OFFSET UNITYSDK_OFFSET(0x19D13540)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19D13B30)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x19D13A70)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19D13EF0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x19D12CD0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_FIRSTITEMDES_OFFSET UNITYSDK_OFFSET(0x19D12F10)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x19D13710)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_HAVESCHEDULE_OFFSET UNITYSDK_OFFSET(0x19D13AD0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19D12F80)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_INTROID_OFFSET UNITYSDK_OFFSET(0x19D14020)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x19D137F0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x19D13760)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x19D12D20)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_NOTBEGIN_OFFSET UNITYSDK_OFFSET(0x19D13A10)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_OVERRIDEREMAINTIMEDESC_OFFSET UNITYSDK_OFFSET(0x19D12DE0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_PANELDATAFORGOTO_OFFSET UNITYSDK_OFFSET(0x19D13590)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_REWARDDES_OFFSET UNITYSDK_OFFSET(0x19D12EA0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_SHOWREWARDITEMID_OFFSET UNITYSDK_OFFSET(0x19D12D60)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x19D13340)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET__CANDIDATE_OFFSET UNITYSDK_OFFSET(0x19D13C60)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET__PANELROW_OFFSET UNITYSDK_OFFSET(0x19D132D0)
#define RPG_CLIENT_ACTIVITYHOTDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19D12BB0)
#define RPG_CLIENT_ACTIVITYHOTDATA_SYNCITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x19D125F0)
#define RPG_CLIENT_ACTIVITYHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D12580)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotData_TypeDefinitionIndex = 58796;

	class ActivityHotData : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* _FinishConditionChecker; // 0x10
		::RPG::GameCore::ActivityHotRow* _Row; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData_ItemProgress*>* _Items; // 0x20

		::System::Void _ctor(::RPG::GameCore::ActivityHotRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityHotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncItemProgress(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_72*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_72*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_SYNCITEMPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityHotData_ItemProgress*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityHotData_ItemProgress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::UInt32 get_ShowRewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_SHOWREWARDITEMID_OFFSET))(this);
		}

		::RPG::Client::TextID get_OverrideRemainTimeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_OVERRIDEREMAINTIMEDESC_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_REWARDDES_OFFSET))(this);
		}

		::RPG::Client::TextID get_FirstItemDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_FIRSTITEMDES_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Int32 get_SortWeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_FinishConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::System::UInt32 get_ActivityPanelIDOverwrite()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYPANELIDOVERWRITE_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* get_PanelDataForGoto()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_PANELDATAFORGOTO_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_NotBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_NOTBEGIN_OFFSET))(this);
		}

		::System::Boolean get_Ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDED_OFFSET))(this);
		}

		::System::Boolean get_HaveSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_HAVESCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Nullable_1<::Struct_2_4D3F8674ABF7F9DE> get__Candidate()
		{
			return ((::System::Nullable_1<::Struct_2_4D3F8674ABF7F9DE>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET__CANDIDATE_OFFSET))(this);
		}

		static ::System::UInt32 get_IntroID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_INTROID_OFFSET))();
		}

		::RPG::GameCore::ActivityPanelRow* get__PanelRow()
		{
			return ((::RPG::GameCore::ActivityPanelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET__PANELROW_OFFSET))(this);
		}

		::System::Int32 GetHCoinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GETHCOINCOUNT_OFFSET))(this);
		}
	};
}
