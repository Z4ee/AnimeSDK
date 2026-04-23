#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E9EED74A778662A_2;
class Class_1_BB4B99DE4C2501EC_5;

#define CLASS_4_E8F4610EF0D87EE0_8_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x98F6990)
#define CLASS_4_E8F4610EF0D87EE0_8_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x98F69A0)
#define CLASS_4_E8F4610EF0D87EE0_8_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x98F6980)
#define CLASS_4_E8F4610EF0D87EE0_8__CTOR_OFFSET UNITYSDK_OFFSET(0x98F6A50)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_8_TypeDefinitionIndex = 71569;

class Class_4_E8F4610EF0D87EE0_8 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_BB4B99DE4C2501EC_5*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_8__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_8_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_5* Method_4_24748FC20F375725()
	{
		return ((::Class_1_BB4B99DE4C2501EC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_8_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_8* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_8*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_8_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
