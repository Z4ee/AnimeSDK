#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D03B8D96AD00B39__CTOR_OFFSET UNITYSDK_OFFSET(0x13576580)

inline static constexpr unsigned int Class_1_9D03B8D96AD00B39_TypeDefinitionIndex = 50720;

class Class_1_9D03B8D96AD00B39 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_6; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Int32 Field_1_5; // 0x1C
	::Struct_2_E614D3B245F96744_1 Field_1_4; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::System::UInt32 Field_1_1; // 0x2C
	::System::Boolean Field_1_7; // 0x30
	::System::Int32 Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D03B8D96AD00B39__CTOR_OFFSET))(this);
	}
};
