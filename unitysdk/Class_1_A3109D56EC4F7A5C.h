#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A3109D56EC4F7A5C_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D3F150)
#define CLASS_1_A3109D56EC4F7A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F1A0)

inline static constexpr unsigned int Class_1_A3109D56EC4F7A5C_TypeDefinitionIndex = 38824;

class Class_1_A3109D56EC4F7A5C : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3109D56EC4F7A5C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3109D56EC4F7A5C_CLEAR_OFFSET))(this);
	}
};
