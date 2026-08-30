#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS17_0__AICONFIRMDICE_B__0_OFFSET UNITYSDK_OFFSET(0x1C109C80)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C105440)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass17_0_TypeDefinitionIndex = 35723;

class Class_1_C16931E567A100F1___c__DisplayClass17_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* diceIndexs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _AIConfirmDice_b__0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS17_0__AICONFIRMDICE_B__0_OFFSET))(this, a1);
	}
};
