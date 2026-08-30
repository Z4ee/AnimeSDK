#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/AirlineBirdWay_CurveRange.h"

namespace RPG::Client { class AirlineVariableSpeedRange; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AIRLINEBIRDWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC71F130)
#define RPG_CLIENT_AIRLINEBIRDWAY__CTOR_OFFSET UNITYSDK_OFFSET(0xC71F990)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineBirdWay_TypeDefinitionIndex = 59934;

	class AirlineBirdWay : public ::RPG::Client::Airline
	{
	public:
		::System::Single width; // 0x30
		::System::Boolean fullSpeed; // 0x34
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableSpeedRange*>* variableSpeedRanges; // 0x38
		::RPG::Client::AirlineBirdWay_CurveRange flyUpRange; // 0x40
		::RPG::Client::AirlineBirdWay_CurveRange flyStopRange; // 0x60
		::RPG::Client::AirlineBirdWay_CurveRange dissolveRange; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEBIRDWAY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEBIRDWAY_AWAKE_OFFSET))(this);
		}
	};
}
