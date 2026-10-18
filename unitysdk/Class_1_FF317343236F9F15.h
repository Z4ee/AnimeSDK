#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_109;

#define CLASS_1_FF317343236F9F15_METHOD_1_F1BD4E00D07E522D_OFFSET UNITYSDK_OFFSET(0x15965BE0)
#define CLASS_1_FF317343236F9F15__CTOR_OFFSET UNITYSDK_OFFSET(0x15965C90)

inline static constexpr unsigned int Class_1_FF317343236F9F15_TypeDefinitionIndex = 80104;

class Class_1_FF317343236F9F15 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_109* Method_1_F1BD4E00D07E522D(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_109*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15_METHOD_1_F1BD4E00D07E522D_OFFSET))(this, a1);
	}
};
