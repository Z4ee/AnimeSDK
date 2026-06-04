#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }

#define CLASS_2_C5B746F543F615E2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x139F76D0)
#define CLASS_2_C5B746F543F615E2_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x139F7660)
#define CLASS_2_C5B746F543F615E2__CTOR_OFFSET UNITYSDK_OFFSET(0x139F77E0)

inline static constexpr unsigned int Class_2_C5B746F543F615E2_TypeDefinitionIndex = 67964;

class Class_2_C5B746F543F615E2 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Button* Field_2_0; // 0x18
	::UnityEngine::UI::InputField* Field_2_1; // 0x20
	::UnityEngine::UI::Button* Field_2_2; // 0x28
	::UnityEngine::UI::Button* Field_2_3; // 0x30
	::UnityEngine::UI::InputField* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B746F543F615E2__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B746F543F615E2_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B746F543F615E2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
