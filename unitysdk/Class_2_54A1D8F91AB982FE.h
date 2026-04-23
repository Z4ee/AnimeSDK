#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_54A1D8F91AB982FE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9A3B6A0)
#define CLASS_2_54A1D8F91AB982FE_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x9A3B7E0)
#define CLASS_2_54A1D8F91AB982FE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3B850)

inline static constexpr unsigned int Class_2_54A1D8F91AB982FE_TypeDefinitionIndex = 67080;

class Class_2_54A1D8F91AB982FE : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Text* Field_2_6; // 0x18
	::UnityEngine::UI::Button* Field_2_3; // 0x20
	::UnityEngine::UI::Text* Field_2_5; // 0x28
	::UnityEngine::UI::Text* Field_2_4; // 0x30
	::UnityEngine::UI::Button* Field_2_2; // 0x38
	::UnityEngine::UI::Button* Field_2_1; // 0x40
	::UnityEngine::UI::Text* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A1D8F91AB982FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A1D8F91AB982FE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A1D8F91AB982FE_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
