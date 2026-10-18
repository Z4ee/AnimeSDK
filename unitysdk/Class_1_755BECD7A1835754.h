#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;
class Class_1_43BD383C98B4C0C5_20;
class Class_1_5E2D533DC7C7E714;
class Class_1_CDF5B114F6C8E3BB;
class Class_1_FD893FD36F6A3A6D_2;
class Class_2_1F213CFFCE98A271;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_755BECD7A1835754_ADD_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C54E0E0)
#define CLASS_1_755BECD7A1835754_ADD_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C54E020)
#define CLASS_1_755BECD7A1835754_METHOD_1_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x1C54E220)
#define CLASS_1_755BECD7A1835754_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x1C54DFE0)
#define CLASS_1_755BECD7A1835754_METHOD_1_85C53A16326B4DEE_OFFSET UNITYSDK_OFFSET(0x1C54E990)
#define CLASS_1_755BECD7A1835754_METHOD_1_96C4AEF655BFC1C8_OFFSET UNITYSDK_OFFSET(0x1C54DFA0)
#define CLASS_1_755BECD7A1835754_METHOD_1_D03EA7AAEEC638FD_OFFSET UNITYSDK_OFFSET(0x1C54EAB0)
#define CLASS_1_755BECD7A1835754_REMOVE_ONATTRIBUTESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C54E140)
#define CLASS_1_755BECD7A1835754_REMOVE_ONATTRIBUTESCHANGING_OFFSET UNITYSDK_OFFSET(0x1C54E080)
#define CLASS_1_755BECD7A1835754__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54E1A0)

inline static constexpr unsigned int Class_1_755BECD7A1835754_TypeDefinitionIndex = 41751;

class Class_1_755BECD7A1835754 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::Class_1_FD893FD36F6A3A6D_2*, ::Class_1_43BD383C98B4C0C5_20*>* EECLEEFOBKB; // 0x10
	::System::Action* OnAttributesChanging; // 0x18
	::System::Collections::Generic::List_1<::Class_2_1F213CFFCE98A271*>* JENDNKLGPFF; // 0x20
	::System::Action* OnAttributesChanged; // 0x28
	::Class_1_CDF5B114F6C8E3BB* HBDGDCJFLBN; // 0x30
	::Class_1_5E2D533DC7C7E714* IOABMCKDNNC; // 0x38

	::System::Void _ctor(::Class_1_5E2D533DC7C7E714* a1, ::System::Collections::Generic::List_1<::Class_2_1F213CFFCE98A271*>* a2, ::System::Collections::Generic::Dictionary_2<::Class_1_FD893FD36F6A3A6D_2*, ::Class_1_43BD383C98B4C0C5_20*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*, ::System::Collections::Generic::List_1<::Class_2_1F213CFFCE98A271*>*, ::System::Collections::Generic::Dictionary_2<::Class_1_FD893FD36F6A3A6D_2*, ::Class_1_43BD383C98B4C0C5_20*>*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_1F213CFFCE98A271*>* Method_1_96C4AEF655BFC1C8()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_1F213CFFCE98A271*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_METHOD_1_96C4AEF655BFC1C8_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_121* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Void add_OnAttributesChanging(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_ADD_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
	}

	::System::Void remove_OnAttributesChanging(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_REMOVE_ONATTRIBUTESCHANGING_OFFSET))(this, a1);
	}

	::System::Void add_OnAttributesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_ADD_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnAttributesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_REMOVE_ONATTRIBUTESCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_85C53A16326B4DEE(::Class_2_1F213CFFCE98A271* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1F213CFFCE98A271*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_METHOD_1_85C53A16326B4DEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D03EA7AAEEC638FD(::Class_2_1F213CFFCE98A271* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1F213CFFCE98A271*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_METHOD_1_D03EA7AAEEC638FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754_METHOD_1_106289055FB804CE_OFFSET))(this);
	}
};
