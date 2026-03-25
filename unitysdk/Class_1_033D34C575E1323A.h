#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_033D34C575E1323A_Class_1_FB100325CBA22B53;
class Class_1_253F4BEA35E6A1BB;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_033D34C575E1323A_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x8927C00)
#define CLASS_1_033D34C575E1323A_METHOD_1_07DC8DBCB57FFF77_OFFSET UNITYSDK_OFFSET(0x8926740)
#define CLASS_1_033D34C575E1323A_METHOD_1_0B3B9D0C23DA785E_OFFSET UNITYSDK_OFFSET(0x8926A70)
#define CLASS_1_033D34C575E1323A_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x8925C30)
#define CLASS_1_033D34C575E1323A_METHOD_1_1C81A1987FD4850E_OFFSET UNITYSDK_OFFSET(0x8926BE0)
#define CLASS_1_033D34C575E1323A_METHOD_1_224E25FC30CD7C07_OFFSET UNITYSDK_OFFSET(0x8926600)
#define CLASS_1_033D34C575E1323A_METHOD_1_3D51AC91A3208A95_OFFSET UNITYSDK_OFFSET(0x8926080)
#define CLASS_1_033D34C575E1323A_METHOD_1_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x8926390)
#define CLASS_1_033D34C575E1323A_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x8925960)
#define CLASS_1_033D34C575E1323A_METHOD_1_44D06E7F5757FE65_OFFSET UNITYSDK_OFFSET(0x8927580)
#define CLASS_1_033D34C575E1323A_METHOD_1_845D2B7BF153CC8C_OFFSET UNITYSDK_OFFSET(0x8926EA0)
#define CLASS_1_033D34C575E1323A_METHOD_1_89B741C8D388E631_OFFSET UNITYSDK_OFFSET(0x8927000)
#define CLASS_1_033D34C575E1323A_METHOD_1_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x8927DE0)
#define CLASS_1_033D34C575E1323A_METHOD_1_AA102EC09F689E2C_OFFSET UNITYSDK_OFFSET(0x89268A0)
#define CLASS_1_033D34C575E1323A_METHOD_1_C1A28CD9866A639A_OFFSET UNITYSDK_OFFSET(0x8925F50)
#define CLASS_1_033D34C575E1323A_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x8926540)
#define CLASS_1_033D34C575E1323A_METHOD_1_DC4DAAB301D98A3A_OFFSET UNITYSDK_OFFSET(0x8926DB0)
#define CLASS_1_033D34C575E1323A_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x8925BC0)
#define CLASS_1_033D34C575E1323A_METHOD_1_E7F074529B3A09EB_OFFSET UNITYSDK_OFFSET(0x8925CC0)
#define CLASS_1_033D34C575E1323A__CTOR_OFFSET UNITYSDK_OFFSET(0x8927DF0)

inline static constexpr unsigned int Class_1_033D34C575E1323A_TypeDefinitionIndex = 48375;

class Class_1_033D34C575E1323A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_253F4BEA35E6A1BB*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_033D34C575E1323A_Class_1_FB100325CBA22B53*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F074529B3A09EB(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_E7F074529B3A09EB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_C1A28CD9866A639A(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_C1A28CD9866A639A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D51AC91A3208A95(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::UInt32 a5, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_3D51AC91A3208A95_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::Class_1_253F4BEA35E6A1BB* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_253F4BEA35E6A1BB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_224E25FC30CD7C07(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_224E25FC30CD7C07_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_07DC8DBCB57FFF77(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_07DC8DBCB57FFF77_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_AA102EC09F689E2C(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_AA102EC09F689E2C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_0B3B9D0C23DA785E(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_0B3B9D0C23DA785E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_1C81A1987FD4850E(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_1C81A1987FD4850E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_DC4DAAB301D98A3A(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_DC4DAAB301D98A3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_845D2B7BF153CC8C(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_845D2B7BF153CC8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_89B741C8D388E631(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_89B741C8D388E631_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_44D06E7F5757FE65(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::UInt32>*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_44D06E7F5757FE65_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_METHOD_1_9F8F85BA5EA1113D_OFFSET))(this);
	}
};
