#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FEDC5C6936DE91D__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDE0C0)

inline static constexpr unsigned int Class_1_5FEDC5C6936DE91D_TypeDefinitionIndex = 38097;

class Class_1_5FEDC5C6936DE91D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEDC5C6936DE91D__CTOR_OFFSET))(this);
	}
};
