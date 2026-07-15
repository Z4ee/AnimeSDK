#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_34CD3619EB2C9BDE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18DC9800)
#define CLASS_2_34CD3619EB2C9BDE_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18DC97B0)
#define CLASS_2_34CD3619EB2C9BDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC9880)

inline static constexpr unsigned int Class_2_34CD3619EB2C9BDE_TypeDefinitionIndex = 68411;

class Class_2_34CD3619EB2C9BDE : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20

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
