#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_150;

#define CLASS_1_FF317343236F9F15_2_METHOD_1_F1BD4E00D07E522D_OFFSET UNITYSDK_OFFSET(0x15AB0530)
#define CLASS_1_FF317343236F9F15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB0620)

inline static constexpr unsigned int Class_1_FF317343236F9F15_2_TypeDefinitionIndex = 80150;

class Class_1_FF317343236F9F15_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_150* Method_1_F1BD4E00D07E522D(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_150*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15_2_METHOD_1_F1BD4E00D07E522D_OFFSET))(this, a1);
	}
};
