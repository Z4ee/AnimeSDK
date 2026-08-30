#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }

#define CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17AA2500)
#define CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17AA2490)
#define CLASS_2_4276E63D6D7CC5E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA25C0)

inline static constexpr unsigned int Class_2_4276E63D6D7CC5E5_1_TypeDefinitionIndex = 72788;

class Class_2_4276E63D6D7CC5E5_1 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Button* DAGDACJKKCN; // 0x18
	::UnityEngine::UI::Dropdown* BAOGDOFPPLN; // 0x20
	::UnityEngine::UI::Dropdown* GMHDIGJLLCG; // 0x28

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
