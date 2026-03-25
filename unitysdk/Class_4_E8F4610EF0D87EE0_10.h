#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E9EED74A778662A_2;
class Class_1_B5ED7EF1795E0962;
class Class_1_E7C4009BCC22497A_22;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1064AD20)
#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x1064AD90)
#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x1064AD30)
#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0x1064AD40)
#define CLASS_4_E8F4610EF0D87EE0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1064AE40)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_10_TypeDefinitionIndex = 63531;

class Class_4_E8F4610EF0D87EE0_10 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_E7C4009BCC22497A_22*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10__CTOR_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A_22* Method_4_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_B5ED7EF1795E0962*>* Method_4_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_B5ED7EF1795E0962*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_F5D02CB63424FC5A_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_10* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_10*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
