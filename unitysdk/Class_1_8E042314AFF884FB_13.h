#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BF35D09998D831A7.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_3_1A92845FAFA5EC77;

#define CLASS_1_8E042314AFF884FB_13_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11033580)
#define CLASS_1_8E042314AFF884FB_13_METHOD_1_C240407BAEA69CE9_OFFSET UNITYSDK_OFFSET(0x11033610)
#define CLASS_1_8E042314AFF884FB_13__CTOR_OFFSET UNITYSDK_OFFSET(0x11033570)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_13_TypeDefinitionIndex = 62650;

class Class_1_8E042314AFF884FB_13 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C240407BAEA69CE9(::Struct_2_BF35D09998D831A7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BF35D09998D831A7))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_METHOD_1_C240407BAEA69CE9_OFFSET))(this, a1);
	}
};
