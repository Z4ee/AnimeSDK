#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BillboardController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x9C63A10)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_26A1CC793D7F765C_OFFSET UNITYSDK_OFFSET(0x9C63F80)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_3D89102E85987FAC_OFFSET UNITYSDK_OFFSET(0x9C64600)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9C63EA0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9C65350)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9C65420)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x9C65480)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9C652F0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x9C63340)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9B65AEC684B9E219_OFFSET UNITYSDK_OFFSET(0x9C64060)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x9C632F0)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x9C63980)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9C63860)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_B50CA01B5EDC1228_OFFSET UNITYSDK_OFFSET(0x9C63E00)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_BE28ABCD589AA602_OFFSET UNITYSDK_OFFSET(0x9C64C30)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0x9C63A80)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9C63940)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9C63F20)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C63820)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x9C63B90)
#define CLASS_3_3CD00A1D2AD9A3A8_METHOD_3_CF913A5B5B554D96_OFFSET UNITYSDK_OFFSET(0x9C63FC0)
#define CLASS_3_3CD00A1D2AD9A3A8_TICK_OFFSET UNITYSDK_OFFSET(0x9C63B30)
#define CLASS_3_3CD00A1D2AD9A3A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C63190)
#define CLASS_3_3CD00A1D2AD9A3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x9C652E0)
#define CLASS_3_3CD00A1D2AD9A3A8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9C653B0)

inline static constexpr unsigned int Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex = 57983;

class Class_3_3CD00A1D2AD9A3A8 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::UnityEngine::Material** StaticGet_Field_3_30()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x46FF0);
	}
	static ::System::Int32* StaticGet_Field_3_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127A0);
	}
	static ::System::Int32* StaticGet_Field_3_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127A4);
	}
	static ::System::Int32* StaticGet_Field_3_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127A8);
	}
	static ::System::Int32* StaticGet_Field_3_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127AC);
	}
	static ::System::Int32* StaticGet_Field_3_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127B0);
	}
	static ::System::Int32* StaticGet_Field_3_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127B4);
	}
	static ::System::Int32* StaticGet_Field_3_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127B8);
	}
	static ::System::Int32* StaticGet_Field_3_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127BC);
	}
	static ::System::Int32* StaticGet_Field_3_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127C0);
	}
	static ::System::Int32* StaticGet_Field_3_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127C4);
	}
	static ::System::Int32* StaticGet_Field_3_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127C8);
	}
	static ::System::Int32* StaticGet_Field_3_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127CC);
	}
	static ::System::Int32* StaticGet_Field_3_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127D0);
	}
	static ::System::Int32* StaticGet_Field_3_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127D4);
	}
	static ::System::Int32* StaticGet_Field_3_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127D8);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127DC);
	}
	static ::System::Int32* StaticGet_Field_3_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127E0);
	}
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CD00A1D2AD9A3A8_TypeDefinitionIndex)->GetStaticField(0x127E4);
	}
	::UnityEngine::Transform* Field_3_5; // 0x38
	::UnityEngine::MaterialPropertyBlock* Field_3_2; // 0x40
	::UnityEngine::Transform* Field_3_9; // 0x48
	::UnityEngine::Material* Field_3_8; // 0x50
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_1; // 0x58
	::System::Boolean Field_3_10; // 0x60
	::System::Boolean Field_3_11; // 0x61
	::System::Single Field_3_4; // 0x64
	::System::Single Field_3_0; // 0x68
	::System::Single Field_3_7; // 0x6C
	::UnityEngine::Vector3 Field_3_6; // 0x70
	::System::Single Field_3_3; // 0x7C

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
