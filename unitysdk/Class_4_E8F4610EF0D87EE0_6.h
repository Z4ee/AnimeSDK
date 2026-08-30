#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_3F5064ADB89DA8D3_2;
class Class_1_59A46B8D38C0DB81;
class Class_1_D40936EF3BF54118_32;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x1AA649A0)
#define CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x1AA64940)
#define CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0x1AA64950)
#define CLASS_4_E8F4610EF0D87EE0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA64A50)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_6_TypeDefinitionIndex = 77594;

class Class_4_E8F4610EF0D87EE0_6 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_D40936EF3BF54118_32*>
{
public:
	::System::Void _ctor(::Class_1_3F5064ADB89DA8D3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F5064ADB89DA8D3_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_59A46B8D38C0DB81*>* Method_4_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_59A46B8D38C0DB81*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_F5D02CB63424FC5A_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_6* Method_4_416B12CFEB291691(::Class_1_3F5064ADB89DA8D3_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_6*(*)(::Class_1_3F5064ADB89DA8D3_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
