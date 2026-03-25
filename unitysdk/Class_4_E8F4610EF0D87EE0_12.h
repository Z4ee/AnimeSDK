#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E9EED74A778662A_2;
class Class_1_735612C94F558EAE_27;
class Class_1_E7C4009BCC22497A_23;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_4_E8F4610EF0D87EE0_12_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0xA9ABE90)
#define CLASS_4_E8F4610EF0D87EE0_12_METHOD_4_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0xA9ABE40)
#define CLASS_4_E8F4610EF0D87EE0_12_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0xA9ABE30)
#define CLASS_4_E8F4610EF0D87EE0_12__CTOR_OFFSET UNITYSDK_OFFSET(0xA9ABF40)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_12_TypeDefinitionIndex = 63534;

class Class_4_E8F4610EF0D87EE0_12 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_E7C4009BCC22497A_23*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_12__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_12_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_735612C94F558EAE_27*>* Method_4_4E0CCFC7E8FEF732()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_735612C94F558EAE_27*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_12_METHOD_4_4E0CCFC7E8FEF732_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_12* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_12*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_12_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
