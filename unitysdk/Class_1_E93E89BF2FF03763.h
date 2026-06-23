#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E93E89BF2FF03763_METHOD_1_EACDDF95A4A745A7_OFFSET UNITYSDK_OFFSET(0x134F2210)
#define CLASS_1_E93E89BF2FF03763__CTOR_OFFSET UNITYSDK_OFFSET(0x134F2200)

inline static constexpr unsigned int Class_1_E93E89BF2FF03763_TypeDefinitionIndex = 51885;

class Class_1_E93E89BF2FF03763 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93E89BF2FF03763__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_EACDDF95A4A745A7(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E93E89BF2FF03763_METHOD_1_EACDDF95A4A745A7_OFFSET))(a1, a2, a3);
	}
};
