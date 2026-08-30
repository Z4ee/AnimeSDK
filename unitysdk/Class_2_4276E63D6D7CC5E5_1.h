#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }

#define CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9C68E0)
#define CLASS_2_4276E63D6D7CC5E5_1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB9C6870)
#define CLASS_2_4276E63D6D7CC5E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C69A0)

inline static constexpr unsigned int Class_2_4276E63D6D7CC5E5_1_TypeDefinitionIndex = 72789;

class Class_2_4276E63D6D7CC5E5_1 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Dropdown* BAOGDOFPPLN; // 0x18
	::UnityEngine::UI::Dropdown* GMHDIGJLLCG; // 0x20
	::UnityEngine::UI::Button* DAGDACJKKCN; // 0x28

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
