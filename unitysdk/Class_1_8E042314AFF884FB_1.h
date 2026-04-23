#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_3_7E25C9E6907AC48F;

#define CLASS_1_8E042314AFF884FB_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17E3C390)
#define CLASS_1_8E042314AFF884FB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3C380)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_1_TypeDefinitionIndex = 38652;

class Class_1_8E042314AFF884FB_1 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_1_INITIALIZE_OFFSET))(this);
	}
};
