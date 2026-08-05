#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A8933E1CBAB9A867_METHOD_1_EEE1CDD36F00F873_OFFSET UNITYSDK_OFFSET(0x14D63210)
#define CLASS_1_A8933E1CBAB9A867__CTOR_OFFSET UNITYSDK_OFFSET(0x14D63200)

inline static constexpr unsigned int Class_1_A8933E1CBAB9A867_TypeDefinitionIndex = 65399;

class Class_1_A8933E1CBAB9A867 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_7; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8933E1CBAB9A867__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_EEE1CDD36F00F873(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8933E1CBAB9A867_METHOD_1_EEE1CDD36F00F873_OFFSET))(a1, a2);
	}
};
