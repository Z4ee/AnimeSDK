#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C16931E567A100F1;
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C108690)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1C109FB0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1C10A010)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__2_OFFSET UNITYSDK_OFFSET(0x1C10A0A0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__3_OFFSET UNITYSDK_OFFSET(0x1C10A130)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__4_OFFSET UNITYSDK_OFFSET(0x1C10A180)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass35_0_TypeDefinitionIndex = 35726;

class Class_1_C16931E567A100F1___c__DisplayClass35_0 : public ::System::Object
{
public:
	::System::Collections::BitArray* maxRerollBits; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* diceIndexs; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* diceResults; // 0x20
	::Class_1_C16931E567A100F1* __4__this; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __calcAIRerollInfo_b__0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__0_OFFSET))(this, a1, a2);
	}

	::System::Boolean __calcAIRerollInfo_b__1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__1_OFFSET))(this, a1);
	}

	::System::Boolean __calcAIRerollInfo_b__2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__2_OFFSET))(this, a1);
	}

	::System::Int32 __calcAIRerollInfo_b__3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__3_OFFSET))(this, a1);
	}

	::System::Int32 __calcAIRerollInfo_b__4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS35_0___CALCAIREROLLINFO_B__4_OFFSET))(this, a1);
	}
};
