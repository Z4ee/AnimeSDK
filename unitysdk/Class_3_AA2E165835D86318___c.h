#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_7B5A65E248106C68;
class Class_4_B99AA5AE371451AA;
class Class_5_1C775D1A5A638660;
class Class_5_EC49DC305E06FE39;
class Class_5_F638703ACD0FA08E;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_AA2E165835D86318___C_METHOD_1_89D795F391CF4CC7_OFFSET UNITYSDK_OFFSET(0xA9831C0)
#define CLASS_3_AA2E165835D86318___C_METHOD_1_AAC5FD8493EE632C_OFFSET UNITYSDK_OFFSET(0xA9831E0)
#define CLASS_3_AA2E165835D86318___C_METHOD_1_DA50CB9B9F238282_OFFSET UNITYSDK_OFFSET(0xA9831D0)
#define CLASS_3_AA2E165835D86318___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA983170)
#define CLASS_3_AA2E165835D86318___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9831B0)

inline static constexpr unsigned int Class_3_AA2E165835D86318___c_TypeDefinitionIndex = 58857;

class Class_3_AA2E165835D86318___c : public ::System::Object
{
public:
	static ::Class_3_AA2E165835D86318___c** StaticGet___9()
	{
		return (::Class_3_AA2E165835D86318___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA2E165835D86318___c_TypeDefinitionIndex)->GetStaticField(0x47ED0);
	}
	static ::System::Action_1<::Class_5_1C775D1A5A638660*>** StaticGet___9__42_0()
	{
		return (::System::Action_1<::Class_5_1C775D1A5A638660*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA2E165835D86318___c_TypeDefinitionIndex)->GetStaticField(0x47ED8);
	}
	static ::System::Action_3<::Class_4_B99AA5AE371451AA*, ::Class_5_EC49DC305E06FE39*, ::Class_5_F638703ACD0FA08E*>** StaticGet___9__42_2()
	{
		return (::System::Action_3<::Class_4_B99AA5AE371451AA*, ::Class_5_EC49DC305E06FE39*, ::Class_5_F638703ACD0FA08E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA2E165835D86318___c_TypeDefinitionIndex)->GetStaticField(0x47EE0);
	}
	static ::System::Action_1<::Class_4_7B5A65E248106C68*>** StaticGet___9__42_1()
	{
		return (::System::Action_1<::Class_4_7B5A65E248106C68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA2E165835D86318___c_TypeDefinitionIndex)->GetStaticField(0x47EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89D795F391CF4CC7(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318___C_METHOD_1_89D795F391CF4CC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA50CB9B9F238282(::Class_4_B99AA5AE371451AA* a1, ::Class_5_EC49DC305E06FE39* a2, ::Class_5_F638703ACD0FA08E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B99AA5AE371451AA*, ::Class_5_EC49DC305E06FE39*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318___C_METHOD_1_DA50CB9B9F238282_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AAC5FD8493EE632C(::Class_5_1C775D1A5A638660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_1C775D1A5A638660*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318___C_METHOD_1_AAC5FD8493EE632C_OFFSET))(this, a1);
	}
};
