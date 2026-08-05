#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3067B67C1652A3F__CTOR_OFFSET UNITYSDK_OFFSET(0x17622BC0)

inline static constexpr unsigned int Class_1_B3067B67C1652A3F_TypeDefinitionIndex = 84120;

class Class_1_B3067B67C1652A3F : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Enum_3_80565EDC4420BFE0>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x20
	::Enum_3_80565EDC4420BFE0 Field_1_6; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Boolean Field_1_0; // 0x30
	::System::Boolean Field_1_2; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3067B67C1652A3F__CTOR_OFFSET))(this);
	}
};
