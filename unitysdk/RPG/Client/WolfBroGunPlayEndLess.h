#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayEndLess_EndLessTimelineConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }

#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_CREATEROADMAP_OFFSET UNITYSDK_OFFSET(0xCC310F0)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GETRANDOMROADMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xCC31180)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_ACCELTIMESCALEVALUE_OFFSET UNITYSDK_OFFSET(0xCC31690)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_CURRENTTIMELINECOUNT_OFFSET UNITYSDK_OFFSET(0xCC31660)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_MAXMISSTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xCC31640)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xCC310D0)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xCC31680)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_ONFINISHONCETIMELINE_OFFSET UNITYSDK_OFFSET(0xCC31540)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_REFRESH_OFFSET UNITYSDK_OFFSET(0xCC315A0)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_ACCELTIMESCALEVALUE_OFFSET UNITYSDK_OFFSET(0xCC316A0)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_CURRENTTIMELINECOUNT_OFFSET UNITYSDK_OFFSET(0xCC31670)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_MAXMISSTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xCC31650)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xCC310E0)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS_STARTUP_OFFSET UNITYSDK_OFFSET(0xCC31420)
#define RPG_CLIENT_WOLFBROGUNPLAYENDLESS__CTOR_OFFSET UNITYSDK_OFFSET(0xCC316B0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayEndLess_TypeDefinitionIndex = 64295;

	class WolfBroGunPlayEndLess : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::WolfBroGunPlayPuzzleBoard* _Puzzle_k__BackingField; // 0x18
		::System::Int32 _MaxMissTargetCount_k__BackingField; // 0x20
		::System::Int32 _CurrentTimelineCount_k__BackingField; // 0x24
		::System::Single _AccelTimeScaleValue_k__BackingField; // 0x28
		::System::Int32 beginAccelTimelineCount; // 0x2C
		::System::Single accelValue; // 0x30
		::System::Single maxAccelValue; // 0x34
		::Il2CppArray<::RPG::Client::WolfBroGunPlayEndLess_EndLessTimelineConfig>* timelinePool; // 0x38
		::System::Int32 Field_5_8; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS__CTOR_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayPuzzleBoard* get_Puzzle()
		{
			return ((::RPG::Client::WolfBroGunPlayPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_PUZZLE_OFFSET))(this);
		}

		::System::Void set_Puzzle(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_PUZZLE_OFFSET))(this, a1);
		}

		::Class_1_2BF31F3092BDFD9E* CreateRoadMap()
		{
			return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_CREATEROADMAP_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayRoadMapConfig* GetRandomRoadMapConfig(::RPG::Client::WolfBroGunPlayRoadMapConfig* a1)
		{
			return ((::RPG::Client::WolfBroGunPlayRoadMapConfig*(*)(::PVOID, ::RPG::Client::WolfBroGunPlayRoadMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GETRANDOMROADMAPCONFIG_OFFSET))(this, a1);
		}

		::System::Void Startup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_STARTUP_OFFSET))(this);
		}

		::System::Void OnFinishOnceTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_ONFINISHONCETIMELINE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_2BF31F3092BDFD9E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_REFRESH_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxMissTargetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_MAXMISSTARGETCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxMissTargetCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_MAXMISSTARGETCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentTimelineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_CURRENTTIMELINECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentTimelineCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_CURRENTTIMELINECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Single get_AccelTimeScaleValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_GET_ACCELTIMESCALEVALUE_OFFSET))(this);
		}

		::System::Void set_AccelTimeScaleValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYENDLESS_SET_ACCELTIMESCALEVALUE_OFFSET))(this, a1);
		}
	};
}
