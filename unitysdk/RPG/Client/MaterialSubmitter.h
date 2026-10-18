#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialSubmitterState.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_821;
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MaterialSubmitterGroup; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class MaterialSubmitterRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSUBMITTER_CREATE_OFFSET UNITYSDK_OFFSET(0xD5D5780)
#define RPG_CLIENT_MATERIALSUBMITTER_GETMATERIALIDS_OFFSET UNITYSDK_OFFSET(0xD5D5990)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD5D5060)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD5D4E00)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD5D50E0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD5D4800)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_HASENDED_OFFSET UNITYSDK_OFFSET(0xD5D5000)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_HASSEENUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0xD5D5620)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_HASSTARTED_OFFSET UNITYSDK_OFFSET(0xD5D4FA0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_HASSUBMITTED_OFFSET UNITYSDK_OFFSET(0xD5D4B50)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xD5D4C00)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD5D4CB0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_ID_OFFSET UNITYSDK_OFFSET(0xD5D4730)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_ISFIRST_OFFSET UNITYSDK_OFFSET(0xD5D5160)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD5D4E60)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_ISLAST_OFFSET UNITYSDK_OFFSET(0xD5D52D0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xD5D5440)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xD5D4880)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_MISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD5D48D0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD5D4980)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xD5D4EC0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD5D49D0)
#define RPG_CLIENT_MATERIALSUBMITTER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD5D4780)
#define RPG_CLIENT_MATERIALSUBMITTER_MARKHASSEENUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0xD5D5AD0)
#define RPG_CLIENT_MATERIALSUBMITTER_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0xD5D5C60)
#define RPG_CLIENT_MATERIALSUBMITTER_SUBMITMATERIAL_OFFSET UNITYSDK_OFFSET(0xD5D5850)
#define RPG_CLIENT_MATERIALSUBMITTER_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD5D58F0)
#define RPG_CLIENT_MATERIALSUBMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5D5840)
#define RPG_CLIENT_MATERIALSUBMITTER__EVALUATESTATE_OFFSET UNITYSDK_OFFSET(0xD5D4A20)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmitter_TypeDefinitionIndex = 61796;

	class MaterialSubmitter : public ::System::Object
	{
	public:
		::RPG::Client::MaterialSubmitterGroup* _Owner; // 0x10
		::RPG::GameCore::MaterialSubmitterRow* _Meta; // 0x18
		::Class_0_16E4307DCC419505_821* _ServerAgent; // 0x20

		::System::Void _ctor(::RPG::GameCore::MaterialSubmitterRow* a1, ::RPG::Client::MaterialSubmitterGroup* a2, ::Class_0_16E4307DCC419505_821* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MaterialSubmitterRow*, ::RPG::Client::MaterialSubmitterGroup*, ::Class_0_16E4307DCC419505_821*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::MaterialSubmissionType get_Type()
		{
			return ((::RPG::GameCore::MaterialSubmissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_GROUPID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_Materials()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_MATERIALS_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_MISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitterState get_State()
		{
			return ((::RPG::Client::MaterialSubmitterState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_HasSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_HASSUBMITTED_OFFSET))(this);
		}

		::System::Boolean get_HasTakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_HASTAKENREWARD_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_CANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_HasStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_HASSTARTED_OFFSET))(this);
		}

		::System::Boolean get_HasEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_HASENDED_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_SCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_IsFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_ISFIRST_OFFSET))(this);
		}

		::System::Boolean get_IsLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_ISLAST_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_HasSeenUnlockEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GET_HASSEENUNLOCKEFFECT_OFFSET))(this);
		}

		static ::RPG::Client::MaterialSubmitter* Create(::System::UInt32 a1, ::RPG::Client::MaterialSubmitterGroup* a2, ::Class_0_16E4307DCC419505_821* a3)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::System::UInt32, ::RPG::Client::MaterialSubmitterGroup*, ::Class_0_16E4307DCC419505_821*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void SubmitMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_SUBMITMATERIAL_OFFSET))(this);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_TAKEREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMaterialIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_GETMATERIALIDS_OFFSET))(this);
		}

		::System::Void MarkHasSeenUnlockEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_MARKHASSEENUNLOCKEFFECT_OFFSET))(this);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER_MARKHASSEEN_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitterState _EvaluateState()
		{
			return ((::RPG::Client::MaterialSubmitterState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTER__EVALUATESTATE_OFFSET))(this);
		}
	};
}
