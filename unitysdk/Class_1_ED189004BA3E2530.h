#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED189004BA3E2530__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF83C0)

inline static constexpr unsigned int Class_1_ED189004BA3E2530_TypeDefinitionIndex = 39279;

class Class_1_ED189004BA3E2530 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED189004BA3E2530__CTOR_OFFSET))(this);
	}
};
