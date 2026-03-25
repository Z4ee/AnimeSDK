#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS16_0__AICONFIRMDICE_B__0_OFFSET UNITYSDK_OFFSET(0x166AE420)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166ABC30)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass16_0_TypeDefinitionIndex = 28515;

class Class_1_C16931E567A100F1___c__DisplayClass16_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* diceIndexs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _AIConfirmDice_b__0(::System::Int32 i)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS16_0__AICONFIRMDICE_B__0_OFFSET))(this, i);
	}
};
