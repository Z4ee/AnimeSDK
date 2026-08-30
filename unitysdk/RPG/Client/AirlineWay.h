#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/AirlineWay_ETailMode.h"
#include "unitysdk/Struct_2_984AA94FB23486F9.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client { class AirlineStationInfo; }
namespace RPG::Client { class AirlineVariableScalePoint; }
namespace RPG::Client { class AirlineVariableSpeedRange; }
namespace RPG::Client { class AirlineWay_Class_1_5F7BD4F39335B2FB; }
namespace RPG::Client { class RacingBoostRingConfig; }
namespace RPG::Client { class RacingDriveConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRLINEWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C4F0E0)
#define RPG_CLIENT_AIRLINEWAY_CLAMPRACINGOFFSET_OFFSET UNITYSDK_OFFSET(0x19C520D0)
#define RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x19C51E80)
#define RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTTRIGGERDISTANCE_OFFSET UNITYSDK_OFFSET(0x19C52000)
#define RPG_CLIENT_AIRLINEWAY_GETBAKEDRACINGLINELATERALOFFSET_OFFSET UNITYSDK_OFFSET(0x19C53580)
#define RPG_CLIENT_AIRLINEWAY_GETNEXTRACINGBOOSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0x19C51B80)
#define RPG_CLIENT_AIRLINEWAY_GETOPTIMALRACINGLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x19C52BF0)
#define RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKANCHOR_OFFSET UNITYSDK_OFFSET(0x19C504E0)
#define RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKPOSITION_OFFSET UNITYSDK_OFFSET(0x19C50F40)
#define RPG_CLIENT_AIRLINEWAY_GETRACINGTURNSTRENGTH_OFFSET UNITYSDK_OFFSET(0x19C521E0)
#define RPG_CLIENT_AIRLINEWAY_GET_BODYLOOKAHEADDISTANCE_OFFSET UNITYSDK_OFFSET(0x19C4EC90)
#define RPG_CLIENT_AIRLINEWAY_GET_HASBAKEDRACINGLINE_OFFSET UNITYSDK_OFFSET(0x19C52E90)
#define RPG_CLIENT_AIRLINEWAY_GET_HASBODYLOOKAHEADSTEERING_OFFSET UNITYSDK_OFFSET(0x19C4EC70)
#define RPG_CLIENT_AIRLINEWAY_GET_HASCUSTOMSAILBOATWINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x19C4ECE0)
#define RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTRINGS_OFFSET UNITYSDK_OFFSET(0x19C4EE30)
#define RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTSPEEDCONFIG_OFFSET UNITYSDK_OFFSET(0x19C4EFB0)
#define RPG_CLIENT_AIRLINEWAY_GET_HASTURNSPEEDCONTROL_OFFSET UNITYSDK_OFFSET(0x19C4EC60)
#define RPG_CLIENT_AIRLINEWAY_GET_ISRACINGMODEENABLED_OFFSET UNITYSDK_OFFSET(0x19C51100)
#define RPG_CLIENT_AIRLINEWAY_GET_LEAVEDISSOLVEPOINT_OFFSET UNITYSDK_OFFSET(0x19C4EC40)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTMOVETRIGGERHASH_OFFSET UNITYSDK_OFFSET(0x19C4EE90)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTSPEEDDURATION_OFFSET UNITYSDK_OFFSET(0x19C4F020)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTTRIGGERDISTANCEOFFSET_OFFSET UNITYSDK_OFFSET(0x19C4F080)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGDRIVESETTINGS_OFFSET UNITYSDK_OFFSET(0x19C4EDC0)
#define RPG_CLIENT_AIRLINEWAY_GET_SAILBOATWINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x19C4ED40)
#define RPG_CLIENT_AIRLINEWAY_INITRACINGBOOSTRINGS_OFFSET UNITYSDK_OFFSET(0x19C51160)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x19C536E0)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_2B3F866319C4A343_OFFSET UNITYSDK_OFFSET(0x19C4FC40)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_30D4DB5416FA0B9D_OFFSET UNITYSDK_OFFSET(0x19C53230)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_68EC003199A8D3E9_OFFSET UNITYSDK_OFFSET(0x19C52CE0)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_7728625555DDF702_OFFSET UNITYSDK_OFFSET(0x19C537B0)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_ABA4391DF13D43EA_OFFSET UNITYSDK_OFFSET(0x19C522C0)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_BF0BDBC966C0A3D7_OFFSET UNITYSDK_OFFSET(0x19C4EF40)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19C539A0)
#define RPG_CLIENT_AIRLINEWAY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19C53960)
#define RPG_CLIENT_AIRLINEWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C4FEB0)
#define RPG_CLIENT_AIRLINEWAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19C4FE60)
#define RPG_CLIENT_AIRLINEWAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19C4FBF0)
#define RPG_CLIENT_AIRLINEWAY_RELEASERACINGBOOSTRINGS_OFFSET UNITYSDK_OFFSET(0x19C4FF00)
#define RPG_CLIENT_AIRLINEWAY_SET_LEAVEDISSOLVEPOINT_OFFSET UNITYSDK_OFFSET(0x19C4EC50)
#define RPG_CLIENT_AIRLINEWAY_START_OFFSET UNITYSDK_OFFSET(0x19C50120)
#define RPG_CLIENT_AIRLINEWAY_TRIGGERRACINGBOOSTRING_OFFSET UNITYSDK_OFFSET(0x19C51CF0)
#define RPG_CLIENT_AIRLINEWAY_TRYGETBAKEDRACINGLINEPOSE_OFFSET UNITYSDK_OFFSET(0x19C52EF0)
#define RPG_CLIENT_AIRLINEWAY_TRYGETRACINGBOOSTRINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x19C51C40)
#define RPG_CLIENT_AIRLINEWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C53A80)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay_TypeDefinitionIndex = 59911;

	class AirlineWay : public ::RPG::Client::Airline
	{
	public:
		// static const ::System::Int32 NMHIJPMMLCE = 0x3E8; // 0x0
		::RPG::Client::AirlineWay_ETailMode tailMode; // 0x30
		::System::Single width; // 0x34
		::System::Boolean enableRacingBehavior; // 0x38
		::RPG::Client::RacingDriveConfig* racingDriveConfig; // 0x40
		::RPG::Client::RacingBoostRingConfig* racingBoostRingConfig; // 0x48
		::System::Boolean fullSpeed; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableSpeedRange*>* variableSpeedRanges; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableScalePoint*>* variableScalePoints; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::AirlineStationInfo*>* stations; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* subwayHiddenSegments; // 0x70
		::System::Int32 leaveDissolvePointIndex; // 0x78
		::UnityEngine::Transform* leaveDissolvePlanet; // 0x80
		::System::Boolean enableWaterSurface; // 0x88
		::System::Single waterSurfaceHeight; // 0x8C
		::System::Boolean enableTurnSpeedControl; // 0x90
		::System::Single turnSpeedLookAheadNear; // 0x94
		::System::Single turnSpeedLookAheadFar; // 0x98
		::UnityEngine::AnimationCurve* turnSpeedCurve; // 0xA0
		::System::Single bodyLookAheadDistance; // 0xA8
		::UnityEngine::Vector2 sailboatWindDirection; // 0xAC
		::System::Single _LeaveDissolvePoint_k__BackingField; // 0xB4
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _bakedRacingLinePoints; // 0xB8
		::System::Single _bakedRacingLinePointSpacing; // 0xC0
		::BansheeGz::BGSpline::Components::BGCcMath* BOACCCCFJEE; // 0xC8
		::System::Boolean ACAKGFGOKJK; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::AirlineWay_Class_1_5F7BD4F39335B2FB*>* DHIJHMHAHCI; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY__CTOR_OFFSET))(this);
		}

		::System::Single get_LeaveDissolvePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_LEAVEDISSOLVEPOINT_OFFSET))(this);
		}

		::System::Void set_LeaveDissolvePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_SET_LEAVEDISSOLVEPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTurnSpeedControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASTURNSPEEDCONTROL_OFFSET))(this);
		}

		::System::Boolean get_HasBodyLookAheadSteering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASBODYLOOKAHEADSTEERING_OFFSET))(this);
		}

		::System::Single get_BodyLookAheadDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_BODYLOOKAHEADDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_HasCustomSailboatWindDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASCUSTOMSAILBOATWINDDIRECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_SailboatWindDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_SAILBOATWINDDIRECTION_OFFSET))(this);
		}

		::RPG::Client::RacingDriveConfig* get_RacingDriveSettings()
		{
			return ((::RPG::Client::RacingDriveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGDRIVESETTINGS_OFFSET))(this);
		}

		::System::Boolean get_HasRacingBoostRings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTRINGS_OFFSET))(this);
		}

		::System::Int32 get_RacingBoostMoveTriggerHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTMOVETRIGGERHASH_OFFSET))(this);
		}

		::System::Boolean get_HasRacingBoostSpeedConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTSPEEDCONFIG_OFFSET))(this);
		}

		::System::Single get_RacingBoostSpeedDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTSPEEDDURATION_OFFSET))(this);
		}

		::System::Single get_RacingBoostTriggerDistanceOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTTRIGGERDISTANCEOFFSET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_START_OFFSET))(this);
		}

		::Struct_2_984AA94FB23486F9 GetRacingTrackAnchor(::System::Single a1)
		{
			return ((::Struct_2_984AA94FB23486F9(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKANCHOR_OFFSET))(this, a1);
		}

		::System::Void GetRacingTrackPosition(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRacingModeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_ISRACINGMODEENABLED_OFFSET))(this);
		}

		::System::Void InitRacingBoostRings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_INITRACINGBOOSTRINGS_OFFSET))(this);
		}

		::System::Void ReleaseRacingBoostRings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_RELEASERACINGBOOSTRINGS_OFFSET))(this);
		}

		::System::Int32 GetNextRacingBoostRingIndex(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETNEXTRACINGBOOSTRINGINDEX_OFFSET))(this, a1);
		}

		::System::Boolean TryGetRacingBoostRingDistance(::System::Int32 a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_TRYGETRACINGBOOSTRINGDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerRacingBoostRing(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_TRIGGERRACINGBOOSTRING_OFFSET))(this, a1);
		}

		::System::Single EvaluateRacingBoostSpeedMultiplier(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTSPEEDMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single EvaluateRacingBoostTriggerDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTTRIGGERDISTANCE_OFFSET))(this, a1);
		}

		::System::Single ClampRacingOffset(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_CLAMPRACINGOFFSET_OFFSET))(this, a1);
		}

		::System::Single GetRacingTurnStrength(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETRACINGTURNSTRENGTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetOptimalRacingLineOffset(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETOPTIMALRACINGLINEOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_6_68EC003199A8D3E9(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_68EC003199A8D3E9_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HasBakedRacingLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASBAKEDRACINGLINE_OFFSET))(this);
		}

		::System::Boolean TryGetBakedRacingLinePose(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_TRYGETBAKEDRACINGLINEPOSE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetBakedRacingLineLateralOffset(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETBAKEDRACINGLINELATERALOFFSET_OFFSET))(this, a1);
		}

		::System::Single Method_6_1EDDD623459E1A71()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_1EDDD623459E1A71_OFFSET))(this);
		}

		::System::Int32 Method_6_7728625555DDF702(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_7728625555DDF702_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_30D4DB5416FA0B9D(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_30D4DB5416FA0B9D_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_ABA4391DF13D43EA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_ABA4391DF13D43EA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		static ::System::Int32 Method_6_BF0BDBC966C0A3D7(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_BF0BDBC966C0A3D7_OFFSET))(a1);
		}

		::System::Void Method_6_2B3F866319C4A343(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_METHOD_6_2B3F866319C4A343_OFFSET))(this, a1);
		}
	};
}
