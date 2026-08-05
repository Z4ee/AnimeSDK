#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D03B8D96AD00B39__CTOR_OFFSET UNITYSDK_OFFSET(0x109C3980)

inline static constexpr unsigned int Class_1_9D03B8D96AD00B39_TypeDefinitionIndex = 91054;

class Class_1_9D03B8D96AD00B39 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_10; // 0x10
	::System::Int32 Field_1_11; // 0x18
	::System::Boolean Field_1_9; // 0x1C
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::UInt32 Field_1_7; // 0x28
	::Struct_2_E614D3B245F96744 Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D03B8D96AD00B39__CTOR_OFFSET))(this);
	}
};
