#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MISSIONTOASTUTILS_CLEARSAVEDMISSIONTOASTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1805E310)
#define RPG_CLIENT_MISSIONTOASTUTILS_GETSAVEDMISSIONTOASTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1805E270)
#define RPG_CLIENT_MISSIONTOASTUTILS_ISSUBMISSIONTOASTBANNED_OFFSET UNITYSDK_OFFSET(0x1805E3B0)
#define RPG_CLIENT_MISSIONTOASTUTILS_VALIDATEMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0x1805DEE0)
#define RPG_CLIENT_MISSIONTOASTUTILS__RECORDMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0x1805E150)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionToastUtils_TypeDefinitionIndex = 63224;

	class MissionToastUtils : public ::System::Object
	{
	public:
		static ::System::Boolean ValidateMissionToast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_VALIDATEMISSIONTOAST_OFFSET))(a1);
		}

		static ::System::UInt32 GetSavedMissionToastMainMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_GETSAVEDMISSIONTOASTMAINMISSIONID_OFFSET))();
		}

		static ::System::Void ClearSavedMissionToastMainMissionID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_CLEARSAVEDMISSIONTOASTMAINMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsSubMissionToastBanned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS_ISSUBMISSIONTOASTBANNED_OFFSET))(a1);
		}

		static ::System::Void _RecordMissionToast(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONTOASTUTILS__RECORDMISSIONTOAST_OFFSET))(a1);
		}
	};
}
