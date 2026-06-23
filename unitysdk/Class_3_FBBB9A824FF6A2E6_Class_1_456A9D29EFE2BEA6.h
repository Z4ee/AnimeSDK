#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_FBBB9A824FF6A2E6_CLASS_1_456A9D29EFE2BEA6__CTOR_OFFSET UNITYSDK_OFFSET(0x127F7B90)

inline static constexpr unsigned int Class_3_FBBB9A824FF6A2E6_Class_1_456A9D29EFE2BEA6_TypeDefinitionIndex = 72402;

class Class_3_FBBB9A824FF6A2E6_Class_1_456A9D29EFE2BEA6 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_CLASS_1_456A9D29EFE2BEA6__CTOR_OFFSET))(this);
	}
};
