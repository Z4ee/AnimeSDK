#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_117.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_609.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D202B83AFEDC0267_1_METHOD_2_724E6BBE8BF08A5F_1_OFFSET UNITYSDK_OFFSET(0x1B208DB0)
#define CLASS_2_D202B83AFEDC0267_1_METHOD_2_724E6BBE8BF08A5F_OFFSET UNITYSDK_OFFSET(0x1B208BD0)
#define CLASS_2_D202B83AFEDC0267_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B208BC0)

inline static constexpr unsigned int Class_2_D202B83AFEDC0267_1_TypeDefinitionIndex = 13492;

class Class_2_D202B83AFEDC0267_1 : public ::Class_1_EBCA2A4357C4C8BF_117
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_609 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_609, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_724E6BBE8BF08A5F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1_METHOD_2_724E6BBE8BF08A5F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_724E6BBE8BF08A5F_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_1_METHOD_2_724E6BBE8BF08A5F_1_OFFSET))(this);
	}
};
