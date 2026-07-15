#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B470ECE8B4D9EC2E;
class Class_1_D33B7D6901AE39E9;
class Class_3_C4B4367065488983;

#define CLASS_1_8E042314AFF884FB_3_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1A4746B0)
#define CLASS_1_8E042314AFF884FB_3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A4745B0)
#define CLASS_1_8E042314AFF884FB_3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1A474660)
#define CLASS_1_8E042314AFF884FB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4745A0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_3_TypeDefinitionIndex = 40359;

class Class_1_8E042314AFF884FB_3 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::Class_3_C4B4367065488983* Field_1_1; // 0x18
	::Class_1_B470ECE8B4D9EC2E* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_3_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_3_TEARDOWN_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_3_CLEANUP_OFFSET))(this);
	}
};
