#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_3_C3F0E3B5AB5977AE_12;
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_6847C7A186D81792_METHOD_2_5F24EC6D9D295A23_OFFSET UNITYSDK_OFFSET(0x1784D8A0)
#define CLASS_2_6847C7A186D81792_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1784D7B0)
#define CLASS_2_6847C7A186D81792__CTOR_OFFSET UNITYSDK_OFFSET(0x1784D890)

inline static constexpr unsigned int Class_2_6847C7A186D81792_TypeDefinitionIndex = 43876;

class Class_2_6847C7A186D81792 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_0; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_1; // 0x88
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_2; // 0x90
	::Class_0_16E4307DCC419505_159<::System::Int64>* Field_2_7; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6847C7A186D81792__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6847C7A186D81792_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_5F24EC6D9D295A23(::Class_3_C3F0E3B5AB5977AE_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_12*))((::PBYTE)hIl2Cpp + CLASS_2_6847C7A186D81792_METHOD_2_5F24EC6D9D295A23_OFFSET))(this, a1);
	}
};
