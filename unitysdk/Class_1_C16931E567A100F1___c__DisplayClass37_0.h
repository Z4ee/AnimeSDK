#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_38C460910E5AC181;
class Class_1_72E419617CCAA151;
class Class_1_855E018881074DD2;
class Class_1_C16931E567A100F1;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BEECF0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0___CALCDICESCOREBYAILEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x17BF0100)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass37_0_TypeDefinitionIndex = 34203;

class Class_1_C16931E567A100F1___c__DisplayClass37_0 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt64>* __9__1; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64>>* CalcedDiceIndexScoreList; // 0x18
	::Class_1_C16931E567A100F1* __4__this; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* selectedDiceContentIDList; // 0x28
	::Class_1_72E419617CCAA151* scoreCalcContext; // 0x30
	::Class_1_855E018881074DD2* context; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void __calcDiceScoreByAILevel_b__1(::System::UInt64 mask)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0___CALCDICESCOREBYAILEVEL_B__1_OFFSET))(this, mask);
	}
};
