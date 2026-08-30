#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA89D5B25CEB7681.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"

class Class_0_16E4307DCC419505_1263;
class Class_2_230F5EDDB35DAEBA;

#define CLASS_2_94E388FB15C6EFAA_METHOD_2_086E7711B36624E3_OFFSET UNITYSDK_OFFSET(0x179491B0)
#define CLASS_2_94E388FB15C6EFAA_METHOD_2_4E76583335118C07_OFFSET UNITYSDK_OFFSET(0x179492F0)
#define CLASS_2_94E388FB15C6EFAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17949480)

inline static constexpr unsigned int Class_2_94E388FB15C6EFAA_TypeDefinitionIndex = 75404;

class Class_2_94E388FB15C6EFAA : public ::Class_1_AA89D5B25CEB7681
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94E388FB15C6EFAA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_086E7711B36624E3(::Class_2_230F5EDDB35DAEBA* a1, ::Class_0_16E4307DCC419505_1263* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_94E388FB15C6EFAA_METHOD_2_086E7711B36624E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E76583335118C07(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::Class_0_16E4307DCC419505_1263* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_94E388FB15C6EFAA_METHOD_2_4E76583335118C07_OFFSET))(this, a1, a2, a3);
	}
};
