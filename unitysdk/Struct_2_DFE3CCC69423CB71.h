#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_DFE3CCC69423CB71_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7FC920)
#define STRUCT_2_DFE3CCC69423CB71_EQUALS_OFFSET UNITYSDK_OFFSET(0x7FC880)
#define STRUCT_2_DFE3CCC69423CB71_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7FC930)

inline static constexpr unsigned int Struct_2_DFE3CCC69423CB71_TypeDefinitionIndex = 83652;

struct alignas(8) Struct_2_DFE3CCC69423CB71
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Boolean Equals(::Struct_2_DFE3CCC69423CB71 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_DFE3CCC69423CB71))((::PBYTE)hIl2Cpp + STRUCT_2_DFE3CCC69423CB71_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_DFE3CCC69423CB71_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_DFE3CCC69423CB71_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
