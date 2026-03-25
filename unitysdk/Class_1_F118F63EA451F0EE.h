#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6A8A062463EFFDD;
namespace System { class String; }

#define CLASS_1_F118F63EA451F0EE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8843D10)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_C73D895D04A6382A_OFFSET UNITYSDK_OFFSET(0x8843BF0)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_EB230BE012BCEEB2_OFFSET UNITYSDK_OFFSET(0x8843A00)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_1_OFFSET UNITYSDK_OFFSET(0x8843DD0)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_2_OFFSET UNITYSDK_OFFSET(0x8843E30)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_OFFSET UNITYSDK_OFFSET(0x8843D70)
#define CLASS_1_F118F63EA451F0EE__CTOR_OFFSET UNITYSDK_OFFSET(0x8843E90)

inline static constexpr unsigned int Class_1_F118F63EA451F0EE_TypeDefinitionIndex = 48280;

class Class_1_F118F63EA451F0EE : public ::System::Object
{
public:
	::Class_1_B6A8A062463EFFDD* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Single Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EB230BE012BCEEB2(::Class_1_B6A8A062463EFFDD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6A8A062463EFFDD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_EB230BE012BCEEB2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F5D19D54B71B8622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_OFFSET))(this);
	}

	::System::Void Method_1_F5D19D54B71B8622_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_1_OFFSET))(this);
	}

	::System::Void Method_1_F5D19D54B71B8622_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_2_OFFSET))(this);
	}

	::System::Void Method_1_C73D895D04A6382A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_C73D895D04A6382A_OFFSET))(this, a1);
	}
};
