#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_7E25C9E6907AC48F;

#define CLASS_1_8E042314AFF884FB_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3272B0)
#define CLASS_1_8E042314AFF884FB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3272A0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_1_TypeDefinitionIndex = 41107;

class Class_1_8E042314AFF884FB_1 : public ::System::Object
{
public:
	::Class_3_7E25C9E6907AC48F* CKJLAAOFGCC; // 0x10
	::Class_1_D33B7D6901AE39E9* MBKIEFPKECG; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_1_INITIALIZE_OFFSET))(this);
	}
};
