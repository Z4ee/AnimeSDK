#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_101.h"
#include "unitysdk/Enum_3_027285A7997BFD72.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_392.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_303467F7FB9F9FBB_METHOD_2_23131152726531D1_OFFSET UNITYSDK_OFFSET(0x1E1D3250)
#define CLASS_2_303467F7FB9F9FBB_METHOD_2_FCA75A494795EE25_OFFSET UNITYSDK_OFFSET(0x1E1D3410)
#define CLASS_2_303467F7FB9F9FBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3220)

inline static constexpr unsigned int Class_2_303467F7FB9F9FBB_TypeDefinitionIndex = 92373;

class Class_2_303467F7FB9F9FBB : public ::Class_1_5DA2E7556103D5A3_101
{
public:
	// static const ::System::Char Field_2_0; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0xE8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_392 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_392, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_303467F7FB9F9FBB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_23131152726531D1(::Struct_2_3E75877A2888D88A_392 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_392))((::PBYTE)hIl2Cpp + CLASS_2_303467F7FB9F9FBB_METHOD_2_23131152726531D1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_FCA75A494795EE25(::Enum_3_027285A7997BFD72 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_027285A7997BFD72))((::PBYTE)hIl2Cpp + CLASS_2_303467F7FB9F9FBB_METHOD_2_FCA75A494795EE25_OFFSET))(this, a1);
	}
};
