#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_337F77F1CC4B245B__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD1A80)

inline static constexpr unsigned int Class_1_337F77F1CC4B245B_TypeDefinitionIndex = 63919;

class Class_1_337F77F1CC4B245B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::Struct_2_E614D3B245F96744_1 Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_337F77F1CC4B245B__CTOR_OFFSET))(this);
	}
};
