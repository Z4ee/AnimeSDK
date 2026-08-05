#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FEDC5C6936DE91D__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACCB60)

inline static constexpr unsigned int Class_1_5FEDC5C6936DE91D_TypeDefinitionIndex = 83601;

class Class_1_5FEDC5C6936DE91D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x19
	::System::Boolean Field_1_7; // 0x1A
	::System::Boolean Field_1_1; // 0x1B
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_5; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEDC5C6936DE91D__CTOR_OFFSET))(this);
	}
};
