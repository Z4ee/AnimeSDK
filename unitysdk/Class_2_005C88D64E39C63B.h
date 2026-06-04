#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_7BBC5D81DAA7A516;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_005C88D64E39C63B_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xAD2F4E0)
#define CLASS_2_005C88D64E39C63B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAD2FFF0)
#define CLASS_2_005C88D64E39C63B_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAD2FF30)
#define CLASS_2_005C88D64E39C63B_METHOD_2_6BC100EAFCFD119E_OFFSET UNITYSDK_OFFSET(0xAD2F530)
#define CLASS_2_005C88D64E39C63B_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xAD2F1C0)
#define CLASS_2_005C88D64E39C63B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xAD2F0E0)
#define CLASS_2_005C88D64E39C63B_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xAD2FA00)
#define CLASS_2_005C88D64E39C63B_METHOD_2_D5F29A5FAC8FAF2C_OFFSET UNITYSDK_OFFSET(0xAD2FAE0)
#define CLASS_2_005C88D64E39C63B_METHOD_2_DD53226D4AF954E8_OFFSET UNITYSDK_OFFSET(0xAD2FB60)
#define CLASS_2_005C88D64E39C63B_METHOD_2_E2D4F5678F261E8A_OFFSET UNITYSDK_OFFSET(0xAD2F910)
#define CLASS_2_005C88D64E39C63B_METHOD_2_E92D659A78444176_OFFSET UNITYSDK_OFFSET(0xAD2FCF0)
#define CLASS_2_005C88D64E39C63B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xAD2F090)
#define CLASS_2_005C88D64E39C63B_ONRETURN_OFFSET UNITYSDK_OFFSET(0xAD2F020)
#define CLASS_2_005C88D64E39C63B__CTOR_OFFSET UNITYSDK_OFFSET(0xAD2FEE0)
#define CLASS_2_005C88D64E39C63B__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD2F130)
#define CLASS_2_005C88D64E39C63B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD2FF90)

inline static constexpr unsigned int Class_2_005C88D64E39C63B_TypeDefinitionIndex = 66932;

class Class_2_005C88D64E39C63B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::System::Collections::Generic::List_1<::Class_2_7BBC5D81DAA7A516*>* Field_2_4; // 0x60
	::UnityEngine::Transform* Field_2_5; // 0x68
	::Il2CppArray<::System::String*>* Field_2_6; // 0x70
	::System::Int32 Field_2_7; // 0x78

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

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005C88D64E39C63B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
