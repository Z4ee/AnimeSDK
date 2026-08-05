#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_13FB64D7C0FD0F2D_METHOD_1_4D0CE0925AFE6117_OFFSET UNITYSDK_OFFSET(0x1501E950)
#define CLASS_1_13FB64D7C0FD0F2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1501E940)

inline static constexpr unsigned int Class_1_13FB64D7C0FD0F2D_TypeDefinitionIndex = 68978;

class Class_1_13FB64D7C0FD0F2D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FB64D7C0FD0F2D__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_4D0CE0925AFE6117(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FB64D7C0FD0F2D_METHOD_1_4D0CE0925AFE6117_OFFSET))(a1);
	}
};
