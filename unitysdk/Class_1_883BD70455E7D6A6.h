#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_790;
class Class_1_582AF6875845819E;

#define CLASS_1_883BD70455E7D6A6_METHOD_1_ECC433026216D52C_OFFSET UNITYSDK_OFFSET(0xE4ECC30)

inline static constexpr unsigned int Class_1_883BD70455E7D6A6_TypeDefinitionIndex = 61122;

class Class_1_883BD70455E7D6A6 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_790* Method_1_ECC433026216D52C(::RPG::Client::FateGameStateType a1, ::Class_1_582AF6875845819E* a2)
	{
		return ((::Class_0_16E4307DCC419505_790*(*)(::RPG::Client::FateGameStateType, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_1_883BD70455E7D6A6_METHOD_1_ECC433026216D52C_OFFSET))(a1, a2);
	}
};
