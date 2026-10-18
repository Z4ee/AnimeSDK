#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C632DA14C306471D_1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB1FFE40)
#define CLASS_1_C632DA14C306471D_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB1FFEC0)
#define CLASS_1_C632DA14C306471D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FFFC0)

inline static constexpr unsigned int Class_1_C632DA14C306471D_1_TypeDefinitionIndex = 59275;

class Class_1_C632DA14C306471D_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C632DA14C306471D_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C632DA14C306471D_1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C632DA14C306471D_1_TOSTRING_OFFSET))(this);
	}
};
