#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_49280AAF81D53F7B;
class Class_1_F0F5FC8CD22F7E83;
namespace System { class String; }

#define CLASS_1_3922B3534D873569_METHOD_1_3FEE811FDAA82A3F_OFFSET UNITYSDK_OFFSET(0x1653EF60)
#define CLASS_1_3922B3534D873569_METHOD_1_8C76006A0AF4A746_OFFSET UNITYSDK_OFFSET(0x1653F2E0)
#define CLASS_1_3922B3534D873569__CTOR_OFFSET UNITYSDK_OFFSET(0x1653F3B0)

inline static constexpr unsigned int Class_1_3922B3534D873569_TypeDefinitionIndex = 32078;

class Class_1_3922B3534D873569 : public ::System::Object
{
public:
	// static const ::System::UInt16 Field_1_0 = 0x2; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3922B3534D873569__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_3FEE811FDAA82A3F(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*))((::PBYTE)hIl2Cpp + CLASS_1_3922B3534D873569_METHOD_1_3FEE811FDAA82A3F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C76006A0AF4A746(::Class_1_F0F5FC8CD22F7E83* a1, ::Class_1_49280AAF81D53F7B* a2, ::Class_1_1B9BBF1B9A8CC806* a3)
	{
		return ((::System::Void(*)(::Class_1_F0F5FC8CD22F7E83*, ::Class_1_49280AAF81D53F7B*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_3922B3534D873569_METHOD_1_8C76006A0AF4A746_OFFSET))(a1, a2, a3);
	}
};
