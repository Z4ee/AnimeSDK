#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MISSIONTOASTUTILS_CLEARSAVEDMISSIONTOASTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8F35F0)
#define RPG_CLIENT_MISSIONTOASTUTILS_GETSAVEDMISSIONTOASTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8F3540)
#define RPG_CLIENT_MISSIONTOASTUTILS_ISSUBMISSIONTOASTBANNED_OFFSET UNITYSDK_OFFSET(0xA8F3690)
#define RPG_CLIENT_MISSIONTOASTUTILS_VALIDATEMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0xA8F3200)
#define RPG_CLIENT_MISSIONTOASTUTILS__RECORDMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0xA8F3410)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionToastUtils_TypeDefinitionIndex = 60927;

	class MissionToastUtils : public ::System::Object
	{
	public:
		static ::System::Boolean ValidateMissionToast(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_VALIDATEMISSIONTOAST_OFFSET))(mainMissionID);
		}

		static ::System::UInt32 GetSavedMissionToastMainMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_GETSAVEDMISSIONTOASTMAINMISSIONID_OFFSET))();
		}

		static ::System::Void ClearSavedMissionToastMainMissionID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_CLEARSAVEDMISSIONTOASTMAINMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsSubMissionToastBanned(::System::UInt32 subMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_ISSUBMISSIONTOASTBANNED_OFFSET))(subMissionID);
		}

		static ::System::Void _RecordMissionToast(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS__RECORDMISSIONTOAST_OFFSET))(mainMissionID);
		}
	};
}
