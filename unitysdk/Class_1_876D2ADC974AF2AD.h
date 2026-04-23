#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_876D2ADC974AF2AD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11C25830)
#define CLASS_1_876D2ADC974AF2AD_METHOD_1_22C50B82246C7B4D_OFFSET UNITYSDK_OFFSET(0x11C26A80)
#define CLASS_1_876D2ADC974AF2AD_METHOD_1_6244C768AF47A896_OFFSET UNITYSDK_OFFSET(0x11C26670)
#define CLASS_1_876D2ADC974AF2AD_METHOD_1_791958097AF388C4_1_OFFSET UNITYSDK_OFFSET(0x11C26C80)
#define CLASS_1_876D2ADC974AF2AD_METHOD_1_791958097AF388C4_OFFSET UNITYSDK_OFFSET(0x11C26EA0)
#define CLASS_1_876D2ADC974AF2AD_METHOD_1_D13FC730B9E984EF_OFFSET UNITYSDK_OFFSET(0x11C26880)
#define CLASS_1_876D2ADC974AF2AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C27080)
#define CLASS_1_876D2ADC974AF2AD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C25810)

inline static constexpr unsigned int Class_1_876D2ADC974AF2AD_TypeDefinitionIndex = 70971;

class Class_1_876D2ADC974AF2AD : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_876D2ADC974AF2AD_TypeDefinitionIndex)->GetStaticField(0xC9C0);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_876D2ADC974AF2AD_TypeDefinitionIndex)->GetStaticField(0xC9C4);
	}
	::Class_3_F4528A5C0F861AF2* Field_1_1; // 0x10
	::Class_2_43D1AA62A6D00FFF* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_6244C768AF47A896(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD_METHOD_1_6244C768AF47A896_OFFSET))(this, a1);
	}

	::System::Void Method_1_791958097AF388C4(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD_METHOD_1_791958097AF388C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_791958097AF388C4_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD_METHOD_1_791958097AF388C4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D13FC730B9E984EF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD_METHOD_1_D13FC730B9E984EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_22C50B82246C7B4D(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_876D2ADC974AF2AD_METHOD_1_22C50B82246C7B4D_OFFSET))(this, a1);
	}
};
