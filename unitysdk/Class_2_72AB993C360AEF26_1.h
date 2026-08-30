#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA89D5B25CEB7681.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"

class Class_0_16E4307DCC419505_1263;
class Class_2_230F5EDDB35DAEBA;

#define CLASS_2_72AB993C360AEF26_1_METHOD_2_32EFE231A68C47D7_OFFSET UNITYSDK_OFFSET(0x1A7E4510)
#define CLASS_2_72AB993C360AEF26_1_METHOD_2_EFC1254FC740F9DA_OFFSET UNITYSDK_OFFSET(0x1A7E44A0)
#define CLASS_2_72AB993C360AEF26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E4570)

inline static constexpr unsigned int Class_2_72AB993C360AEF26_1_TypeDefinitionIndex = 75410;

class Class_2_72AB993C360AEF26_1 : public ::Class_1_AA89D5B25CEB7681
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72AB993C360AEF26_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_EFC1254FC740F9DA(::Class_2_230F5EDDB35DAEBA* a1, ::Class_0_16E4307DCC419505_1263* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_72AB993C360AEF26_1_METHOD_2_EFC1254FC740F9DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_32EFE231A68C47D7(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::Class_0_16E4307DCC419505_1263* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_72AB993C360AEF26_1_METHOD_2_32EFE231A68C47D7_OFFSET))(this, a1, a2, a3);
	}
};
