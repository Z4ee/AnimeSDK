#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2D539C29BA420F0.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_762F50CCEF2F6FF0_METHOD_2_28B95F30DDB6A3D3_OFFSET UNITYSDK_OFFSET(0x1135D720)
#define CLASS_2_762F50CCEF2F6FF0_METHOD_2_B3662616D7A74400_OFFSET UNITYSDK_OFFSET(0x1135D7A0)
#define CLASS_2_762F50CCEF2F6FF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1135D790)

inline static constexpr unsigned int Class_2_762F50CCEF2F6FF0_TypeDefinitionIndex = 63557;

class Class_2_762F50CCEF2F6FF0 : public ::Class_1_E2D539C29BA420F0
{
public:
	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_762F50CCEF2F6FF0__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_762F50CCEF2F6FF0* Method_2_28B95F30DDB6A3D3(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_762F50CCEF2F6FF0*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_762F50CCEF2F6FF0_METHOD_2_28B95F30DDB6A3D3_OFFSET))(a1);
	}

	::System::Void Method_2_B3662616D7A74400(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_762F50CCEF2F6FF0_METHOD_2_B3662616D7A74400_OFFSET))(this, a1, a2);
	}
};
