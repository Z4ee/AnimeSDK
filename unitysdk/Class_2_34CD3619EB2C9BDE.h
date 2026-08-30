#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_34CD3619EB2C9BDE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9A0BD0)
#define CLASS_2_34CD3619EB2C9BDE_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB9A0B80)
#define CLASS_2_34CD3619EB2C9BDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A0C50)

inline static constexpr unsigned int Class_2_34CD3619EB2C9BDE_TypeDefinitionIndex = 71593;

class Class_2_34CD3619EB2C9BDE : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::Transform* BOGDFBIKEJE; // 0x18
	::UnityEngine::Transform* OFIPFNIBMLB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34CD3619EB2C9BDE__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34CD3619EB2C9BDE_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34CD3619EB2C9BDE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
