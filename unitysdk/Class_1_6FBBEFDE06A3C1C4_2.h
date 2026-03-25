#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6FBBEFDE06A3C1C4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F6D0)

inline static constexpr unsigned int Class_1_6FBBEFDE06A3C1C4_2_TypeDefinitionIndex = 32240;

class Class_1_6FBBEFDE06A3C1C4_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBBEFDE06A3C1C4_2__CTOR_OFFSET))(this);
	}
};
