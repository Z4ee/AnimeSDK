#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E9EED74A778662A_2;
class Class_1_B1FF62FAE312BC49_6;

#define CLASS_4_E8F4610EF0D87EE0_2_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10694260)
#define CLASS_4_E8F4610EF0D87EE0_2_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x10694270)
#define CLASS_4_E8F4610EF0D87EE0_2_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x10694250)
#define CLASS_4_E8F4610EF0D87EE0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10694320)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_2_TypeDefinitionIndex = 63506;

class Class_4_E8F4610EF0D87EE0_2 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_B1FF62FAE312BC49_6*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_2_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::Class_1_B1FF62FAE312BC49_6* Method_4_24748FC20F375725()
	{
		return ((::Class_1_B1FF62FAE312BC49_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_2_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_2* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_2*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_2_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
