#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_26;
class Class_1_B1B8D38711757224;
class Class_1_B553C21756B27967;
class Class_2_3616FDE8A71D0590;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_93A84A61514CD568_METHOD_1_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x1C0CB3C0)
#define CLASS_1_93A84A61514CD568_METHOD_1_7F12DF60A4481479_OFFSET UNITYSDK_OFFSET(0x1C0CA5A0)
#define CLASS_1_93A84A61514CD568_METHOD_1_87D34C3119309BDC_OFFSET UNITYSDK_OFFSET(0x1C0F71F0)
#define CLASS_1_93A84A61514CD568__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F7120)

inline static constexpr unsigned int Class_1_93A84A61514CD568_TypeDefinitionIndex = 35805;

class Class_1_93A84A61514CD568 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AEE59ED8DADEC1A1*>* JCDFGOGAPCC; // 0x10
	::Class_0_16E4307DCC419505_26* FLMODBLFAGD; // 0x18
	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* HAEOILBDBLB; // 0x20
	::Class_2_3616FDE8A71D0590* EEFMDEHLLFI; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_26* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_AEE59ED8DADEC1A1* Method_1_7F12DF60A4481479(::System::UInt32 a1)
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568_METHOD_1_7F12DF60A4481479_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* Method_1_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568_METHOD_1_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::Class_1_B1B8D38711757224* Method_1_87D34C3119309BDC(::Class_1_B553C21756B27967* a1)
	{
		return ((::Class_1_B1B8D38711757224*(*)(::PVOID, ::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568_METHOD_1_87D34C3119309BDC_OFFSET))(this, a1);
	}
};
