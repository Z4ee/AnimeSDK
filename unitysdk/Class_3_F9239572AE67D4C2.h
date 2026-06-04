#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BillboardController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_F9239572AE67D4C2_METHOD_3_0F5EA1E3EA471027_OFFSET UNITYSDK_OFFSET(0x142CA150)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x142C8F50)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x142C93C0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x142CA870)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x142CA930)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x142CA990)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x142CA810)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x142C8880)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_81F053FDA5541136_OFFSET UNITYSDK_OFFSET(0x142C9AF0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x142C8EC0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_AD4DBD7C36DD8F3C_OFFSET UNITYSDK_OFFSET(0x142C9580)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x142C88D0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x142C8DA0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_B50CA01B5EDC1228_OFFSET UNITYSDK_OFFSET(0x142C9330)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_C027CF3DBDF58558_OFFSET UNITYSDK_OFFSET(0x142C90C0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0x142C8FC0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x142C8E80)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x142C9440)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142C8D60)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_CF913A5B5B554D96_OFFSET UNITYSDK_OFFSET(0x142C94E0)
#define CLASS_3_F9239572AE67D4C2_METHOD_3_F88A87B4F0458125_OFFSET UNITYSDK_OFFSET(0x142C94A0)
#define CLASS_3_F9239572AE67D4C2_TICK_OFFSET UNITYSDK_OFFSET(0x142C9060)
#define CLASS_3_F9239572AE67D4C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x142C8720)
#define CLASS_3_F9239572AE67D4C2__CTOR_OFFSET UNITYSDK_OFFSET(0x142CA800)
#define CLASS_3_F9239572AE67D4C2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x142CA8D0)

inline static constexpr unsigned int Class_3_F9239572AE67D4C2_TypeDefinitionIndex = 66197;

class Class_3_F9239572AE67D4C2 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::UnityEngine::Material** StaticGet_Field_3_0()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x28240);
	}
	static ::System::Int32* StaticGet_Field_3_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x9790);
	}
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x9794);
	}
	static ::System::Int32* StaticGet_Field_3_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x9798);
	}
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x979C);
	}
	static ::System::Int32* StaticGet_Field_3_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97A0);
	}
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97A4);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97A8);
	}
	static ::System::Int32* StaticGet_Field_3_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97AC);
	}
	static ::System::Int32* StaticGet_Field_3_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97B0);
	}
	static ::System::Int32* StaticGet_Field_3_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97B4);
	}
	static ::System::Int32* StaticGet_Field_3_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97B8);
	}
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97BC);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97C0);
	}
	static ::System::Int32* StaticGet_Field_3_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97C4);
	}
	static ::System::Int32* StaticGet_Field_3_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97C8);
	}
	static ::System::Int32* StaticGet_Field_3_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97CC);
	}
	static ::System::Int32* StaticGet_Field_3_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97D0);
	}
	static ::System::Int32* StaticGet_Field_3_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9239572AE67D4C2_TypeDefinitionIndex)->GetStaticField(0x97D4);
	}
	::UnityEngine::Transform* Field_3_19; // 0x38
	::UnityEngine::Material* Field_3_20; // 0x40
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_21; // 0x48
	::UnityEngine::Transform* Field_3_22; // 0x50
	::UnityEngine::MaterialPropertyBlock* Field_3_23; // 0x58
	::UnityEngine::Vector3 Field_3_24; // 0x60
	::System::Single Field_3_25; // 0x6C
	::System::Boolean Field_3_26; // 0x70
	::System::Boolean Field_3_27; // 0x71
	::System::Single Field_3_28; // 0x74
	::System::Single Field_3_29; // 0x78
	::System::Single Field_3_30; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_C6C47C9FFA92653C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_C6C47C9FFA92653C_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_B50CA01B5EDC1228()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_B50CA01B5EDC1228_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::UnityEngine::Material* Method_3_CF913A5B5B554D96(::UnityEngine::Renderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_CF913A5B5B554D96_OFFSET))(this, a1);
	}

	::System::Void Method_3_C027CF3DBDF58558()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_C027CF3DBDF58558_OFFSET))(this);
	}

	::System::Void Method_3_AD4DBD7C36DD8F3C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_AD4DBD7C36DD8F3C_OFFSET))(this, a1);
	}

	::System::Void Method_3_81F053FDA5541136(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_81F053FDA5541136_OFFSET))(this, a1);
	}

	::System::Void Method_3_0F5EA1E3EA471027(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_0F5EA1E3EA471027_OFFSET))(this, a1);
	}

	::RPG::Client::BillboardController* Method_3_F88A87B4F0458125()
	{
		return ((::RPG::Client::BillboardController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_F88A87B4F0458125_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9239572AE67D4C2_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}
};
