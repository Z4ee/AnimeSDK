#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_34CD3619EB2C9BDE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91C2F60)
#define CLASS_2_34CD3619EB2C9BDE_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x91C2F10)
#define CLASS_2_34CD3619EB2C9BDE__CTOR_OFFSET UNITYSDK_OFFSET(0x91C2FE0)

inline static constexpr unsigned int Class_2_34CD3619EB2C9BDE_TypeDefinitionIndex = 66034;

class Class_2_34CD3619EB2C9BDE : public ::Class_1_89D8044AB73F8F6D
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
