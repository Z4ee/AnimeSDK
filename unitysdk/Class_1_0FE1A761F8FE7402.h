#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FE1A761F8FE7402__CTOR_OFFSET UNITYSDK_OFFSET(0x14C85440)

inline static constexpr unsigned int Class_1_0FE1A761F8FE7402_TypeDefinitionIndex = 76380;

class Class_1_0FE1A761F8FE7402 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_6; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Int32 Field_1_5; // 0x1C
	::Struct_2_E614D3B245F96744 Field_1_7; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE1A761F8FE7402__CTOR_OFFSET))(this);
	}
};
