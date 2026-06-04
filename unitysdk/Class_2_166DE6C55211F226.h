#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD211ABC1DF6278D.h"

class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_166DE6C55211F226_METHOD_2_28B95F30DDB6A3D3_OFFSET UNITYSDK_OFFSET(0xA7C6920)
#define CLASS_2_166DE6C55211F226_METHOD_2_C8F5708733529C68_OFFSET UNITYSDK_OFFSET(0xA7C69A0)
#define CLASS_2_166DE6C55211F226__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C6990)

inline static constexpr unsigned int Class_2_166DE6C55211F226_TypeDefinitionIndex = 72624;

class Class_2_166DE6C55211F226 : public ::Class_1_FD211ABC1DF6278D
{
public:
	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_166DE6C55211F226__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_166DE6C55211F226* Method_2_28B95F30DDB6A3D3(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_166DE6C55211F226*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_166DE6C55211F226_METHOD_2_28B95F30DDB6A3D3_OFFSET))(a1);
	}

	::System::Void Method_2_C8F5708733529C68(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_166DE6C55211F226_METHOD_2_C8F5708733529C68_OFFSET))(this, a1, a2);
	}
};
