#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_0AAFEDEA798400CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11572F60)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0x11571D20)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_4E80C32BD992E8BD_OFFSET UNITYSDK_OFFSET(0x11572AA0)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_58723AF19337DFD2_OFFSET UNITYSDK_OFFSET(0x115723E0)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_58FD8BDD015C3AAA_OFFSET UNITYSDK_OFFSET(0x11572FA0)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_7447CBAA6A2E5916_OFFSET UNITYSDK_OFFSET(0x11572E40)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x11572B40)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x11572810)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_B1DAA36D109ACA08_OFFSET UNITYSDK_OFFSET(0x11572280)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_BC2DC3CD22DB8F47_OFFSET UNITYSDK_OFFSET(0x11571B40)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x11571D80)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x11571F70)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_EBEE0D0A222A8264_1_OFFSET UNITYSDK_OFFSET(0x11572EE0)
#define CLASS_1_0AAFEDEA798400CF_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x11572A20)
#define CLASS_1_0AAFEDEA798400CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11573270)
#define CLASS_1_0AAFEDEA798400CF__CTOR_OFFSET UNITYSDK_OFFSET(0x11573260)

inline static constexpr unsigned int Class_1_0AAFEDEA798400CF_TypeDefinitionIndex = 56085;

class Class_1_0AAFEDEA798400CF : public ::System::Object
{
public:
	static ::Class_1_0AAFEDEA798400CF** StaticGet_Field_1_21()
	{
		return (::Class_1_0AAFEDEA798400CF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31150);
	}
	static ::System::String** StaticGet_Field_1_23()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31158);
	}
	static ::System::String** StaticGet_Field_1_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31160);
	}
	static ::System::String** StaticGet_Field_1_24()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31168);
	}
	static ::System::String** StaticGet_Field_1_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31170);
	}
	static ::System::String** StaticGet_Field_1_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31178);
	}
	static ::System::String** StaticGet_Field_1_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31180);
	}
	static ::System::String** StaticGet_Field_1_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31188);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31190);
	}
	static ::System::String** StaticGet_Field_1_16()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x31198);
	}
	static ::System::String** StaticGet_Field_1_20()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AAFEDEA798400CF_TypeDefinitionIndex)->GetStaticField(0x311A0);
	}
	::System::String* Field_1_9; // 0x10
	::RPG::GameCore::EventManager* Field_1_7; // 0x18
	::RPG::GameCore::GameEntity* Field_1_5; // 0x20
	::RPG::Client::SpecialVisionSystem* Field_1_6; // 0x28
	::RPG::GameCore::GameEntity* Field_1_2; // 0x30
	::System::UInt32 Field_1_3; // 0x38
	::System::Int32 Field_1_12; // 0x3C
	::System::Single Field_1_11; // 0x40
	::System::Boolean Field_1_1; // 0x44
	::System::Boolean Field_1_0; // 0x45
	::System::Boolean Field_1_10; // 0x46
	::System::Boolean Field_1_13; // 0x47
	::System::UInt32 Field_1_4; // 0x48
	::System::UInt32 Field_1_8; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF__CCTOR_OFFSET))();
	}

	::System::Void Method_1_BC2DC3CD22DB8F47(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_BC2DC3CD22DB8F47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46FADA273D811721(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_46FADA273D811721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean Method_1_58723AF19337DFD2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_58723AF19337DFD2_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_EBEE0D0A222A8264_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7447CBAA6A2E5916(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_7447CBAA6A2E5916_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E80C32BD992E8BD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_4E80C32BD992E8BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_58FD8BDD015C3AAA(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_58FD8BDD015C3AAA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1DAA36D109ACA08(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_B1DAA36D109ACA08_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAFEDEA798400CF_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
