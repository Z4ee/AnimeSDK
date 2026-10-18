#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ABDF1855FCDB08F;
class Class_1_3CFD07DFD0180CDE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15836120)
#define CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS33_0___ONONLYORDERINGCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x15836170)

inline static constexpr unsigned int Class_1_0FB19829F200C71B___c__DisplayClass33_0_TypeDefinitionIndex = 79478;

class Class_1_0FB19829F200C71B___c__DisplayClass33_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_1ABDF1855FCDB08F*, ::System::Int32>* indexOfPiece; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __OnOnlyOrderingChanged_b__0(::Class_1_3CFD07DFD0180CDE* a1, ::Class_1_3CFD07DFD0180CDE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_0FB19829F200C71B___C__DISPLAYCLASS33_0___ONONLYORDERINGCHANGED_B__0_OFFSET))(this, a1, a2);
	}
};
