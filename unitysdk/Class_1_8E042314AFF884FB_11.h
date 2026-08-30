#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_1_8E042314AFF884FB_11_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18A3C920)
#define CLASS_1_8E042314AFF884FB_11_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18A3C7D0)
#define CLASS_1_8E042314AFF884FB_11_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18A3C780)
#define CLASS_1_8E042314AFF884FB_11__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3C770)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_11_TypeDefinitionIndex = 76453;

class Class_1_8E042314AFF884FB_11 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x18

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_TEARDOWN_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_11_EXECUTE_OFFSET))(this);
	}
};
