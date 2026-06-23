#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_48F9448A0DC1016A_METHOD_1_0556CC6FFC162C0D_OFFSET UNITYSDK_OFFSET(0x17B64580)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_169D055FFBA99416_OFFSET UNITYSDK_OFFSET(0x17B65320)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_199FD87A7080D723_OFFSET UNITYSDK_OFFSET(0x17B64890)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17B649C0)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x17B652A0)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17B65290)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_580E7E6201D1B663_OFFSET UNITYSDK_OFFSET(0x17B65070)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_5A997764392D3E95_OFFSET UNITYSDK_OFFSET(0x17B65200)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_5D7F9E033321DE65_OFFSET UNITYSDK_OFFSET(0x17B64A10)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_71C68880F0948F70_OFFSET UNITYSDK_OFFSET(0x17B64EC0)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x17B64870)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_BB68AE410C67C589_OFFSET UNITYSDK_OFFSET(0x17B652E0)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x17B64D50)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_C989E89E4FE289F7_OFFSET UNITYSDK_OFFSET(0x17B64670)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17B64CF0)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_E1400E4D7CE222C3_OFFSET UNITYSDK_OFFSET(0x17B65080)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x17B65060)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17B64CE0)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17B65300)
#define CLASS_1_48F9448A0DC1016A_METHOD_1_F73A90F086F5A538_OFFSET UNITYSDK_OFFSET(0x17B652B0)
#define CLASS_1_48F9448A0DC1016A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B64570)
#define CLASS_1_48F9448A0DC1016A__CTOR_OFFSET UNITYSDK_OFFSET(0x17B64560)

inline static constexpr unsigned int Class_1_48F9448A0DC1016A_TypeDefinitionIndex = 66817;

class Class_1_48F9448A0DC1016A : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F9448A0DC1016A_TypeDefinitionIndex)->GetStaticField(0xAEA0);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F9448A0DC1016A_TypeDefinitionIndex)->GetStaticField(0xAEA4);
	}
	::Il2CppArray<::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8>* Field_1_7; // 0x10
	::System::Single Field_1_6; // 0x18
	::System::Single Field_1_3; // 0x1C
	::UnityEngine::Matrix4x4 Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_5; // 0x60
	::UnityEngine::Bounds Field_1_0; // 0x6C
	::System::Single Field_1_4; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A__CCTOR_OFFSET))();
	}

	::UnityEngine::BoundingSphere Method_1_0556CC6FFC162C0D(::System::Int32 a1)
	{
		return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_0556CC6FFC162C0D_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_A2846FC5EA0763C6_OFFSET))(this);
	}

	::System::Void Method_1_199FD87A7080D723(::System::Action_1<::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8>*))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_199FD87A7080D723_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_5D7F9E033321DE65(::System::Single& a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_5D7F9E033321DE65_OFFSET))(this, a1);
	}

	::UnityEngine::BoundingSphere Method_1_C989E89E4FE289F7(::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_C989E89E4FE289F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Void Method_1_71C68880F0948F70(::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_71C68880F0948F70_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_580E7E6201D1B663(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_580E7E6201D1B663_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E1400E4D7CE222C3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_E1400E4D7CE222C3_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_1_F73A90F086F5A538()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_F73A90F086F5A538_OFFSET))(this);
	}

	::System::Void Method_1_BB68AE410C67C589(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_BB68AE410C67C589_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5A997764392D3E95(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_5A997764392D3E95_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_1_169D055FFBA99416(::UnityEngine::Matrix4x4 a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_METHOD_1_169D055FFBA99416_OFFSET))(this, a1);
	}
};
