#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define STRUCT_2_9E453D160BF69F98_METHOD_2_112EA3507D558FB1_OFFSET UNITYSDK_OFFSET(0x38EFC20)
#define STRUCT_2_9E453D160BF69F98_METHOD_2_60106C3A442FB10F_OFFSET UNITYSDK_OFFSET(0x38EFC30)
#define STRUCT_2_9E453D160BF69F98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38EFC10)
#define STRUCT_2_9E453D160BF69F98__CTOR_OFFSET UNITYSDK_OFFSET(0x38EFC00)

inline static constexpr unsigned int Struct_2_9E453D160BF69F98_TypeDefinitionIndex = 53642;

struct alignas(8) Struct_2_9E453D160BF69F98
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_9E453D160BF69F98__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E453D160BF69F98_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_112EA3507D558FB1(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + STRUCT_2_9E453D160BF69F98_METHOD_2_112EA3507D558FB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_60106C3A442FB10F(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + STRUCT_2_9E453D160BF69F98_METHOD_2_60106C3A442FB10F_OFFSET))(this, a1);
	}
};
