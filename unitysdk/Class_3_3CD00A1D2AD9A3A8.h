#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BillboardController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x10AFA200)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_26A1CC793D7F765C_OFFSET UNITYSDK_OFFSET(0x10AFA770)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_3D89102E85987FAC_OFFSET UNITYSDK_OFFSET(0x10AFADF0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10AFA690)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10AFBB40)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10AFBC10)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x10AFBC70)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10AFBAE0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x10AF9B30)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9B65AEC684B9E219_OFFSET UNITYSDK_OFFSET(0x10AFA850)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x10AF9AE0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x10AFA170)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10AFA050)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B50CA01B5EDC1228_OFFSET UNITYSDK_OFFSET(0x10AFA5F0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_BE28ABCD589AA602_OFFSET UNITYSDK_OFFSET(0x10AFB420)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0x10AFA270)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10AFA130)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10AFA710)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10AFA010)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x10AFA380)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CF913A5B5B554D96_OFFSET UNITYSDK_OFFSET(0x10AFA7B0)
#define CLASS_3_3CD00A1D2AD9A3A8_TICK_OFFSET UNITYSDK_OFFSET(0x10AFA320)
#define CLASS_3_3CD00A1D2AD9A3A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AF9980)
#define CLASS_3_3CD00A1D2AD9A3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFBAD0)
#define CLASS_3_3CD00A1D2AD9A3A8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10AFBBA0)

inline static constexpr unsigned int Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex = 65270;

class Class_3_3CD00A1D2AD9A3A8 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::UnityEngine::Material** StaticGet_Field_3_30()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x153C0);
	}
	static ::System::Int32* StaticGet_Field_3_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6040);
	}
	static ::System::Int32* StaticGet_Field_3_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6044);
	}
	static ::System::Int32* StaticGet_Field_3_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6048);
	}
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x604C);
	}
	static ::System::Int32* StaticGet_Field_3_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6050);
	}
	static ::System::Int32* StaticGet_Field_3_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6054);
	}
	static ::System::Int32* StaticGet_Field_3_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6058);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x605C);
	}
	static ::System::Int32* StaticGet_Field_3_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6060);
	}
	static ::System::Int32* StaticGet_Field_3_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6064);
	}
	static ::System::Int32* StaticGet_Field_3_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6068);
	}
	static ::System::Int32* StaticGet_Field_3_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x606C);
	}
	static ::System::Int32* StaticGet_Field_3_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6070);
	}
	static ::System::Int32* StaticGet_Field_3_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6074);
	}
	static ::System::Int32* StaticGet_Field_3_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6078);
	}
	static ::System::Int32* StaticGet_Field_3_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x607C);
	}
	static ::System::Int32* StaticGet_Field_3_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6080);
	}
	static ::System::Int32* StaticGet_Field_3_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x6084);
	}
	::UnityEngine::Material* Field_3_8; // 0x38
	::UnityEngine::Transform* Field_3_5; // 0x40
	::UnityEngine::Transform* Field_3_9; // 0x48
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_1; // 0x50
	::UnityEngine::MaterialPropertyBlock* Field_3_2; // 0x58
	::System::Boolean Field_3_11; // 0x60
	::System::Boolean Field_3_10; // 0x61
	::System::Single Field_3_4; // 0x64
	::System::Single Field_3_3; // 0x68
	::System::Single Field_3_7; // 0x6C
	::UnityEngine::Vector3 Field_3_6; // 0x70
	::System::Single Field_3_0; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_C6C47C9FFA92653C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_C6C47C9FFA92653C_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_B50CA01B5EDC1228()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B50CA01B5EDC1228_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::UnityEngine::Material* Method_3_CF913A5B5B554D96(::UnityEngine::Renderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CF913A5B5B554D96_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC32BB23BD684E52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CC32BB23BD684E52_OFFSET))(this);
	}

	::System::Void Method_3_9B65AEC684B9E219(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9B65AEC684B9E219_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D89102E85987FAC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_3D89102E85987FAC_OFFSET))(this, a1);
	}

	::System::Void Method_3_BE28ABCD589AA602(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_BE28ABCD589AA602_OFFSET))(this, a1);
	}

	::RPG::Client::BillboardController* Method_3_26A1CC793D7F765C()
	{
		return ((::RPG::Client::BillboardController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_26A1CC793D7F765C_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}
};
