#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_59D81C4BFF1AEBE3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E80DD0)
#define CLASS_1_59D81C4BFF1AEBE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E80E20)
#define CLASS_1_59D81C4BFF1AEBE3__CTOR_OFFSET UNITYSDK_OFFSET(0x11E80F20)
#define CLASS_1_59D81C4BFF1AEBE3___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E80F30)

inline static constexpr unsigned int Class_1_59D81C4BFF1AEBE3_TypeDefinitionIndex = 62960;

class Class_1_59D81C4BFF1AEBE3 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::System::UInt32 Field_1_2; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59D81C4BFF1AEBE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59D81C4BFF1AEBE3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59D81C4BFF1AEBE3_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59D81C4BFF1AEBE3___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
