#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionProgressType.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_ADDSUBMISSION_OFFSET UNITYSDK_OFFSET(0xAAE25B0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_DELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0xAAE2740)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xAAE2980)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xAAE30B0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xAAE27D0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_HINTMISSIONLOGICTYPE_OFFSET UNITYSDK_OFFSET(0xAAE2FB0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xAAE2E40)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xAAE3220)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISSHOWFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0xAAE2D00)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISSHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0xAAE2A80)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISUNKNOW_OFFSET UNITYSDK_OFFSET(0xAAE32E0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_MINSUBMISSIONIDINPROGRESS_OFFSET UNITYSDK_OFFSET(0xAAE33A0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_MISSIONPROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0xAAE2BC0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xAAE34C0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_SUBMISSIONSCOUNT_OFFSET UNITYSDK_OFFSET(0xAAE2930)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xAAE27E0)
#define RPG_CLIENT_MULTIEXECMISSIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE2570)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiExecMissionGroupData_TypeDefinitionIndex = 60953;

	class MultiExecMissionGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* _SubMissions; // 0x10
		::System::UInt32 _GroupID; // 0x18

		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA__CTOR_OFFSET))(this, groupID);
		}

		::System::Void AddSubMission(::RPG::Client::SubMissionData* subMission)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_ADDSUBMISSION_OFFSET))(this, subMission);
		}

		::System::Void DeleteSubMission(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_DELETESUBMISSION_OFFSET))(this, subMissionData);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Int32 get_TotalProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_CurrentProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsShowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISSHOWPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::MissionProgressType get_MissionProgressType()
		{
			return ((::RPG::GameCore::MissionProgressType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_MISSIONPROGRESSTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShowFinishEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISSHOWFINISHEFFECT_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::RPG::GameCore::SubmissionLogicType get_HintMissionLogicType()
		{
			return ((::RPG::GameCore::SubmissionLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_HINTMISSIONLOGICTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsUnknow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_ISUNKNOW_OFFSET))(this);
		}

		::System::UInt32 get_MinSubMissionIDInProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_MINSUBMISSIONIDINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_SubMissionsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIEXECMISSIONGROUPDATA_GET_SUBMISSIONSCOUNT_OFFSET))(this);
		}
	};
}
