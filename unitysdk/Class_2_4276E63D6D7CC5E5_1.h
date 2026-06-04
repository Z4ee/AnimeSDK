#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }

#define CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6D91B0)
#define CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA6D9140)
#define CLASS_2_4276E63D6D7CC5E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D9270)

inline static constexpr unsigned int Class_2_4276E63D6D7CC5E5_1_TypeDefinitionIndex = 68074;

class Class_2_4276E63D6D7CC5E5_1 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Dropdown* Field_2_0; // 0x18
	::UnityEngine::UI::Dropdown* Field_2_1; // 0x20
	::UnityEngine::UI::Button* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4276E63D6D7CC5E5_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
