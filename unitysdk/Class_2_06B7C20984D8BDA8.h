#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_1_E398E2F4402CE967;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_163;

#define CLASS_2_06B7C20984D8BDA8_METHOD_2_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x12336180)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_6F70CF364074C8B7_OFFSET UNITYSDK_OFFSET(0x12336080)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_9C9DE4C164487634_OFFSET UNITYSDK_OFFSET(0x12335EB0)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_CA2103B39551E380_OFFSET UNITYSDK_OFFSET(0x12335A10)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_CF62297C914431A3_OFFSET UNITYSDK_OFFSET(0x12335530)
#define CLASS_2_06B7C20984D8BDA8_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x123352B0)
#define CLASS_2_06B7C20984D8BDA8__CTOR_OFFSET UNITYSDK_OFFSET(0x12335520)

inline static constexpr unsigned int Class_2_06B7C20984D8BDA8_TypeDefinitionIndex = 78085;

class Class_2_06B7C20984D8BDA8 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_163<::System::Int32>* Field_2_0; // 0x80
	::Class_1_E398E2F4402CE967* Field_2_6; // 0x88
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_1; // 0x90
	::Class_0_16E4307DCC419505_163<::System::Int32>* Field_2_7; // 0x98
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_2; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_CF62297C914431A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_CF62297C914431A3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_9C9DE4C164487634()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_9C9DE4C164487634_OFFSET))(this);
	}

	::System::Int32 Method_2_6F70CF364074C8B7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_6F70CF364074C8B7_OFFSET))(this);
	}

	::System::Boolean Method_2_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_CA2103B39551E380()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_CA2103B39551E380_OFFSET))(this);
	}
};
