#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_3_10F339609BE79763_1;
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_8E938CB3775CAF5D_METHOD_2_9529558230CDD8EC_OFFSET UNITYSDK_OFFSET(0x11EB68D0)
#define CLASS_2_8E938CB3775CAF5D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11EB67E0)
#define CLASS_2_8E938CB3775CAF5D__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB68C0)

inline static constexpr unsigned int Class_2_8E938CB3775CAF5D_TypeDefinitionIndex = 70044;

class Class_2_8E938CB3775CAF5D : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_7; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_6; // 0x88
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_1; // 0x90
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_0; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E938CB3775CAF5D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E938CB3775CAF5D_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_9529558230CDD8EC(::Class_3_10F339609BE79763_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_10F339609BE79763_1*))((::PBYTE)hIl2Cpp + CLASS_2_8E938CB3775CAF5D_METHOD_2_9529558230CDD8EC_OFFSET))(this, a1);
	}
};
