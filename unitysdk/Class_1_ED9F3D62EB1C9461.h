#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }

#define CLASS_1_ED9F3D62EB1C9461_COMPARE_OFFSET UNITYSDK_OFFSET(0x1DB76690)
#define CLASS_1_ED9F3D62EB1C9461__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB76880)

inline static constexpr unsigned int Class_1_ED9F3D62EB1C9461_TypeDefinitionIndex = 89429;

class Class_1_ED9F3D62EB1C9461 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED9F3D62EB1C9461__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Foundation::IRenderElement* a1, ::Foundation::IRenderElement* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::IRenderElement*, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + CLASS_1_ED9F3D62EB1C9461_COMPARE_OFFSET))(this, a1, a2);
	}
};
