#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define CLASS_2_290214D5FC5FDD8D_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x167B2950)
#define CLASS_2_290214D5FC5FDD8D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x167B2840)
#define CLASS_2_290214D5FC5FDD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x167B28E0)

inline static constexpr unsigned int Class_2_290214D5FC5FDD8D_TypeDefinitionIndex = 64074;

class Class_2_290214D5FC5FDD8D : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x88
	::Class_0_16E4307DCC41950C_14<::System::Int32>* Field_2_1; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_290214D5FC5FDD8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_290214D5FC5FDD8D_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_290214D5FC5FDD8D_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}
};
