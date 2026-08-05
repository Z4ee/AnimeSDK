#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_03FB78458C0C6019_METHOD_1_27E3E52E85CFB4E0_OFFSET UNITYSDK_OFFSET(0x15C0D0F0)
#define CLASS_1_03FB78458C0C6019_METHOD_1_2EC08A3DF3EE073C_OFFSET UNITYSDK_OFFSET(0x15C0CE90)
#define CLASS_1_03FB78458C0C6019_METHOD_1_C5324508AFB38C87_OFFSET UNITYSDK_OFFSET(0x15C0CFE0)
#define CLASS_1_03FB78458C0C6019__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0CE80)

inline static constexpr unsigned int Class_1_03FB78458C0C6019_TypeDefinitionIndex = 51602;

class Class_1_03FB78458C0C6019 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03FB78458C0C6019__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_2EC08A3DF3EE073C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_03FB78458C0C6019_METHOD_1_2EC08A3DF3EE073C_OFFSET))(a1);
	}

	static ::System::String* Method_1_C5324508AFB38C87(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_03FB78458C0C6019_METHOD_1_C5324508AFB38C87_OFFSET))(a1);
	}

	static ::System::Void Method_1_27E3E52E85CFB4E0(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_03FB78458C0C6019_METHOD_1_27E3E52E85CFB4E0_OFFSET))(a1, a2);
	}
};
