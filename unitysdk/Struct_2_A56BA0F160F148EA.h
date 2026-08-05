#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_838;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_A56BA0F160F148EA_METHOD_2_EE085B6060B48362_OFFSET UNITYSDK_OFFSET(0x850CC0)

inline static constexpr unsigned int Struct_2_A56BA0F160F148EA_TypeDefinitionIndex = 88022;

struct alignas(8) Struct_2_A56BA0F160F148EA
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_7; // 0x1C
	::Class_2_208CC9941471731A_838* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_838*>* Field_2_5; // 0x28

	::System::Void Method_2_EE085B6060B48362()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A56BA0F160F148EA_METHOD_2_EE085B6060B48362_OFFSET))(this);
	}
};
