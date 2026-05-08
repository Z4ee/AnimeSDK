#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C52D8E01F122AD4F_1.h"
#include "unitysdk/System/Object.h"

class Class_1_38F73E91EC9DD65D;
class Class_1_5C805055193EF43F_Class_3_B0990F33CFBA42B0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C805055193EF43F_METHOD_1_026A9B9130C2BFA9_OFFSET UNITYSDK_OFFSET(0x13C00120)
#define CLASS_1_5C805055193EF43F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13BFFDE0)
#define CLASS_1_5C805055193EF43F_METHOD_1_B668BAFDBC46F22B_OFFSET UNITYSDK_OFFSET(0x13C00070)
#define CLASS_1_5C805055193EF43F_METHOD_1_D24E08620DD61C2E_OFFSET UNITYSDK_OFFSET(0x13BFFE80)
#define CLASS_1_5C805055193EF43F_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13C000D0)
#define CLASS_1_5C805055193EF43F__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFFD50)

inline static constexpr unsigned int Class_1_5C805055193EF43F_TypeDefinitionIndex = 45652;

class Class_1_5C805055193EF43F : public ::System::Object
{
public:
	::Class_1_38F73E91EC9DD65D* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5C805055193EF43F_Class_3_B0990F33CFBA42B0*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C805055193EF43F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C805055193EF43F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_D24E08620DD61C2E(::System::Int32 a1, ::Class_1_5C805055193EF43F_Class_3_B0990F33CFBA42B0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_5C805055193EF43F_Class_3_B0990F33CFBA42B0*))((::PBYTE)hIl2Cpp + CLASS_1_5C805055193EF43F_METHOD_1_D24E08620DD61C2E_OFFSET))(this, a1, a2);
	}

	::Enum_3_C52D8E01F122AD4F_1 Method_1_B668BAFDBC46F22B(::System::Int32 a1)
	{
		return ((::Enum_3_C52D8E01F122AD4F_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C805055193EF43F_METHOD_1_B668BAFDBC46F22B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_38F73E91EC9DD65D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38F73E91EC9DD65D*))((::PBYTE)hIl2Cpp + CLASS_1_5C805055193EF43F_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_026A9B9130C2BFA9(::System::Int32 a1, ::Enum_3_C52D8E01F122AD4F_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_C52D8E01F122AD4F_1))((::PBYTE)hIl2Cpp + CLASS_1_5C805055193EF43F_METHOD_1_026A9B9130C2BFA9_OFFSET))(this, a1, a2);
	}
};
