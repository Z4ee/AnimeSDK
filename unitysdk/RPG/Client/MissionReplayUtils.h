#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System { class String; }

#define RPG_CLIENT_MISSIONREPLAYUTILS_BYTETOSIZESTRING_OFFSET UNITYSDK_OFFSET(0xC03C970)
#define RPG_CLIENT_MISSIONREPLAYUTILS_GETPERFORMANCEDESC_OFFSET UNITYSDK_OFFSET(0xC03C6A0)
#define RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC03C8E0)
#define RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONSUPPORTREPLAY_OFFSET UNITYSDK_OFFSET(0xC036FD0)
#define RPG_CLIENT_MISSIONREPLAYUTILS_ISREPLAYFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xC03C7E0)
#define RPG_CLIENT_MISSIONREPLAYUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xC03C9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayUtils_TypeDefinitionIndex = 61897;

	class MissionReplayUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TextID GetPerformanceDesc(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_GETPERFORMANCEDESC_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsReplayFeatureClosed(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_ISREPLAYFEATURECLOSED_OFFSET))(a1);
		}

		static ::System::Boolean IsMissionSupportReplay(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONSUPPORTREPLAY_OFFSET))(a1);
		}

		static ::System::Boolean IsMissionHasPerformance(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_ISMISSIONHASPERFORMANCE_OFFSET))(a1);
		}

		static ::System::String* ByteToSizeString(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYUTILS_BYTETOSIZESTRING_OFFSET))(a1);
		}
	};
}
