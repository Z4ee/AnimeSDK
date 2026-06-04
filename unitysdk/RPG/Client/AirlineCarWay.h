#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"

namespace RPG::Client { class AirlineVariableSpeedRange; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AIRLINECARWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB2D6420)
#define RPG_CLIENT_AIRLINECARWAY__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D6750)
#define RPG_CLIENT_AIRLINECARWAY___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB2D67B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineCarWay_TypeDefinitionIndex = 55907;

	class AirlineCarWay : public ::RPG::Client::Airline
	{
	public:
		::System::Single width; // 0x30
		::System::Int32 wayCount; // 0x34
		::System::Boolean fullSpeed; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableSpeedRange*>* variableSpeedRanges; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINECARWAY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINECARWAY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINECARWAY___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}
