#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA89D5B25CEB7681.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"

class Class_0_16E4307DCC419505_1263;
class Class_2_230F5EDDB35DAEBA;

#define CLASS_2_3EF1BFF67865C800_METHOD_2_5C3D286038DCE245_OFFSET UNITYSDK_OFFSET(0xB855D60)
#define CLASS_2_3EF1BFF67865C800_METHOD_2_6C81ED7A3978CE0D_OFFSET UNITYSDK_OFFSET(0xB855B80)
#define CLASS_2_3EF1BFF67865C800__CTOR_OFFSET UNITYSDK_OFFSET(0xB8561D0)

inline static constexpr unsigned int Class_2_3EF1BFF67865C800_TypeDefinitionIndex = 75423;

class Class_2_3EF1BFF67865C800 : public ::Class_1_AA89D5B25CEB7681
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EF1BFF67865C800__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_6C81ED7A3978CE0D(::Class_2_230F5EDDB35DAEBA* a1, ::Class_0_16E4307DCC419505_1263* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_3EF1BFF67865C800_METHOD_2_6C81ED7A3978CE0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C3D286038DCE245(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::Class_0_16E4307DCC419505_1263* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_3EF1BFF67865C800_METHOD_2_5C3D286038DCE245_OFFSET))(this, a1, a2, a3);
	}
};
