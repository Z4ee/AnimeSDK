#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14287E50)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_0772661406F51ADB_OFFSET UNITYSDK_OFFSET(0x14287290)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_1B7FE474DC0310B3_OFFSET UNITYSDK_OFFSET(0x14287D30)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x14286C60)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0x14286C00)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_1_OFFSET UNITYSDK_OFFSET(0x14287DD0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x14287910)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7C43CA1991671A41_OFFSET UNITYSDK_OFFSET(0x14286A10)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7FA4071B282207B3_OFFSET UNITYSDK_OFFSET(0x14287E90)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x14287A30)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x14287700)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_D12268C88ECA46C9_OFFSET UNITYSDK_OFFSET(0x14287990)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET UNITYSDK_OFFSET(0x14287170)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x14286E60)
#define CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET UNITYSDK_OFFSET(0x14288160)
#define CLASS_1_A8AA94B0A861166B__CTOR_OFFSET UNITYSDK_OFFSET(0x14288150)

inline static constexpr unsigned int Class_1_A8AA94B0A861166B_TypeDefinitionIndex = 65616;

class Class_1_A8AA94B0A861166B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x303F0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x303F8);
	}
	static ::Class_1_A8AA94B0A861166B** StaticGet_Field_1_2()
	{
		return (::Class_1_A8AA94B0A861166B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30400);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30408);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30410);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30418);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30420);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30428);
	}
	static ::System::String** StaticGet_Field_1_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30430);
	}
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30438);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x30440);
	}
	::RPG::GameCore::GameEntity* Field_1_11; // 0x10
	::RPG::Client::SpecialVisionSystem* Field_1_12; // 0x18
	::RPG::GameCore::EventManager* Field_1_13; // 0x20
	::RPG::GameCore::GameEntity* Field_1_14; // 0x28
	::System::String* Field_1_15; // 0x30
	::System::Int32 Field_1_16; // 0x38
	::System::UInt32 Field_1_17; // 0x3C
	::System::UInt32 Field_1_18; // 0x40
	::System::Boolean Field_1_19; // 0x44
	::System::Boolean Field_1_20; // 0x45
	::System::Boolean Field_1_21; // 0x46
	::System::Boolean Field_1_22; // 0x47
	::System::Single Field_1_23; // 0x48
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

	::System::Boolean Method_1_0772661406F51ADB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_0772661406F51ADB_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B7FE474DC0310B3(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_1B7FE474DC0310B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D12268C88ECA46C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_D12268C88ECA46C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA4071B282207B3(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_7FA4071B282207B3_OFFSET))(this, a1);
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
