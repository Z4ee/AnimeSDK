#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_870A0C1038062DED_METHOD_1_1612D4455C346FF5_OFFSET UNITYSDK_OFFSET(0x16B07D90)
#define CLASS_1_870A0C1038062DED_METHOD_1_2733F872C86C1773_OFFSET UNITYSDK_OFFSET(0x16B07DC0)
#define CLASS_1_870A0C1038062DED_METHOD_1_41E3E1EE8A70CA74_OFFSET UNITYSDK_OFFSET(0x16B081B0)
#define CLASS_1_870A0C1038062DED_METHOD_1_42380D3A369CC8C6_OFFSET UNITYSDK_OFFSET(0x16B07EE0)
#define CLASS_1_870A0C1038062DED_METHOD_1_7326206B5D440A27_OFFSET UNITYSDK_OFFSET(0x16B07B50)
#define CLASS_1_870A0C1038062DED_METHOD_1_84346398E0F00374_OFFSET UNITYSDK_OFFSET(0x16B08400)
#define CLASS_1_870A0C1038062DED_METHOD_1_C1B89A1DD6D84192_OFFSET UNITYSDK_OFFSET(0x16B07DD0)
#define CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x16B08190)
#define CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x16B081A0)
#define CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x16B083F0)
#define CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16B07B40)
#define CLASS_1_870A0C1038062DED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B07B20)
#define CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16B07C70)
#define CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x16B07C80)
#define CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x16B07DB0)
#define CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x16B08180)
#define CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16B07C60)
#define CLASS_1_870A0C1038062DED_METHOD_1_FA5EFB3A13C76C8C_OFFSET UNITYSDK_OFFSET(0x16B07DA0)
#define CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_1_OFFSET UNITYSDK_OFFSET(0x16B07C90)
#define CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_2_OFFSET UNITYSDK_OFFSET(0x16B07DE0)
#define CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_3_OFFSET UNITYSDK_OFFSET(0x16B08080)
#define CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_4_OFFSET UNITYSDK_OFFSET(0x16B082F0)
#define CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_OFFSET UNITYSDK_OFFSET(0x16B07B60)
#define CLASS_1_870A0C1038062DED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16B07720)
#define CLASS_1_870A0C1038062DED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16B07400)
#define CLASS_1_870A0C1038062DED__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16B07500)
#define CLASS_1_870A0C1038062DED__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16B075D0)
#define CLASS_1_870A0C1038062DED__CTOR_OFFSET UNITYSDK_OFFSET(0x16B07310)

inline static constexpr unsigned int Class_1_870A0C1038062DED_TypeDefinitionIndex = 65112;

class Class_1_870A0C1038062DED : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_7 = 0x1; // 0x0
	// static const ::System::Byte Field_1_6 = 0x2; // 0x0
	// static const ::System::Byte Field_1_5 = 0x4; // 0x0
	// static const ::System::Byte Field_1_4 = 0x8; // 0x0
	::System::Func_1<::UnityEngine::Transform*>* Field_1_2; // 0x10
	::System::Func_1<::System::Int32>* Field_1_1; // 0x18
	::System::Byte Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Func_1<::UnityEngine::Transform*>* a1, ::System::Func_1<::System::Int32>* a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Transform*>*, ::System::Func_1<::System::Int32>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_3(::System::Func_1<::UnityEngine::Transform*>* a1, ::System::Func_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Transform*>*, ::System::Func_1<::System::Int32>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Func_1<::UnityEngine::Transform*>* Method_1_7326206B5D440A27()
	{
		return ((::System::Func_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_7326206B5D440A27_OFFSET))(this);
	}

	static ::Class_1_870A0C1038062DED* Method_1_FB3BD3C0826A2F5A(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	static ::Class_1_870A0C1038062DED* Method_1_FB3BD3C0826A2F5A_1(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_1_OFFSET))(a1, a2);
	}

	::System::Func_1<::System::Int32>* Method_1_1612D4455C346FF5()
	{
		return ((::System::Func_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_1612D4455C346FF5_OFFSET))(this);
	}

	::System::Byte Method_1_FA5EFB3A13C76C8C()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_FA5EFB3A13C76C8C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_2733F872C86C1773(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_2733F872C86C1773_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1B89A1DD6D84192(::System::Func_1<::UnityEngine::Transform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_C1B89A1DD6D84192_OFFSET))(this, a1);
	}

	static ::Class_1_870A0C1038062DED* Method_1_FB3BD3C0826A2F5A_2(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_2_OFFSET))(a1, a2);
	}

	static ::Class_1_870A0C1038062DED* Method_1_42380D3A369CC8C6(::UnityEngine::Transform* a1, ::System::Func_1<::System::Int32>* a2, ::System::Byte a3)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::UnityEngine::Transform*, ::System::Func_1<::System::Int32>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_42380D3A369CC8C6_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_870A0C1038062DED* Method_1_FB3BD3C0826A2F5A_3(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_3_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	static ::Class_1_870A0C1038062DED* Method_1_41E3E1EE8A70CA74(::System::Func_1<::UnityEngine::Transform*>* a1, ::System::Func_1<::System::Int32>* a2, ::System::Byte a3)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::System::Func_1<::UnityEngine::Transform*>*, ::System::Func_1<::System::Int32>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_41E3E1EE8A70CA74_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_870A0C1038062DED* Method_1_FB3BD3C0826A2F5A_4(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::Class_1_870A0C1038062DED*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_FB3BD3C0826A2F5A_4_OFFSET))(a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_84346398E0F00374(::System::Func_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_METHOD_1_84346398E0F00374_OFFSET))(this, a1);
	}
};
