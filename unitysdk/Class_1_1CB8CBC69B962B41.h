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

#define CLASS_1_1CB8CBC69B962B41_CLEAR_OFFSET UNITYSDK_OFFSET(0x1354DAD0)
#define CLASS_1_1CB8CBC69B962B41_METHOD_1_05403F8C3D5C4318_OFFSET UNITYSDK_OFFSET(0x1354DB80)
#define CLASS_1_1CB8CBC69B962B41_METHOD_1_21875F771F15D8A8_OFFSET UNITYSDK_OFFSET(0x1354DD80)
#define CLASS_1_1CB8CBC69B962B41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1354DC90)
#define CLASS_1_1CB8CBC69B962B41__CTOR_OFFSET UNITYSDK_OFFSET(0x1354E1F0)
#define CLASS_1_1CB8CBC69B962B41___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1354E200)

inline static constexpr unsigned int Class_1_1CB8CBC69B962B41_TypeDefinitionIndex = 52492;

class Class_1_1CB8CBC69B962B41 : public ::System::Object
{
public:
	::RPG::GameCore::SkillCharacterComponent* Field_1_0; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_1; // 0x18
	::Class_1_A2D8E5AB4B623162* Field_1_2; // 0x20
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_3; // 0x28
	::Struct_2_52A902145F5BE513_3 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0xA0
	::RPG::GameCore::InsertAbilityFinishSource Field_1_6; // 0xA4
	::System::Boolean Field_1_7; // 0xA8
	::System::Boolean Field_1_8; // 0xA9
	::RPG::GameCore::InsertAbilityState Field_1_9; // 0xAA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB8CBC69B962B41__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB8CBC69B962B41_CLEAR_OFFSET))(this);
	}

	::System::Int32 Method_1_05403F8C3D5C4318(::Class_1_1CB8CBC69B962B41* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + CLASS_1_1CB8CBC69B962B41_METHOD_1_05403F8C3D5C4318_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB8CBC69B962B41_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_21875F771F15D8A8(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_1CB8CBC69B962B41_METHOD_1_21875F771F15D8A8_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB8CBC69B962B41___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
