#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BE6BF7909AD9D940;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_55E8B218694388DC_METHOD_2_D10D3570689EE67D_OFFSET UNITYSDK_OFFSET(0x77FA20)
#define STRUCT_2_55E8B218694388DC__CTOR_OFFSET UNITYSDK_OFFSET(0x3E0960)

inline static constexpr unsigned int Struct_2_55E8B218694388DC_TypeDefinitionIndex = 45132;

struct alignas(8) Struct_2_55E8B218694388DC
{
	::System::Boolean Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* Field_2_1; // 0x18

	::System::Void _ctor(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + STRUCT_2_55E8B218694388DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D10D3570689EE67D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_55E8B218694388DC_METHOD_2_D10D3570689EE67D_OFFSET))(this);
	}
};
