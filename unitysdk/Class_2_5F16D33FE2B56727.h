#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

#define CLASS_2_5F16D33FE2B56727_CLEAR_OFFSET UNITYSDK_OFFSET(0x19FB65E0)
#define CLASS_2_5F16D33FE2B56727_GET_CLIENTNETMODE_OFFSET UNITYSDK_OFFSET(0x19FB6660)
#define CLASS_2_5F16D33FE2B56727_SET_CLIENTNETMODE_OFFSET UNITYSDK_OFFSET(0x19FB6670)
#define CLASS_2_5F16D33FE2B56727__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB6680)

inline static constexpr unsigned int Class_2_5F16D33FE2B56727_TypeDefinitionIndex = 60667;

class Class_2_5F16D33FE2B56727 : public ::Class_1_4CD8A1ACD565F336
{
public:
	::RPG::Client::LittleGameShare::LittleGameClientNetMode _ClientNetMode_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F16D33FE2B56727__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F16D33FE2B56727_CLEAR_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameClientNetMode get_ClientNetMode()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F16D33FE2B56727_GET_CLIENTNETMODE_OFFSET))(this);
	}

	::System::Void set_ClientNetMode(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + CLASS_2_5F16D33FE2B56727_SET_CLIENTNETMODE_OFFSET))(this, a1);
	}
};
