#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_50C9B34764F51AB1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x163A5D80)
#define CLASS_2_50C9B34764F51AB1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x163A5E40)
#define CLASS_2_50C9B34764F51AB1__CTOR_OFFSET UNITYSDK_OFFSET(0x163A5EB0)

inline static constexpr unsigned int Class_2_50C9B34764F51AB1_TypeDefinitionIndex = 69843;

class Class_2_50C9B34764F51AB1 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::SmoothMask* Field_2_0; // 0x18
	::UnityEngine::UI::Text* Field_2_1; // 0x20
	::UnityEngine::UI::Text* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50C9B34764F51AB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50C9B34764F51AB1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50C9B34764F51AB1_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
