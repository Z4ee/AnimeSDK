#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_21DCD4640D389503_52_SET_OFFSET UNITYSDK_OFFSET(0x1EC080C0)
#define CLASS_1_21DCD4640D389503_52__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC08110)

inline static constexpr unsigned int Class_1_21DCD4640D389503_52_TypeDefinitionIndex = 35216;

class Class_1_21DCD4640D389503_52 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_52__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_52_SET_OFFSET))(this, a1);
	}
};
