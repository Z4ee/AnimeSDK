#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6FBBEFDE06A3C1C4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52E150)

inline static constexpr unsigned int Class_1_6FBBEFDE06A3C1C4_4_TypeDefinitionIndex = 42123;

class Class_1_6FBBEFDE06A3C1C4_4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NABBOPCFPFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBBEFDE06A3C1C4_4__CTOR_OFFSET))(this);
	}
};
