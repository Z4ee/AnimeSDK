#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }

#define CLASS_1_C4C9E2AD338CD812_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E3EE510)
#define CLASS_1_C4C9E2AD338CD812__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EE700)

inline static constexpr unsigned int Class_1_C4C9E2AD338CD812_TypeDefinitionIndex = 89475;

class Class_1_C4C9E2AD338CD812 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4C9E2AD338CD812__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Foundation::IRenderElement* a1, ::Foundation::IRenderElement* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::IRenderElement*, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + CLASS_1_C4C9E2AD338CD812_COMPARE_OFFSET))(this, a1, a2);
	}
};
