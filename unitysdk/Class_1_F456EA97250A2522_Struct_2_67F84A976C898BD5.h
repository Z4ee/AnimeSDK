#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FEB0042A043413D3;
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_F456EA97250A2522_STRUCT_2_67F84A976C898BD5_METHOD_2_0DA2EF203AC3BAAE_OFFSET UNITYSDK_OFFSET(0x71EDB0)

inline static constexpr unsigned int Class_1_F456EA97250A2522_Struct_2_67F84A976C898BD5_TypeDefinitionIndex = 39779;

struct alignas(8) Class_1_F456EA97250A2522_Struct_2_67F84A976C898BD5
{
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_FEB0042A043413D3* Field_2_2; // 0x10
	::System::Int32 Field_2_3; // 0x18
	::System::Boolean Field_2_4; // 0x1C

	::System::Text::StringBuilder* Method_2_0DA2EF203AC3BAAE(::System::Text::StringBuilder* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522_STRUCT_2_67F84A976C898BD5_METHOD_2_0DA2EF203AC3BAAE_OFFSET))(this, a1, a2, a3);
	}
};
