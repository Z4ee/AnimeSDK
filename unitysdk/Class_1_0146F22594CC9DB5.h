#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0146F22594CC9DB5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAA3E3E0)
#define CLASS_1_0146F22594CC9DB5_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAA3E4D0)
#define CLASS_1_0146F22594CC9DB5_METHOD_1_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xAA3E520)
#define CLASS_1_0146F22594CC9DB5_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0xAA3E5F0)
#define CLASS_1_0146F22594CC9DB5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAA3E480)
#define CLASS_1_0146F22594CC9DB5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA3E430)
#define CLASS_1_0146F22594CC9DB5_METHOD_1_CD5623C94E200C6B_OFFSET UNITYSDK_OFFSET(0xAA3E580)
#define CLASS_1_0146F22594CC9DB5_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA3E640)
#define CLASS_1_0146F22594CC9DB5__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA3E3D0)
#define CLASS_1_0146F22594CC9DB5__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3E3C0)
#define CLASS_1_0146F22594CC9DB5___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA3E6A0)

inline static constexpr unsigned int Class_1_0146F22594CC9DB5_TypeDefinitionIndex = 55732;

class Class_1_0146F22594CC9DB5 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_A86A455D6AB5B836_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CD5623C94E200C6B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_CD5623C94E200C6B_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_0146F22594CC9DB5* a1)
	{
		return ((::System::Boolean(*)(::Class_1_0146F22594CC9DB5*))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146F22594CC9DB5___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
