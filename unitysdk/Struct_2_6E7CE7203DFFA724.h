#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6E7CE7203DFFA724_METHOD_2_1FFDC4D157648D07_OFFSET UNITYSDK_OFFSET(0x171E1360)

inline static constexpr unsigned int Struct_2_6E7CE7203DFFA724_TypeDefinitionIndex = 53872;

struct alignas(8) Struct_2_6E7CE7203DFFA724
{
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x19
	::System::Boolean Field_2_3; // 0x1A

	static ::Struct_2_6E7CE7203DFFA724 Method_2_1FFDC4D157648D07(::Struct_2_6E7CE7203DFFA724 a1, ::Struct_2_6E7CE7203DFFA724 a2)
	{
		return ((::Struct_2_6E7CE7203DFFA724(*)(::Struct_2_6E7CE7203DFFA724, ::Struct_2_6E7CE7203DFFA724))((::PBYTE)hIl2Cpp + STRUCT_2_6E7CE7203DFFA724_METHOD_2_1FFDC4D157648D07_OFFSET))(a1, a2);
	}
};
