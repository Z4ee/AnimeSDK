#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }

#define CLASS_2_C5B746F543F615E2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158076A0)
#define CLASS_2_C5B746F543F615E2_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15807630)
#define CLASS_2_C5B746F543F615E2__CTOR_OFFSET UNITYSDK_OFFSET(0x158077B0)

inline static constexpr unsigned int Class_2_C5B746F543F615E2_TypeDefinitionIndex = 72677;

class Class_2_C5B746F543F615E2 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::InputField* ONBBDMLMJGG; // 0x18
	::UnityEngine::UI::Button* CGOOOBMPHMO; // 0x20
	::UnityEngine::UI::InputField* FKJJFDBDKCM; // 0x28
	::UnityEngine::UI::Button* FPNIIGOJKGG; // 0x30
	::UnityEngine::UI::Button* AGFFNONHCKO; // 0x38

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
