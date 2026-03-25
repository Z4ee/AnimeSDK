#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityStateEnum.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class ActivityPanelConditionRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTPREMISSIONS_OFFSET UNITYSDK_OFFSET(0x8FAE670)
#define RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0x8FAE1A0)
#define RPG_CLIENT_ACTIVITYSTATEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8FADF90)
#define RPG_CLIENT_ACTIVITYSTATEDATA_GETCURSTATEENDTIME_OFFSET UNITYSDK_OFFSET(0x8FAE360)
#define RPG_CLIENT_ACTIVITYSTATEDATA_GET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x8FAEC50)
#define RPG_CLIENT_ACTIVITYSTATEDATA_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x8FAEC00)
#define RPG_CLIENT_ACTIVITYSTATEDATA_ISINDELAYEDFOREXCHANGE_OFFSET UNITYSDK_OFFSET(0x8FAE250)
#define RPG_CLIENT_ACTIVITYSTATEDATA_SET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x8FAEC60)
#define RPG_CLIENT_ACTIVITYSTATEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FAEC70)
#define RPG_CLIENT_ACTIVITYSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FAE030)
#define RPG_CLIENT_ACTIVITYSTATEDATA__INITCHECKERS_OFFSET UNITYSDK_OFFSET(0x8FAE040)
#define RPG_CLIENT_ACTIVITYSTATEDATA__REFRESHSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8FAE8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStateData_TypeDefinitionIndex = 50111;

	class ActivityStateData : public ::System::Object
	{
	public:
		static ::RPG::Client::DateTimePro* StaticGet__ForeverEndDateTime()
		{
			return (::RPG::Client::DateTimePro*)Il2CppClass::FromTypeDefinitionIndex(ActivityStateData_TypeDefinitionIndex)->GetStaticField(0xF710);
		}
		::RPG::Client::ActivityPanelData* _OwnerPanelRef; // 0x10
		::RPG::GameCore::ActivityPanelConditionRow* _ConditionConfig_k__BackingField; // 0x18
		::RPG::Client::ConditionChecker* _P2IChecker; // 0x20
		::RPG::Client::ConditionChecker* _L2PChecker; // 0x28
		::RPG::Client::ActivityStateEnum _CurStateInternal; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityStateData* Create(::RPG::Client::ActivityPanelData* panelData)
		{
			return ((::RPG::Client::ActivityStateData*(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_CREATE_OFFSET))(panelData);
		}

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& mainMissionIDs, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& subMissionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTREQUIREDMISSION_OFFSET))(this, mainMissionIDs, subMissionIDs);
		}

		::System::Boolean IsInDelayedForExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_ISINDELAYEDFOREXCHANGE_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetCurStateEndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_GETCURSTATEENDTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CollectPreMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTPREMISSIONS_OFFSET))(this);
		}

		::System::Void _InitCheckers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA__INITCHECKERS_OFFSET))(this);
		}

		::System::Void _RefreshState_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA__REFRESHSTATE_INTERNAL_OFFSET))(this);
		}

		::RPG::Client::ActivityStateEnum get_CurState()
		{
			return ((::RPG::Client::ActivityStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_GET_CURSTATE_OFFSET))(this);
		}

		::RPG::GameCore::ActivityPanelConditionRow* get_ConditionConfig()
		{
			return ((::RPG::GameCore::ActivityPanelConditionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_GET_CONDITIONCONFIG_OFFSET))(this);
		}

		::System::Void set_ConditionConfig(::RPG::GameCore::ActivityPanelConditionRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityPanelConditionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_SET_CONDITIONCONFIG_OFFSET))(this, value);
		}
	};
}
