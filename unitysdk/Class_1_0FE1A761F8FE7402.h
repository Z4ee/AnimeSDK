#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FE1A761F8FE7402__CTOR_OFFSET UNITYSDK_OFFSET(0x1022BE70)

inline static constexpr unsigned int Class_1_0FE1A761F8FE7402_TypeDefinitionIndex = 83139;

class Class_1_0FE1A761F8FE7402 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_3; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_0; // 0x20
	::Struct_2_E614D3B245F96744_1 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE1A761F8FE7402__CTOR_OFFSET))(this);
	}
};
