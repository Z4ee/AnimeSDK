#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_661F05A484A19E7A_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x1005A560)
#define CLASS_2_661F05A484A19E7A_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x1005A450)
#define CLASS_2_661F05A484A19E7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1005A4F0)

inline static constexpr unsigned int Class_2_661F05A484A19E7A_TypeDefinitionIndex = 81616;

class Class_2_661F05A484A19E7A : public ::Class_1_677CEA8C88AC78AB
{
public:
	::UnityEngine::Vector3 Field_2_2; // 0x80
	::UnityEngine::Vector3 Field_2_0; // 0x8C
	::UnityEngine::Vector3 Field_2_1; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_661F05A484A19E7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_661F05A484A19E7A_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_661F05A484A19E7A_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
