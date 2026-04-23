#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_1_B470ECE8B4D9EC2E;
class Class_3_C4B4367065488983;

#define CLASS_1_8E042314AFF884FB_3_CLEANUP_OFFSET UNITYSDK_OFFSET(0x18086300)
#define CLASS_1_8E042314AFF884FB_3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18086200)
#define CLASS_1_8E042314AFF884FB_3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x180862B0)
#define CLASS_1_8E042314AFF884FB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x180861F0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_3_TypeDefinitionIndex = 38782;

class Class_1_8E042314AFF884FB_3 : public ::System::Object
{
public:
	::Class_3_C4B4367065488983* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::Class_1_B470ECE8B4D9EC2E* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_3__CTOR_OFFSET))(this, a1, a2);
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
