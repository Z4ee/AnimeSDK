#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_50C9B34764F51AB1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A813250)
#define CLASS_2_50C9B34764F51AB1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1A813310)
#define CLASS_2_50C9B34764F51AB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A813380)

inline static constexpr unsigned int Class_2_50C9B34764F51AB1_TypeDefinitionIndex = 73100;

class Class_2_50C9B34764F51AB1 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Text* LHHEHGDLADI; // 0x18
	::UnityEngine::UI::Text* OLMCLMFOIGB; // 0x20
	::UnityEngine::UI::SmoothMask* LELDAGOEEHC; // 0x28

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
