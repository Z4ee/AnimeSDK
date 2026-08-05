#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_717DC89D7B49AAB2_METHOD_2_D22C5F5CF35839F9_OFFSET UNITYSDK_OFFSET(0x11CC3B20)
#define CLASS_2_717DC89D7B49AAB2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11CC3A60)
#define CLASS_2_717DC89D7B49AAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC3B10)

inline static constexpr unsigned int Class_2_717DC89D7B49AAB2_TypeDefinitionIndex = 78283;

class Class_2_717DC89D7B49AAB2 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::String*>* Field_2_1; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_717DC89D7B49AAB2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_717DC89D7B49AAB2_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_D22C5F5CF35839F9(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_717DC89D7B49AAB2_METHOD_2_D22C5F5CF35839F9_OFFSET))(this, a1, a2);
	}
};
