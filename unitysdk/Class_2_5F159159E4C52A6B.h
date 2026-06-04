#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_418DB03A1CEC7DD0;
class Class_2_0007C788FCAA0AB9;
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5F159159E4C52A6B_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xD7D23D0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xD7D1950)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xD7D19C0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD7D2170)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4D7631A19A128142_OFFSET UNITYSDK_OFFSET(0xD7D1A20)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0xD7D2240)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD7D2550)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD7D24F0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xD7D25B0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_82C645E1A0330B09_OFFSET UNITYSDK_OFFSET(0xD7D0D70)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0xD7D2490)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xD7D1C40)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_BBE3E1E8BB1B6701_OFFSET UNITYSDK_OFFSET(0xD7D2430)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xD7D21F0)
#define CLASS_2_5F159159E4C52A6B__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7D23E0)
#define CLASS_2_5F159159E4C52A6B__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D0D10)

inline static constexpr unsigned int Class_2_5F159159E4C52A6B_TypeDefinitionIndex = 53256;

class Class_2_5F159159E4C52A6B : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F159159E4C52A6B_TypeDefinitionIndex)->GetStaticField(0x142B0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F159159E4C52A6B_TypeDefinitionIndex)->GetStaticField(0x142B4);
	}
	::Class_2_0007C788FCAA0AB9* Field_2_2; // 0x68
	::RPG::GameCore::CharacterModelScaleEventParam* Field_2_3; // 0x70
	::Class_1_418DB03A1CEC7DD0* Field_2_4; // 0x78
	::System::Single Field_2_5; // 0x80
	::UnityEngine::Vector3 Field_2_6; // 0x84
	::System::Single Field_2_7; // 0x90
	::System::Single Field_2_8; // 0x94
	::System::Boolean Field_2_9; // 0x98
	::System::Boolean Field_2_10; // 0x99
	::UnityEngine::Vector3 Field_2_11; // 0x9C
	::System::Single Field_2_12; // 0xA8
	::System::Single Field_2_13; // 0xAC
	::System::Single Field_2_14; // 0xB0
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xB4
	::System::Single Field_2_16; // 0xB8

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B__CCTOR_OFFSET))();
	}

	::System::Void Method_2_82C645E1A0330B09(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_82C645E1A0330B09_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4D7631A19A128142(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_4D7631A19A128142_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_BBE3E1E8BB1B6701(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_BBE3E1E8BB1B6701_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_867F85CA133E06EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F159159E4C52A6B_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}
};
