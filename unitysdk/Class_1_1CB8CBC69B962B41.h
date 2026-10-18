#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertAbilityFinishSource.h"
#include "unitysdk/RPG/GameCore/InsertAbilityState.h"
#include "unitysdk/Struct_2_52A902145F5BE513_4.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_A2D8E5AB4B623162;
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_1CB8CBC69B962B41_CLEAR_OFFSET UNITYSDK_OFFSET(0x155A0120)
#define CLASS_1_1CB8CBC69B962B41_METHOD_1_05403F8C3D5C4318_OFFSET UNITYSDK_OFFSET(0x155A01E0)
#define CLASS_1_1CB8CBC69B962B41_METHOD_1_21875F771F15D8A8_OFFSET UNITYSDK_OFFSET(0x155A03F0)
#define CLASS_1_1CB8CBC69B962B41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x155A0300)
#define CLASS_1_1CB8CBC69B962B41__CTOR_OFFSET UNITYSDK_OFFSET(0x155A0880)

inline static constexpr unsigned int Class_1_1CB8CBC69B962B41_TypeDefinitionIndex = 56228;

class Class_1_1CB8CBC69B962B41 : public ::System::Object
{
public:
	::Struct_2_52A902145F5BE513_4 EJHODPJIFIN; // 0x10
	::Class_1_5F51D4049EA87B7B* OIAJDCOCNNM; // 0x80
	::Class_1_A2D8E5AB4B623162* HHGBFEPDMMJ; // 0x88
	::RPG::GameCore::TurnBasedAbilityComponent* FMGPEEBAGBK; // 0x90
	::RPG::GameCore::SkillCharacterComponent* JBPPALPNMAE; // 0x98
	::System::Boolean ABLGCIDFIKM; // 0xA0
	::RPG::GameCore::InsertAbilityState PEMMFHMLGGL; // 0xA1
	::System::Boolean OOBGNNNGEEC; // 0xA2
	::RPG::GameCore::InsertAbilityFinishSource JCCHNHKLCPN; // 0xA4
	::System::Int32 NALMBOOCCIN; // 0xA8

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
};
