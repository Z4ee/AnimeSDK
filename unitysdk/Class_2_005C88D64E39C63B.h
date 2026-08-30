#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_7BBC5D81DAA7A516;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_005C88D64E39C63B_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xC112290)
#define CLASS_2_005C88D64E39C63B_METHOD_2_6BC100EAFCFD119E_OFFSET UNITYSDK_OFFSET(0xC112480)
#define CLASS_2_005C88D64E39C63B_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xC112410)
#define CLASS_2_005C88D64E39C63B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xC112330)
#define CLASS_2_005C88D64E39C63B_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xC112950)
#define CLASS_2_005C88D64E39C63B_METHOD_2_D5F29A5FAC8FAF2C_OFFSET UNITYSDK_OFFSET(0xC112A30)
#define CLASS_2_005C88D64E39C63B_METHOD_2_DD53226D4AF954E8_OFFSET UNITYSDK_OFFSET(0xC112AB0)
#define CLASS_2_005C88D64E39C63B_METHOD_2_E2D4F5678F261E8A_OFFSET UNITYSDK_OFFSET(0xC112860)
#define CLASS_2_005C88D64E39C63B_METHOD_2_E92D659A78444176_OFFSET UNITYSDK_OFFSET(0xC112C40)
#define CLASS_2_005C88D64E39C63B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC1122E0)
#define CLASS_2_005C88D64E39C63B_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC112220)
#define CLASS_2_005C88D64E39C63B__CTOR_OFFSET UNITYSDK_OFFSET(0xC112E30)
#define CLASS_2_005C88D64E39C63B__ONBIND_OFFSET UNITYSDK_OFFSET(0xC112380)

inline static constexpr unsigned int Class_2_005C88D64E39C63B_TypeDefinitionIndex = 71558;

class Class_2_005C88D64E39C63B : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* LJPHIHJHIAJ; // 0x0
	// static const ::System::String* CMFAEPNLGIB; // 0x0
	// static const ::System::String* MGDFDECEKGP; // 0x0
	// static const ::System::String* KCMFDJLBJPI; // 0x0
	::System::Collections::Generic::List_1<::Class_2_7BBC5D81DAA7A516*>* MLJDAEMEBFJ; // 0x60
	::Il2CppArray<::System::String*>* DBIABMGPFME; // 0x68
	::UnityEngine::Transform* NBAPJOBMGNF; // 0x70
	::System::Int32 DEBFEIKENAO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B__CTOR_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_ONRETURN_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_6BC100EAFCFD119E(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_6BC100EAFCFD119E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD53226D4AF954E8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_DD53226D4AF954E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E2D4F5678F261E8A(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_E2D4F5678F261E8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_97889423B3D78768_OFFSET))(this);
	}

	::System::String* Method_2_D5F29A5FAC8FAF2C(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_D5F29A5FAC8FAF2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E92D659A78444176(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_E92D659A78444176_OFFSET))(this, a1);
	}
};
