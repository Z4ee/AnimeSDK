#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_B99383C5AE28BE6F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCCDC270)
#define CLASS_2_B99383C5AE28BE6F_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xCCDC220)
#define CLASS_2_B99383C5AE28BE6F__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDC300)

inline static constexpr unsigned int Class_2_B99383C5AE28BE6F_TypeDefinitionIndex = 72413;

class Class_2_B99383C5AE28BE6F : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::RectTransform* AJJDFOMKAGF; // 0x18
	::UnityEngine::RectTransform* ADDAFGMEKBJ; // 0x20
	::UnityEngine::RectTransform* GMIHBHIFIJF; // 0x28

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
