#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFBD860)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xAFBC6A0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0xAFBC640)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_58723AF19337DFD2_OFFSET UNITYSDK_OFFSET(0xAFBCCD0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_5B427BE6315F9B40_OFFSET UNITYSDK_OFFSET(0xAFBD3A0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7C43CA1991671A41_OFFSET UNITYSDK_OFFSET(0xAFBC440)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7FA4071B282207B3_OFFSET UNITYSDK_OFFSET(0xAFBD8A0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xAFBD440)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xAFBD100)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_B01F5292A1B6EB04_1_OFFSET UNITYSDK_OFFSET(0xAFBD7E0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0xAFBD320)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET UNITYSDK_OFFSET(0xAFBCBB0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xAFBC8A0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_EC67717BCC1BF60F_OFFSET UNITYSDK_OFFSET(0xAFBD740)
#define CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFBDB70)
#define CLASS_1_A8AA94B0A861166B__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBDB60)

inline static constexpr unsigned int Class_1_A8AA94B0A861166B_TypeDefinitionIndex = 64245;

class Class_1_A8AA94B0A861166B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455C0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455C8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455D0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455D8);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455E0);
	}
	static ::Class_1_A8AA94B0A861166B** StaticGet_Field_1_5()
	{
		return (::Class_1_A8AA94B0A861166B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455E8);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455F0);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x455F8);
	}
	static ::System::String** StaticGet_Field_1_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x45600);
	}
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x45608);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x45610);
	}
	::RPG::GameCore::EventManager* Field_1_11; // 0x10
	::RPG::GameCore::GameEntity* Field_1_12; // 0x18
	::RPG::GameCore::GameEntity* Field_1_13; // 0x20
	::RPG::Client::SpecialVisionSystem* Field_1_14; // 0x28
	::System::String* Field_1_15; // 0x30
	::System::UInt32 Field_1_16; // 0x38
	::System::Boolean Field_1_17; // 0x3C
	::System::Boolean Field_1_18; // 0x3D
	::System::Boolean Field_1_19; // 0x3E
	::System::Boolean Field_1_20; // 0x3F
	::System::Int32 Field_1_21; // 0x40
	::System::Single Field_1_22; // 0x44
	::System::UInt32 Field_1_23; // 0x48
	::System::UInt32 Field_1_24; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7C43CA1991671A41(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_7C43CA1991671A41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46FADA273D811721(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Boolean Method_1_58723AF19337DFD2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_58723AF19337DFD2_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_B01F5292A1B6EB04_OFFSET))(this);
	}

	::System::Void Method_1_B01F5292A1B6EB04_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_B01F5292A1B6EB04_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EC67717BCC1BF60F(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_EC67717BCC1BF60F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B427BE6315F9B40(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_5B427BE6315F9B40_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA4071B282207B3(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_7FA4071B282207B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4DA5D82D6238D9E(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
