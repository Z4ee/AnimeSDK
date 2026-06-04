#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::GameCore::Match3 { class FightConfig; }
namespace RPG::GameCore::Match3 { class Match3Config; }
namespace System { class String; }

#define CLASS_1_B5879D9DC09A53FE_METHOD_1_9794672F33038169_OFFSET UNITYSDK_OFFSET(0x13D1BBD0)
#define CLASS_1_B5879D9DC09A53FE_METHOD_1_A1B97AA699547A13_OFFSET UNITYSDK_OFFSET(0x13D1BB10)

inline static constexpr unsigned int Class_1_B5879D9DC09A53FE_TypeDefinitionIndex = 71134;

class Class_1_B5879D9DC09A53FE : public ::System::Object
{
public:
	static ::RPG::GameCore::Match3::FightConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::Match3::FightConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5879D9DC09A53FE_TypeDefinitionIndex)->GetStaticField(0x61F60);
	}
	static ::RPG::GameCore::Match3::Match3Config** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::Match3::Match3Config**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5879D9DC09A53FE_TypeDefinitionIndex)->GetStaticField(0x61F68);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5879D9DC09A53FE_TypeDefinitionIndex)->GetStaticField(0x13290);
	}
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0

	static ::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState Method_1_A1B97AA699547A13(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState(*)(::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_B5879D9DC09A53FE_METHOD_1_A1B97AA699547A13_OFFSET))(a1);
	}

	static ::RPG::Client::MatchThreeGameOpponent* Method_1_9794672F33038169(::RPG::Client::LittleGame::Match3::OpponentRole a1)
	{
		return ((::RPG::Client::MatchThreeGameOpponent*(*)(::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_1_B5879D9DC09A53FE_METHOD_1_9794672F33038169_OFFSET))(a1);
	}
};
