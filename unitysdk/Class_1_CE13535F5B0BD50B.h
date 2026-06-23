#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CE13535F5B0BD50B__CTOR_OFFSET UNITYSDK_OFFSET(0x109C75F0)

inline static constexpr unsigned int Class_1_CE13535F5B0BD50B_TypeDefinitionIndex = 63680;

class Class_1_CE13535F5B0BD50B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_1; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE13535F5B0BD50B__CTOR_OFFSET))(this);
	}
};
