#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_388;
class Class_1_70BD21BFA8AB64FC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_27C5423F8C6A95F7_METHOD_1_1B5EA57073D93292_OFFSET UNITYSDK_OFFSET(0x14EF87F0)
#define CLASS_1_27C5423F8C6A95F7_METHOD_1_5602D2B72058234F_OFFSET UNITYSDK_OFFSET(0x14EF8430)
#define CLASS_1_27C5423F8C6A95F7_METHOD_1_7F52C63BAD7AD59D_OFFSET UNITYSDK_OFFSET(0x14EF8990)
#define CLASS_1_27C5423F8C6A95F7__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF82D0)

inline static constexpr unsigned int Class_1_27C5423F8C6A95F7_TypeDefinitionIndex = 85905;

class Class_1_27C5423F8C6A95F7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_9C9516EC1DA3BB28, ::Class_1_70BD21BFA8AB64FC*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7__CTOR_OFFSET))(this);
	}

	::Class_1_70BD21BFA8AB64FC* Method_1_5602D2B72058234F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>* a1)
	{
		return ((::Class_1_70BD21BFA8AB64FC*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>*))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7_METHOD_1_5602D2B72058234F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F52C63BAD7AD59D(::Struct_2_9C9516EC1DA3BB28& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28&))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7_METHOD_1_7F52C63BAD7AD59D_OFFSET))(this, a1);
	}

	::Class_1_70BD21BFA8AB64FC* Method_1_1B5EA57073D93292(::Struct_2_9C9516EC1DA3BB28& a1)
	{
		return ((::Class_1_70BD21BFA8AB64FC*(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28&))((::PBYTE)hIl2Cpp + CLASS_1_27C5423F8C6A95F7_METHOD_1_1B5EA57073D93292_OFFSET))(this, a1);
	}
};
