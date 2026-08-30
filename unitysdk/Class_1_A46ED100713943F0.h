#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/SimulateInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A46ED100713943F0_CLEAR_OFFSET UNITYSDK_OFFSET(0x181E8D20)
#define CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_1_OFFSET UNITYSDK_OFFSET(0x181E8E80)
#define CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_OFFSET UNITYSDK_OFFSET(0x181E8DC0)
#define CLASS_1_A46ED100713943F0__CTOR_OFFSET UNITYSDK_OFFSET(0x181E8F40)

inline static constexpr unsigned int Class_1_A46ED100713943F0_TypeDefinitionIndex = 41418;

class Class_1_A46ED100713943F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* AFJMECMIMOO; // 0x10
	::Class_1_9ADD1D872350330F* CFCGOPHFJPF; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* PCHLMCCDMKG; // 0x20
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> JEPOIFJFOFA; // 0x28
	::System::UInt32 HHCPCIBKMFJ; // 0x30
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> OCCIGEAJGHK; // 0x34
	::System::UInt32 COFAKDPCNEB; // 0x3C
	::RPG::Client::LittleGame::Match3::SimulateInputType PLEMHLIAKPF; // 0x40
	::System::UInt32 FENJGDJFGFL; // 0x44
	::System::UInt32 PMOHKEDFGHP; // 0x48
	::System::Boolean MNMBAANKOGG; // 0x4C
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> HIKJECOPFMI; // 0x50
	::System::UInt32 CDGDPFNDPLK; // 0x58
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> FOKJOEKBEML; // 0x5C
	::System::UInt32 GLANPLEGMPG; // 0x64
	::System::UInt32 EFNNOMMFCOJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_52675038485BC592(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_OFFSET))(this, a1);
	}

	::System::Void Method_1_52675038485BC592_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A46ED100713943F0_METHOD_1_52675038485BC592_1_OFFSET))(this, a1);
	}
};
