#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }

#define CLASS_2_4276E63D6D7CC5E5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11D6F4D0)
#define CLASS_2_4276E63D6D7CC5E5_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x11D6F460)
#define CLASS_2_4276E63D6D7CC5E5__CTOR_OFFSET UNITYSDK_OFFSET(0x11D6F5C0)

inline static constexpr unsigned int Class_2_4276E63D6D7CC5E5_TypeDefinitionIndex = 67020;

class Class_2_4276E63D6D7CC5E5 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Button* Field_2_1; // 0x18
	::UnityEngine::UI::Dropdown* Field_2_3; // 0x20
	::UnityEngine::UI::Button* Field_2_0; // 0x28
	::UnityEngine::UI::Dropdown* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4276E63D6D7CC5E5__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4276E63D6D7CC5E5_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4276E63D6D7CC5E5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
