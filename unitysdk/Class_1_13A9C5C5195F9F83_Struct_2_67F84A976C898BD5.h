#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FEB0042A043413D3;
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_13A9C5C5195F9F83_STRUCT_2_67F84A976C898BD5_METHOD_2_0DA2EF203AC3BAAE_OFFSET UNITYSDK_OFFSET(0x8D44F0)

inline static constexpr unsigned int Class_1_13A9C5C5195F9F83_Struct_2_67F84A976C898BD5_TypeDefinitionIndex = 42581;

struct alignas(8) Class_1_13A9C5C5195F9F83_Struct_2_67F84A976C898BD5
{
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_FEB0042A043413D3* Field_2_7; // 0x10
	::System::Int32 Field_2_6; // 0x18
	::System::Boolean Field_2_5; // 0x1C

	::System::Text::StringBuilder* Method_2_0DA2EF203AC3BAAE(::System::Text::StringBuilder* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13A9C5C5195F9F83_STRUCT_2_67F84A976C898BD5_METHOD_2_0DA2EF203AC3BAAE_OFFSET))(this, a1, a2, a3);
	}
};
