#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_D9ECFDE81FE491A6.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_670E3F616C4CF697__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD7500)

inline static constexpr unsigned int Class_1_670E3F616C4CF697_TypeDefinitionIndex = 53836;

class Class_1_670E3F616C4CF697 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_8 = 0xC4E4; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xC4E6; // 0x0
	::Struct_2_D9ECFDE81FE491A6 Field_1_0; // 0x10
	::System::Single Field_1_6; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Int32 Field_1_10; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Single Field_1_1; // 0x30
	::System::Int32 Field_1_11; // 0x34
	::Foundation::Coroutine::CoroutineHandle Field_1_9; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670E3F616C4CF697__CTOR_OFFSET))(this);
	}
};
