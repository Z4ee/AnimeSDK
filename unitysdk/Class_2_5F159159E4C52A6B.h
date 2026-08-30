#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_418DB03A1CEC7DD0;
class Class_2_0007C788FCAA0AB9_1;
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5F159159E4C52A6B_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17DE0A80)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x17DE0000)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x17DE0070)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17DE0820)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_4D7631A19A128142_OFFSET UNITYSDK_OFFSET(0x17DE00D0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0x17DE08F0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_82C645E1A0330B09_OFFSET UNITYSDK_OFFSET(0x17DDF430)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x17DE02F0)
#define CLASS_2_5F159159E4C52A6B_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x17DE08A0)
#define CLASS_2_5F159159E4C52A6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DE0A90)
#define CLASS_2_5F159159E4C52A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDF3D0)

inline static constexpr unsigned int Class_2_5F159159E4C52A6B_TypeDefinitionIndex = 57192;

class Class_2_5F159159E4C52A6B : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_ILDMDABEPEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F159159E4C52A6B_TypeDefinitionIndex)->GetStaticField(0x4440);
	}
	static ::System::Int32* StaticGet_COKLIJKIGAN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F159159E4C52A6B_TypeDefinitionIndex)->GetStaticField(0x4444);
	}
	::Class_1_418DB03A1CEC7DD0* KCIMDDOEHJE; // 0x68
	::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x70
	::Class_2_0007C788FCAA0AB9_1* JIFOGMDGJAP; // 0x78
	::System::Single CEEAGJMFPLO; // 0x80
	::System::Boolean EHJOLABCMOD; // 0x84
	::System::Boolean JALFBJDPLOG; // 0x85
	::System::Single FAPCGFINDFF; // 0x88
	::UnityEngine::Vector3 EKKPMIOJMGM; // 0x8C
	::System::Single JFJOLFHJKNF; // 0x98
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x9C
	::System::Single NMMAFJCIBHG; // 0xA8
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xAC
	::System::Single HIHIBOIKOOM; // 0xB0
	::System::Single BGKNMHEKMIA; // 0xB4
	::System::Single BFGGMAHHOLF; // 0xB8

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
