#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C16931E567A100F1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166A7A10)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET UNITYSDK_OFFSET(0x166AE780)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass7_0_TypeDefinitionIndex = 28521;

class Class_1_C16931E567A100F1___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_C16931E567A100F1* __4__this; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* diceResults; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __AICheckNeedUseLimitedDice_b__0(::System::Int32 diceID, ::System::Int32 index)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET))(this, diceID, index);
	}
};
