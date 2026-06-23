#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define CLASS_2_290214D5FC5FDD8D_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x12E71E40)
#define CLASS_2_290214D5FC5FDD8D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12E71D00)
#define CLASS_2_290214D5FC5FDD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x12E71D90)

inline static constexpr unsigned int Class_2_290214D5FC5FDD8D_TypeDefinitionIndex = 67468;

class Class_2_290214D5FC5FDD8D : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC41950C_12<::System::Int32>* Field_2_0; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x70

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
