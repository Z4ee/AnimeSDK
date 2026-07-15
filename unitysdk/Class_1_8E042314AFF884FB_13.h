#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_1_8E042314AFF884FB_13_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17063580)
#define CLASS_1_8E042314AFF884FB_13_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x170634F0)
#define CLASS_1_8E042314AFF884FB_13_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17063530)
#define CLASS_1_8E042314AFF884FB_13__CTOR_OFFSET UNITYSDK_OFFSET(0x170634E0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_13_TypeDefinitionIndex = 73006;

class Class_1_8E042314AFF884FB_13 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* Field_1_0; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_EXECUTE_OFFSET))(this);
	}
};
