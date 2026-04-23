#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E9EED74A778662A_2;
class Class_1_45BB92167AED63A0_32;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x930CD50)
#define CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x930CE00)
#define CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x930CDB0)
#define CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_B7665EA621A70A4C_OFFSET UNITYSDK_OFFSET(0x930CD60)
#define CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x930CD40)
#define CLASS_4_E8F4610EF0D87EE0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x930CEB0)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_7_TypeDefinitionIndex = 71567;

class Class_4_E8F4610EF0D87EE0_7 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_45BB92167AED63A0_32*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_7__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_32* Method_4_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::System::UInt32>* Method_4_B7665EA621A70A4C()
	{
		return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_B7665EA621A70A4C_OFFSET))(this);
	}

	::System::UInt32 Method_4_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_AA2D3E889C8A52CA_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_7* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_7*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_7_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
