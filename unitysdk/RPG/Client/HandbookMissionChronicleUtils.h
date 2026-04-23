#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }

#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_1_OFFSET UNITYSDK_OFFSET(0xA5EC470)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_OFFSET UNITYSDK_OFFSET(0xA5EC2A0)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_TRYFINDSUBPATHDATAFROMMAINPATH_OFFSET UNITYSDK_OFFSET(0xA5EC4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookMissionChronicleUtils_TypeDefinitionIndex = 60424;

	class HandbookMissionChronicleUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsMissionInPath(::System::UInt32 missionID, ::RPG::Client::MissionChronicleMainPathData* pathData)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_OFFSET))(missionID, pathData);
		}

		static ::System::Boolean IsMissionInPath_1(::System::UInt32 missionID, ::RPG::Client::MissionChronicleSubPathData* pathData)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_1_OFFSET))(missionID, pathData);
		}

		static ::RPG::Client::MissionChronicleSubPathData* TryFindSubPathDataFromMainPath(::System::UInt32 subPathDataID, ::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::RPG::Client::MissionChronicleSubPathData*(*)(::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_TRYFINDSUBPATHDATAFROMMAINPATH_OFFSET))(subPathDataID, mainPathData);
		}
	};
}
