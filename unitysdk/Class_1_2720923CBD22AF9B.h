#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_769;
namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_2720923CBD22AF9B_METHOD_1_416CDACF55C7222E_OFFSET UNITYSDK_OFFSET(0x13A68B00)

inline static constexpr unsigned int Class_1_2720923CBD22AF9B_TypeDefinitionIndex = 60155;

class Class_1_2720923CBD22AF9B : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_769* Method_1_416CDACF55C7222E(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_0_16E4307DCC419505_769*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_2720923CBD22AF9B_METHOD_1_416CDACF55C7222E_OFFSET))(a1);
	}
};
