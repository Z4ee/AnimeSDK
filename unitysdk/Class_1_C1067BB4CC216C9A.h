#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BC654B02C487E1A2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C1067BB4CC216C9A__CTOR_OFFSET UNITYSDK_OFFSET(0x160957C0)

inline static constexpr unsigned int Class_1_C1067BB4CC216C9A_TypeDefinitionIndex = 48284;

class Class_1_C1067BB4CC216C9A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::Enum_3_BC654B02C487E1A2 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Boolean Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1067BB4CC216C9A__CTOR_OFFSET))(this);
	}
};
