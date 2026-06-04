#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_1_418DB03A1CEC7DD0;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7C53C831730B590C_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xA8C4480)
#define CLASS_2_7C53C831730B590C_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA8C44E0)
#define CLASS_2_7C53C831730B590C_METHOD_2_BBE3E1E8BB1B6701_OFFSET UNITYSDK_OFFSET(0xA8C44F0)
#define CLASS_2_7C53C831730B590C_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA8C3E10)
#define CLASS_2_7C53C831730B590C_METHOD_2_ED8DEF1B3CE0066D_OFFSET UNITYSDK_OFFSET(0xA8C3E60)
#define CLASS_2_7C53C831730B590C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8C4490)
#define CLASS_2_7C53C831730B590C__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C3DB0)

inline static constexpr unsigned int Class_2_7C53C831730B590C_TypeDefinitionIndex = 53275;

class Class_2_7C53C831730B590C : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7C53C831730B590C_TypeDefinitionIndex)->GetStaticField(0x13E50);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7C53C831730B590C_TypeDefinitionIndex)->GetStaticField(0x13E54);
	}
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x68
	::Class_1_418DB03A1CEC7DD0* Field_2_3; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_ED8DEF1B3CE0066D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C_METHOD_2_ED8DEF1B3CE0066D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_BBE3E1E8BB1B6701(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7C53C831730B590C_METHOD_2_BBE3E1E8BB1B6701_OFFSET))(this, a1, a2);
	}
};
