#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_3_7E25C9E6907AC48F;

#define CLASS_1_8E042314AFF884FB_4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8858BE0)
#define CLASS_1_8E042314AFF884FB_4_ONHIT_OFFSET UNITYSDK_OFFSET(0x8859220)
#define CLASS_1_8E042314AFF884FB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8858BD0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_4_TypeDefinitionIndex = 62363;

class Class_1_8E042314AFF884FB_4 : public ::System::Object
{
public:
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_4_ONHIT_OFFSET))(this, a1);
	}
};
