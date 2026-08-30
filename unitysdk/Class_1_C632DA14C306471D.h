#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C632DA14C306471D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16909800)
#define CLASS_1_C632DA14C306471D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16909880)
#define CLASS_1_C632DA14C306471D__CTOR_OFFSET UNITYSDK_OFFSET(0x16909980)

inline static constexpr unsigned int Class_1_C632DA14C306471D_TypeDefinitionIndex = 59420;

class Class_1_C632DA14C306471D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C632DA14C306471D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C632DA14C306471D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C632DA14C306471D_TOSTRING_OFFSET))(this);
	}
};
