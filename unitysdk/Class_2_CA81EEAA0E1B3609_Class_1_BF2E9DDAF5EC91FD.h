#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CA81EEAA0E1B3609_CLASS_1_BF2E9DDAF5EC91FD__CTOR_OFFSET UNITYSDK_OFFSET(0x14666B00)

inline static constexpr unsigned int Class_2_CA81EEAA0E1B3609_Class_1_BF2E9DDAF5EC91FD_TypeDefinitionIndex = 79069;

class Class_2_CA81EEAA0E1B3609_Class_1_BF2E9DDAF5EC91FD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA81EEAA0E1B3609_CLASS_1_BF2E9DDAF5EC91FD__CTOR_OFFSET))(this);
	}
};
