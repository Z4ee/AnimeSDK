#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_3F5064ADB89DA8D3_2;
class Class_1_49213828B4BC8F63;
class Class_1_D40936EF3BF54118_27;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16DBD0C0)
#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x16DBD130)
#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x16DBD0D0)
#define CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0x16DBD0E0)
#define CLASS_4_E8F4610EF0D87EE0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBD1E0)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_10_TypeDefinitionIndex = 74118;

class Class_4_E8F4610EF0D87EE0_10 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_D40936EF3BF54118_27*>
{
public:
	::System::Void _ctor(::Class_1_3F5064ADB89DA8D3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F5064ADB89DA8D3_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_27* Method_4_24748FC20F375725()
	{
		return ((::Class_1_D40936EF3BF54118_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_49213828B4BC8F63*>* Method_4_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_49213828B4BC8F63*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_F5D02CB63424FC5A_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_10* Method_4_416B12CFEB291691(::Class_1_3F5064ADB89DA8D3_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_10*(*)(::Class_1_3F5064ADB89DA8D3_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_10_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
