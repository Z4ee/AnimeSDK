#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_3;
class Class_1_7807B2B04302CD7B_4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C98B12E65C7C4800_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13ED7DC0)
#define CLASS_1_C98B12E65C7C4800__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBB110)

inline static constexpr unsigned int Class_1_C98B12E65C7C4800_TypeDefinitionIndex = 34654;

class Class_1_C98B12E65C7C4800 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::Class_1_7807B2B04302CD7B_3* Field_1_2; // 0x20
	::Class_1_7807B2B04302CD7B_4* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34
	::System::UInt32 Field_1_6; // 0x38
	::System::UInt32 Field_1_7; // 0x3C
	::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState Field_1_8; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C98B12E65C7C4800__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_C98B12E65C7C4800* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C98B12E65C7C4800*))((::PBYTE)hIl2Cpp + CLASS_1_C98B12E65C7C4800_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
