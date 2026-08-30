#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA89D5B25CEB7681.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"

class Class_0_16E4307DCC419505_1263;
class Class_2_230F5EDDB35DAEBA;
namespace System { class String; }

#define CLASS_2_FE9E055CA6C12502_METHOD_2_146C35BD25CF553F_OFFSET UNITYSDK_OFFSET(0x161CD400)
#define CLASS_2_FE9E055CA6C12502_METHOD_2_7B66CEF3509E8533_OFFSET UNITYSDK_OFFSET(0x161CDA20)
#define CLASS_2_FE9E055CA6C12502__CTOR_OFFSET UNITYSDK_OFFSET(0x161CDDB0)

inline static constexpr unsigned int Class_2_FE9E055CA6C12502_TypeDefinitionIndex = 75413;

class Class_2_FE9E055CA6C12502 : public ::Class_1_AA89D5B25CEB7681
{
public:
	// static const ::System::String* CMGDKCGEEKM; // 0x0
	// static const ::System::String* BEELEALPGBG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE9E055CA6C12502__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_146C35BD25CF553F(::Class_2_230F5EDDB35DAEBA* a1, ::Class_0_16E4307DCC419505_1263* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_FE9E055CA6C12502_METHOD_2_146C35BD25CF553F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B66CEF3509E8533(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::Class_0_16E4307DCC419505_1263* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::Class_0_16E4307DCC419505_1263*))((::PBYTE)hIl2Cpp + CLASS_2_FE9E055CA6C12502_METHOD_2_7B66CEF3509E8533_OFFSET))(this, a1, a2, a3);
	}
};
