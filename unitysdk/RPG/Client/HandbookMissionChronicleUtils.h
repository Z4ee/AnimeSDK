#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }

#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_GETMAINPATHFROMCHAPTERDATALISTBY_OFFSET UNITYSDK_OFFSET(0xD39EA50)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_1_OFFSET UNITYSDK_OFFSET(0xD394120)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_OFFSET UNITYSDK_OFFSET(0xD393720)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_TRYFINDSUBPATHDATAFROMMAINPATH_OFFSET UNITYSDK_OFFSET(0xD39E9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookMissionChronicleUtils_TypeDefinitionIndex = 65688;

	class HandbookMissionChronicleUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsMissionInPath(::System::UInt32 a1, ::RPG::Client::MissionChronicleMainPathData* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMissionInPath_1(::System::UInt32 a1, ::RPG::Client::MissionChronicleSubPathData* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MissionChronicleSubPathData* TryFindSubPathDataFromMainPath(::System::UInt32 a1, ::RPG::Client::MissionChronicleMainPathData* a2)
		{
			return ((::RPG::Client::MissionChronicleSubPathData*(*)(::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_TRYFINDSUBPATHDATAFROMMAINPATH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MissionChronicleMainPathData* GetMainPathFromChapterDataListBy(::System::UInt32 a1)
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_GETMAINPATHFROMCHAPTERDATALISTBY_OFFSET))(a1);
		}
	};
}
