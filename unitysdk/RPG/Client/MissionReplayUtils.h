#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONREPLAYUTILS_BYTETOSIZESTRING_OFFSET UNITYSDK_OFFSET(0xA8EE390)
#define RPG_CLIENT_MISSIONREPLAYUTILS_GETPERFORMANCEDESC_OFFSET UNITYSDK_OFFSET(0xA8EE0F0)
#define RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA8EE300)
#define RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONSUPPORTREPLAY_OFFSET UNITYSDK_OFFSET(0xA8E8B90)
#define RPG_CLIENT_MISSIONREPLAYUTILS_ISREPLAYFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xA8EE200)
#define RPG_CLIENT_MISSIONREPLAYUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xA8EE400)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayUtils_TypeDefinitionIndex = 60963;

	class MissionReplayUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TextID GetPerformanceDesc(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_GETPERFORMANCEDESC_OFFSET))(performanceType, performanceID);
		}

		static ::System::Boolean IsReplayFeatureClosed(::RPG::Client::MissionChronicleBasePathData* pathData)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_ISREPLAYFEATURECLOSED_OFFSET))(pathData);
		}

		static ::System::Boolean IsMissionSupportReplay(::RPG::Client::MissionChronicleBasePathData* pathData)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONSUPPORTREPLAY_OFFSET))(pathData);
		}

		static ::System::Boolean IsMissionHasPerformance(::RPG::Client::MissionChronicleBasePathData* pathData)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONHASPERFORMANCE_OFFSET))(pathData);
		}

		static ::System::String* ByteToSizeString(::System::Int64 bytes)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_BYTETOSIZESTRING_OFFSET))(bytes);
		}
	};
}
