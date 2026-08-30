#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_1_8E042314AFF884FB_13_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AA40360)
#define CLASS_1_8E042314AFF884FB_13_METHOD_1_C240407BAEA69CE9_OFFSET UNITYSDK_OFFSET(0x1AA40400)
#define CLASS_1_8E042314AFF884FB_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA40350)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_13_TypeDefinitionIndex = 76483;

class Class_1_8E042314AFF884FB_13 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x18

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C240407BAEA69CE9(::Struct_2_CFA12135DA0D972E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CFA12135DA0D972E))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_13_METHOD_1_C240407BAEA69CE9_OFFSET))(this, a1);
	}
};
