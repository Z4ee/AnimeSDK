#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FEDC5C6936DE91D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x164607C0)

inline static constexpr unsigned int Class_1_5FEDC5C6936DE91D_1_TypeDefinitionIndex = 85031;

class Class_1_5FEDC5C6936DE91D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_5; // 0x1C
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEDC5C6936DE91D_1__CTOR_OFFSET))(this);
	}
};
