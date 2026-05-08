#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_6D17A92E4F636970_STRUCT_2_B9CE246F218B9A87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x658930)
#define CLASS_1_6D17A92E4F636970_STRUCT_2_B9CE246F218B9A87__CTOR_OFFSET UNITYSDK_OFFSET(0x658920)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Struct_2_B9CE246F218B9A87_TypeDefinitionIndex = 82553;

struct alignas(8) Class_1_6D17A92E4F636970_Struct_2_B9CE246F218B9A87
{
	::System::Text::StringBuilder* Field_2_0; // 0x10

	::System::Void _ctor(::System::Text::StringBuilder* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_STRUCT_2_B9CE246F218B9A87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_STRUCT_2_B9CE246F218B9A87_DISPOSE_OFFSET))(this);
	}
};
