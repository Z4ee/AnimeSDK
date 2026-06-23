#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_103.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_400.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D202B83AFEDC0267_METHOD_2_466E920385278600_1_OFFSET UNITYSDK_OFFSET(0x1A937E80)
#define CLASS_2_D202B83AFEDC0267_METHOD_2_466E920385278600_OFFSET UNITYSDK_OFFSET(0x1A937D30)
#define CLASS_2_D202B83AFEDC0267__CTOR_OFFSET UNITYSDK_OFFSET(0x1A937D20)

inline static constexpr unsigned int Class_2_D202B83AFEDC0267_TypeDefinitionIndex = 10122;

class Class_2_D202B83AFEDC0267 : public ::Class_1_5DA2E7556103D5A3_103
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0xD8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_400 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_400, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_466E920385278600()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_METHOD_2_466E920385278600_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_466E920385278600_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D202B83AFEDC0267_METHOD_2_466E920385278600_1_OFFSET))(this);
	}
};
