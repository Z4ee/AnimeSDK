#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_6AB14A9E7FB0020F_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0xF079380)
#define CLASS_2_6AB14A9E7FB0020F_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0xF079270)
#define CLASS_2_6AB14A9E7FB0020F__CTOR_OFFSET UNITYSDK_OFFSET(0xF079310)

inline static constexpr unsigned int Class_2_6AB14A9E7FB0020F_TypeDefinitionIndex = 52098;

class Class_2_6AB14A9E7FB0020F : public ::Class_1_677CEA8C88AC78AB
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x80
	::System::Int32 Field_2_3; // 0x88
	::System::Single Field_2_1; // 0x8C
	::System::Boolean Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AB14A9E7FB0020F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AB14A9E7FB0020F_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AB14A9E7FB0020F_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
