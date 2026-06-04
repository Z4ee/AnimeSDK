#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BC31367C4C352A5F_Struct_2_04C26CA3FB0A8AD7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;
class Class_0_16E4307DCC419505_467;
class Class_2_BEC12BCDD8267ED7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BC31367C4C352A5F_METHOD_1_29E5A15A60BBB9CB_OFFSET UNITYSDK_OFFSET(0xAF8E7D0)
#define CLASS_1_BC31367C4C352A5F_METHOD_1_5C775A6AFC4069EF_OFFSET UNITYSDK_OFFSET(0xAF8E5D0)
#define CLASS_1_BC31367C4C352A5F_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0xAF8E6E0)
#define CLASS_1_BC31367C4C352A5F__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8EA30)

inline static constexpr unsigned int Class_1_BC31367C4C352A5F_TypeDefinitionIndex = 50542;

class Class_1_BC31367C4C352A5F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BC31367C4C352A5F_Struct_2_04C26CA3FB0A8AD7>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5C775A6AFC4069EF(::Class_0_16E4307DCC419505_467* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_467*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F_METHOD_1_5C775A6AFC4069EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_467* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_467*))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_422* Method_1_29E5A15A60BBB9CB(::Class_2_BEC12BCDD8267ED7* a1)
	{
		return ((::Class_0_16E4307DCC419505_422*(*)(::PVOID, ::Class_2_BEC12BCDD8267ED7*))((::PBYTE)hIl2Cpp + CLASS_1_BC31367C4C352A5F_METHOD_1_29E5A15A60BBB9CB_OFFSET))(this, a1);
	}
};
