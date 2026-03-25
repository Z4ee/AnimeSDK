#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_1_E2D539C29BA420F0_METHOD_1_46B85A733BFF8B2C_OFFSET UNITYSDK_OFFSET(0x104CB6C0)
#define CLASS_1_E2D539C29BA420F0__CTOR_OFFSET UNITYSDK_OFFSET(0x104CB6B0)

inline static constexpr unsigned int Class_1_E2D539C29BA420F0_TypeDefinitionIndex = 63555;

class Class_1_E2D539C29BA420F0 : public ::System::Object
{
public:
	::RPG::Client::CakeRace::CakeRacePerformanceDataItem* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_E2D539C29BA420F0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_46B85A733BFF8B2C(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_E2D539C29BA420F0_METHOD_1_46B85A733BFF8B2C_OFFSET))(this, a1, a2);
	}
};
