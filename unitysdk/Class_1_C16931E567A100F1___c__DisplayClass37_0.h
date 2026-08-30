#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_70B630442ADDBF4A;
class Class_1_72E419617CCAA151;
class Class_1_855E018881074DD2;
class Class_1_C16931E567A100F1;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1977C4B0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0___CALCDICESCOREBYAILEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x1977E060)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass37_0_TypeDefinitionIndex = 35728;

class Class_1_C16931E567A100F1___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_1_855E018881074DD2* context; // 0x10
	::System::Action_1<::System::UInt64>* __9__1; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64>>* CalcedDiceIndexScoreList; // 0x20
	::Class_1_C16931E567A100F1* __4__this; // 0x28
	::Class_1_72E419617CCAA151* scoreCalcContext; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* selectedDiceContentIDList; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void __calcDiceScoreByAILevel_b__1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_0___CALCDICESCOREBYAILEVEL_B__1_OFFSET))(this, a1);
	}
};
