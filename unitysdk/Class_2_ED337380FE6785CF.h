#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_418DB03A1CEC7DD0;
class Class_2_0007C788FCAA0AB9;
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_ED337380FE6785CF_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1057B890)
#define CLASS_2_ED337380FE6785CF_METHOD_2_29CCD26C6A3DEA02_OFFSET UNITYSDK_OFFSET(0x1057B8F0)
#define CLASS_2_ED337380FE6785CF_METHOD_2_41F5D9095E4C13FF_OFFSET UNITYSDK_OFFSET(0x1057B960)
#define CLASS_2_ED337380FE6785CF_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1057AE20)
#define CLASS_2_ED337380FE6785CF_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1057AE90)
#define CLASS_2_ED337380FE6785CF_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1057B630)
#define CLASS_2_ED337380FE6785CF_METHOD_2_4D7631A19A128142_OFFSET UNITYSDK_OFFSET(0x1057AEF0)
#define CLASS_2_ED337380FE6785CF_METHOD_2_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0x1057B700)
#define CLASS_2_ED337380FE6785CF_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1057B6B0)
#define CLASS_2_ED337380FE6785CF_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1057BA30)
#define CLASS_2_ED337380FE6785CF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1057B9D0)
#define CLASS_2_ED337380FE6785CF_METHOD_2_82C645E1A0330B09_OFFSET UNITYSDK_OFFSET(0x1057A220)
#define CLASS_2_ED337380FE6785CF_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x1057B110)
#define CLASS_2_ED337380FE6785CF_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1057BAA0)
#define CLASS_2_ED337380FE6785CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1057B8A0)
#define CLASS_2_ED337380FE6785CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1057A1C0)

inline static constexpr unsigned int Class_2_ED337380FE6785CF_TypeDefinitionIndex = 45898;

class Class_2_ED337380FE6785CF : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED337380FE6785CF_TypeDefinitionIndex)->GetStaticField(0x7260);
	}
	static ::System::Int32* StaticGet_Field_2_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED337380FE6785CF_TypeDefinitionIndex)->GetStaticField(0x7264);
	}
	::RPG::GameCore::CharacterModelScaleEventParam* Field_2_15; // 0x68
	::Class_2_0007C788FCAA0AB9* Field_2_14; // 0x70
	::Class_1_418DB03A1CEC7DD0* Field_2_10; // 0x78
	::System::Single Field_2_9; // 0x80
	::UnityEngine::Vector3 Field_2_2; // 0x84
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x90
	::System::Single Field_2_8; // 0x94
	::System::Single Field_2_7; // 0x98
	::System::Single Field_2_5; // 0x9C
	::System::Single Field_2_4; // 0xA0
	::UnityEngine::Vector3 Field_2_1; // 0xA4
	::System::Single Field_2_6; // 0xB0
	::System::Single Field_2_13; // 0xB4
	::System::Boolean Field_2_16; // 0xB8
	::System::Boolean Field_2_3; // 0xB9

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF__CCTOR_OFFSET))();
	}

	::System::Void Method_2_82C645E1A0330B09(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_82C645E1A0330B09_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4D7631A19A128142(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_4D7631A19A128142_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_29CCD26C6A3DEA02(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_29CCD26C6A3DEA02_OFFSET))(this, P0, P1);
	}

	::System::Boolean Method_2_41F5D9095E4C13FF(::System::Single P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_41F5D9095E4C13FF_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}
};
