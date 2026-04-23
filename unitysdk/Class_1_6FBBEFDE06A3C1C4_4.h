#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6FBBEFDE06A3C1C4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4D090)

inline static constexpr unsigned int Class_1_6FBBEFDE06A3C1C4_4_TypeDefinitionIndex = 39525;

class Class_1_6FBBEFDE06A3C1C4_4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBBEFDE06A3C1C4_4__CTOR_OFFSET))(this);
	}
};
