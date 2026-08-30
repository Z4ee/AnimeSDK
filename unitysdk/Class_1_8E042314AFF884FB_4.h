#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;

#define CLASS_1_8E042314AFF884FB_4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC0A6D90)
#define CLASS_1_8E042314AFF884FB_4_ONHIT_OFFSET UNITYSDK_OFFSET(0xC0A7440)
#define CLASS_1_8E042314AFF884FB_4__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A6D80)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_4_TypeDefinitionIndex = 76128;

class Class_1_8E042314AFF884FB_4 : public ::System::Object
{
public:
	::Class_3_7E25C9E6907AC48F* CKJLAAOFGCC; // 0x10
	::Class_1_D33B7D6901AE39E9* MBKIEFPKECG; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4_ONHIT_OFFSET))(this, a1);
	}
};
