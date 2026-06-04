#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }

#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_1_OFFSET UNITYSDK_OFFSET(0xBCE5150)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_ISMISSIONINPATH_OFFSET UNITYSDK_OFFSET(0xBCE4950)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLEUTILS_TRYFINDSUBPATHDATAFROMMAINPATH_OFFSET UNITYSDK_OFFSET(0xBCEF610)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookMissionChronicleUtils_TypeDefinitionIndex = 61359;

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
	};
}
