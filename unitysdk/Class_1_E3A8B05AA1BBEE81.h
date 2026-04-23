#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertAbilityFinishSource.h"
#include "unitysdk/RPG/GameCore/InsertAbilityState.h"
#include "unitysdk/Struct_2_52A902145F5BE513_3.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_A2D8E5AB4B623162;
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_E3A8B05AA1BBEE81_CLEAR_OFFSET UNITYSDK_OFFSET(0x117AD540)
#define CLASS_1_E3A8B05AA1BBEE81_METHOD_1_538706B04C2A4407_OFFSET UNITYSDK_OFFSET(0x117AD600)
#define CLASS_1_E3A8B05AA1BBEE81_METHOD_1_AC7CF00B57D864AB_OFFSET UNITYSDK_OFFSET(0x117AD800)
#define CLASS_1_E3A8B05AA1BBEE81_TOSTRING_OFFSET UNITYSDK_OFFSET(0x117AD710)
#define CLASS_1_E3A8B05AA1BBEE81__CTOR_OFFSET UNITYSDK_OFFSET(0x117ADC70)
#define CLASS_1_E3A8B05AA1BBEE81___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x117ADC80)

inline static constexpr unsigned int Class_1_E3A8B05AA1BBEE81_TypeDefinitionIndex = 51818;

class Class_1_E3A8B05AA1BBEE81 : public ::System::Object
{
public:
	::RPG::GameCore::SkillCharacterComponent* Field_1_1; // 0x10
	::Struct_2_52A902145F5BE513_3 Field_1_6; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_1_9; // 0x88
	::Class_1_A2D8E5AB4B623162* Field_1_2; // 0x90
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x98
	::System::Int32 Field_1_7; // 0xA0
	::RPG::GameCore::InsertAbilityFinishSource Field_1_8; // 0xA4
	::System::Boolean Field_1_5; // 0xA8
	::System::Boolean Field_1_4; // 0xA9
	::RPG::GameCore::InsertAbilityState Field_1_3; // 0xAA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A8B05AA1BBEE81__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A8B05AA1BBEE81_CLEAR_OFFSET))(this);
	}

	::System::Int32 Method_1_538706B04C2A4407(::Class_1_E3A8B05AA1BBEE81* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + CLASS_1_E3A8B05AA1BBEE81_METHOD_1_538706B04C2A4407_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A8B05AA1BBEE81_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_AC7CF00B57D864AB(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_E3A8B05AA1BBEE81_METHOD_1_AC7CF00B57D864AB_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3A8B05AA1BBEE81___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
