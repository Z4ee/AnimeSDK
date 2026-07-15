#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A3194024C7D2DEC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A9C3B2B239084E74_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x174F28D0)
#define CLASS_2_A9C3B2B239084E74_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x174F2AC0)
#define CLASS_2_A9C3B2B239084E74__CTOR_OFFSET UNITYSDK_OFFSET(0x174F28B0)

inline static constexpr unsigned int Class_2_A9C3B2B239084E74_TypeDefinitionIndex = 57416;

class Class_2_A9C3B2B239084E74 : public ::Class_1_7A3194024C7D2DEC
{
public:
	::System::Single Field_2_0; // 0x30
	::UnityEngine::Vector3 Field_2_1; // 0x34
	::System::Single Field_2_2; // 0x40
	::System::Single Field_2_3; // 0x44

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A9C3B2B239084E74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9C3B2B239084E74_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9C3B2B239084E74_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
