#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_38C460910E5AC181;
class Class_1_72E419617CCAA151;
class Class_1_855E018881074DD2;
class Class_1_C16931E567A100F1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166AD560)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_0___CALCDICESCOREBYAILEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x166AE560)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass23_0_TypeDefinitionIndex = 28518;

class Class_1_C16931E567A100F1___c__DisplayClass23_0 : public ::System::Object
{
public:
	::Class_1_C16931E567A100F1* __4__this; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* selectedDiceContentIDList; // 0x18
	::Class_1_855E018881074DD2* context; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64>>* CalcedDiceIndexScoreList; // 0x28
	::Class_1_72E419617CCAA151* scoreCalcContext; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void __calcDiceScoreByAILevel_b__0(::System::UInt64 mask)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_0___CALCDICESCOREBYAILEVEL_B__0_OFFSET))(this, mask);
	}
};
