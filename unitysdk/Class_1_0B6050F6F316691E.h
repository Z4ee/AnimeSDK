#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0B6050F6F316691E_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x1B2845C0)
#define CLASS_1_0B6050F6F316691E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2846D0)

inline static constexpr unsigned int Class_1_0B6050F6F316691E_TypeDefinitionIndex = 12571;

class Class_1_0B6050F6F316691E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B6050F6F316691E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0B6050F6F316691E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0B6050F6F316691E*&))((::PBYTE)hIl2Cpp + CLASS_1_0B6050F6F316691E_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
