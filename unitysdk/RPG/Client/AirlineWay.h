#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/AirlineWay_ETailMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AirlineStationInfo; }
namespace RPG::Client { class AirlineVariableScalePoint; }
namespace RPG::Client { class AirlineVariableSpeedRange; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRLINEWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CE9C80)
#define RPG_CLIENT_AIRLINEWAY_GET_LEAVEDISSOLVEPOINT_OFFSET UNITYSDK_OFFSET(0x9CE9C60)
#define RPG_CLIENT_AIRLINEWAY_SET_LEAVEDISSOLVEPOINT_OFFSET UNITYSDK_OFFSET(0x9CE9C70)
#define RPG_CLIENT_AIRLINEWAY_START_OFFSET UNITYSDK_OFFSET(0x9CEA6E0)
#define RPG_CLIENT_AIRLINEWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x9CEAAA0)
#define RPG_CLIENT_AIRLINEWAY___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CEAB50)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay_TypeDefinitionIndex = 55143;

	class AirlineWay : public ::RPG::Client::Airline
	{
	public:
		::RPG::Client::AirlineWay_ETailMode tailMode; // 0x30
		::System::Single width; // 0x34
		::System::Boolean fullSpeed; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableSpeedRange*>* variableSpeedRanges; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableScalePoint*>* variableScalePoints; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::AirlineStationInfo*>* stations; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* subwayHiddenSegments; // 0x58
		::System::Int32 leaveDissolvePointIndex; // 0x60
		::UnityEngine::Transform* leaveDissolvePlanet; // 0x68
		::System::Boolean enableWaterSurface; // 0x70
		::System::Single waterSurfaceHeight; // 0x74
		::System::Single _LeaveDissolvePoint_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY__CTOR_OFFSET))(this);
		}

		::System::Single get_LeaveDissolvePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_LEAVEDISSOLVEPOINT_OFFSET))(this);
		}

		::System::Void set_LeaveDissolvePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_SET_LEAVEDISSOLVEPOINT_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}
