#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D40F9D90905A4A4;
namespace System { class String; }

#define CLASS_1_A190603039E4AD6A_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x1EF3EC40)
#define CLASS_1_A190603039E4AD6A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1EF3EC20)
#define CLASS_1_A190603039E4AD6A_METHOD_1_EB0346E9C1C815F9_OFFSET UNITYSDK_OFFSET(0x1EF3ECD0)
#define CLASS_1_A190603039E4AD6A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EF3EC60)
#define CLASS_1_A190603039E4AD6A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF3EA80)
#define CLASS_1_A190603039E4AD6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3E990)

inline static constexpr unsigned int Class_1_A190603039E4AD6A_TypeDefinitionIndex = 42348;

class Class_1_A190603039E4AD6A : public ::System::Object
{
public:
	::Class_1_9D40F9D90905A4A4* HDKGNBDOBBB; // 0x10
	::System::Boolean EENJINGIFEP; // 0x18
	::System::Boolean INJJGMIGFFD; // 0x19
	::System::Boolean PMKMJCILCEM; // 0x1A

	::System::Void _ctor(::Class_1_9D40F9D90905A4A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*))((::PBYTE)hIl2Cpp + CLASS_1_A190603039E4AD6A__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_9D40F9D90905A4A4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A190603039E4AD6A__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A190603039E4AD6A_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A190603039E4AD6A_METHOD_1_CE34EA208837238D_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A190603039E4AD6A_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_EB0346E9C1C815F9(::Class_1_9D40F9D90905A4A4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A190603039E4AD6A_METHOD_1_EB0346E9C1C815F9_OFFSET))(this, a1, a2);
	}
};
