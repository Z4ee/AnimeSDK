#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FEDC5C6936DE91D__CTOR_OFFSET UNITYSDK_OFFSET(0x165B2930)

inline static constexpr unsigned int Class_1_5FEDC5C6936DE91D_TypeDefinitionIndex = 43941;

class Class_1_5FEDC5C6936DE91D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEDC5C6936DE91D__CTOR_OFFSET))(this);
	}
};
