#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_40CD5CE8474BAA94;
class Class_2_AEE59ED8DADEC1A1;
class Class_3_C71DDDA66421C541;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_463149620C8AFC31_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF43B510)
#define CLASS_2_463149620C8AFC31_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xF43B3B0)
#define CLASS_2_463149620C8AFC31__CTOR_OFFSET UNITYSDK_OFFSET(0xF43B360)

inline static constexpr unsigned int Class_2_463149620C8AFC31_TypeDefinitionIndex = 60462;

class Class_2_463149620C8AFC31 : public ::Class_1_2231FD56C070349F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BHFACEBLGKN; // 0x18
	::Class_2_AEE59ED8DADEC1A1* KAKEIDJDNHJ; // 0x20
	::Class_1_40CD5CE8474BAA94* HHBFPBLDOHM; // 0x28
	::System::UInt32 MPIMEEAIELI; // 0x30

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
