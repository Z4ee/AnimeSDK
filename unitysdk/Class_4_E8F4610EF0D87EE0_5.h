#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E9EED74A778662A_2;
class Class_1_C4B679728AD83B32_4;
class Class_1_D40936EF3BF54118_29;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_4_E8F4610EF0D87EE0_5_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0xAFF86C0)
#define CLASS_4_E8F4610EF0D87EE0_5_METHOD_4_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0xAFF8670)
#define CLASS_4_E8F4610EF0D87EE0_5_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0xAFF8660)
#define CLASS_4_E8F4610EF0D87EE0_5__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF8770)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_5_TypeDefinitionIndex = 71562;

class Class_4_E8F4610EF0D87EE0_5 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_D40936EF3BF54118_29*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_5__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_5_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4B679728AD83B32_4*>* Method_4_4E0CCFC7E8FEF732()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4B679728AD83B32_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_5_METHOD_4_4E0CCFC7E8FEF732_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_5* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_5*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_5_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
