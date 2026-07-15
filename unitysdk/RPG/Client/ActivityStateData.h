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

#define RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTPREMISSIONS_OFFSET UNITYSDK_OFFSET(0x193443C0)
#define RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0x1931A2F0)
#define RPG_CLIENT_ACTIVITYSTATEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19318620)
#define RPG_CLIENT_ACTIVITYSTATEDATA_GETCURSTATEENDTIME_OFFSET UNITYSDK_OFFSET(0x19343FF0)
#define RPG_CLIENT_ACTIVITYSTATEDATA_GET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x19344CA0)
#define RPG_CLIENT_ACTIVITYSTATEDATA_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x19319960)
#define RPG_CLIENT_ACTIVITYSTATEDATA_ISINDELAYEDFOREXCHANGE_OFFSET UNITYSDK_OFFSET(0x19319B20)
#define RPG_CLIENT_ACTIVITYSTATEDATA_SET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x19344CB0)
#define RPG_CLIENT_ACTIVITYSTATEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19344CC0)
#define RPG_CLIENT_ACTIVITYSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19343E80)
#define RPG_CLIENT_ACTIVITYSTATEDATA__INITCHECKERS_OFFSET UNITYSDK_OFFSET(0x19343E90)
#define RPG_CLIENT_ACTIVITYSTATEDATA__REFRESHSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19344650)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStateData_TypeDefinitionIndex = 59008;

	class ActivityStateData : public ::System::Object
	{
	public:
		static ::RPG::Client::DateTimePro* StaticGet__ForeverEndDateTime()
		{
			return (::RPG::Client::DateTimePro*)Il2CppClass::FromTypeDefinitionIndex(ActivityStateData_TypeDefinitionIndex)->GetStaticField(0xCA60);
		}
		::RPG::Client::ConditionChecker* _L2PChecker; // 0x10
		::RPG::Client::ActivityPanelData* _OwnerPanelRef; // 0x18
		::RPG::Client::ConditionChecker* _P2IChecker; // 0x20
		::RPG::GameCore::ActivityPanelConditionRow* _ConditionConfig_k__BackingField; // 0x28
		::RPG::Client::ActivityStateEnum _CurStateInternal; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityStateData* Create(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::RPG::Client::ActivityStateData*(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_COLLECTREQUIREDMISSION_OFFSET))(this, a1, a2);
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

		::System::Void set_ConditionConfig(::RPG::GameCore::ActivityPanelConditionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityPanelConditionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTATEDATA_SET_CONDITIONCONFIG_OFFSET))(this, a1);
		}
	};
}
