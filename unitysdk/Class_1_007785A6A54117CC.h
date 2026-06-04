#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_007785A6A54117CC_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C4D560)
#define CLASS_1_007785A6A54117CC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4D5E0)

inline static constexpr unsigned int Class_1_007785A6A54117CC_TypeDefinitionIndex = 38816;

class Class_1_007785A6A54117CC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Boolean Field_1_6; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_007785A6A54117CC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_007785A6A54117CC_CLEAR_OFFSET))(this);
	}
};
