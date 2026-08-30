#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionProgressType.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_ADDSUBMISSION_OFFSET UNITYSDK_OFFSET(0xE0A2F50)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_DELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0xE0A32F0)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xE0A3510)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE0A3F30)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE0A3380)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_HINTMISSIONLOGICTYPE_OFFSET UNITYSDK_OFFSET(0xE0A3D80)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xE0A3B80)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xE0A4130)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISSHOWFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0xE0A39D0)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISSHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0xE0A3670)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISUNKNOW_OFFSET UNITYSDK_OFFSET(0xE0A4190)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_MINSUBMISSIONIDINPROGRESS_OFFSET UNITYSDK_OFFSET(0xE0A4290)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_MISSIONPROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0xE0A3820)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xE0A4550)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_SUBMISSIONSCOUNT_OFFSET UNITYSDK_OFFSET(0xE0A4700)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xE0A33C0)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A2F10)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA__GET_SORTID_B__28_0_OFFSET UNITYSDK_OFFSET(0xE0A4750)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleExecMissionGroupData_TypeDefinitionIndex = 66239;

	class SingleExecMissionGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* _SubMissions; // 0x10
		::System::UInt32 _GroupID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddSubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_ADDSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void DeleteSubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_DELETESUBMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Int32 get_TotalProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_CurrentProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsShowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISSHOWPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::MissionProgressType get_MissionProgressType()
		{
			return ((::RPG::GameCore::MissionProgressType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_MISSIONPROGRESSTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShowFinishEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISSHOWFINISHEFFECT_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::RPG::GameCore::SubmissionLogicType get_HintMissionLogicType()
		{
			return ((::RPG::GameCore::SubmissionLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_HINTMISSIONLOGICTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsUnknow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_ISUNKNOW_OFFSET))(this);
		}

		::System::UInt32 get_MinSubMissionIDInProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_MINSUBMISSIONIDINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_SubMissionsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA_GET_SUBMISSIONSCOUNT_OFFSET))(this);
		}

		::System::Boolean _get_SortID_b__28_0(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA__GET_SORTID_B__28_0_OFFSET))(this, a1);
		}
	};
}
