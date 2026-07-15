#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_418DB03A1CEC7DD0;
class Class_2_0007C788FCAA0AB9_1;
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5F159159E4C52A6B_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x176D9ED0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x176D9460)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x176D94D0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x176D9C70)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4D7631A19A128142_OFFSET UNITYSDK_OFFSET(0x176D9530)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0x176D9D40)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_82C645E1A0330B09_OFFSET UNITYSDK_OFFSET(0x176D8890)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x176D9750)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x176D9CF0)
#define CLASS_2_5F159159E4C52A6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x176D9EE0)
#define CLASS_2_5F159159E4C52A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x176D8830)

inline static constexpr unsigned int Class_2_5F159159E4C52A6B_TypeDefinitionIndex = 54471;

class Class_2_5F159159E4C52A6B : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F159159E4C52A6B_TypeDefinitionIndex)->GetStaticField(0x13AD0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F159159E4C52A6B_TypeDefinitionIndex)->GetStaticField(0x13AD4);
	}
	::Class_1_418DB03A1CEC7DD0* Field_2_2; // 0x68
	::Class_2_0007C788FCAA0AB9_1* Field_2_3; // 0x70
	::RPG::GameCore::CharacterModelScaleEventParam* Field_2_4; // 0x78
	::System::Single Field_2_5; // 0x80
	::UnityEngine::Vector3 Field_2_6; // 0x84
	::UnityEngine::Vector3 Field_2_7; // 0x90
	::System::Single Field_2_8; // 0x9C
	::System::Single Field_2_9; // 0xA0
	::System::Boolean Field_2_10; // 0xA4
	::System::Boolean Field_2_11; // 0xA5
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
};
