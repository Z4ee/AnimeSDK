#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C16931E567A100F1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19774DD0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS8_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET UNITYSDK_OFFSET(0x1977E330)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass8_0_TypeDefinitionIndex = 35731;

class Class_1_C16931E567A100F1___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_C16931E567A100F1* __4__this; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* diceResults; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __AICheckNeedUseLimitedDice_b__0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS8_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET))(this, a1, a2);
	}
};
