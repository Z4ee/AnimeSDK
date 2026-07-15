#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_7E25C9E6907AC48F;

#define CLASS_1_8E042314AFF884FB_2_CLEANUP_OFFSET UNITYSDK_OFFSET(0x187E0C40)
#define CLASS_1_8E042314AFF884FB_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x187E0300)
#define CLASS_1_8E042314AFF884FB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x187E02F0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_2_TypeDefinitionIndex = 40229;

class Class_1_8E042314AFF884FB_2 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_2_EXECUTE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_2_CLEANUP_OFFSET))(this);
	}
};
