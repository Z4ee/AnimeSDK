#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_4_011F5F8CC4313C2D_CLASS_1_6215EC1EF8E08B1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193C48A0)
#define CLASS_4_011F5F8CC4313C2D_CLASS_1_6215EC1EF8E08B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x193C4890)

inline static constexpr unsigned int Class_4_011F5F8CC4313C2D_Class_1_6215EC1EF8E08B1D_TypeDefinitionIndex = 47208;

class Class_4_011F5F8CC4313C2D_Class_1_6215EC1EF8E08B1D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_CLASS_1_6215EC1EF8E08B1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_CLASS_1_6215EC1EF8E08B1D_DISPOSE_OFFSET))(this);
	}
};
