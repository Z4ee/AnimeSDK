#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_B99383C5AE28BE6F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169AC5B0)
#define CLASS_2_B99383C5AE28BE6F_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x169AC560)
#define CLASS_2_B99383C5AE28BE6F__CTOR_OFFSET UNITYSDK_OFFSET(0x169AC640)

inline static constexpr unsigned int Class_2_B99383C5AE28BE6F_TypeDefinitionIndex = 69212;

class Class_2_B99383C5AE28BE6F : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99383C5AE28BE6F__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99383C5AE28BE6F_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B99383C5AE28BE6F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
