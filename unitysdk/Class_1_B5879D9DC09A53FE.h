#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_33.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::GameCore::Match3 { class FightConfig; }
namespace RPG::GameCore::Match3 { class Match3Config; }
namespace System { class String; }

#define CLASS_1_B5879D9DC09A53FE_METHOD_1_9794672F33038169_OFFSET UNITYSDK_OFFSET(0x1AA45770)
#define CLASS_1_B5879D9DC09A53FE_METHOD_1_A1B97AA699547A13_OFFSET UNITYSDK_OFFSET(0x1AA456B0)

inline static constexpr unsigned int Class_1_B5879D9DC09A53FE_TypeDefinitionIndex = 76083;

class Class_1_B5879D9DC09A53FE : public ::System::Object
{
public:
	static ::RPG::GameCore::Match3::Match3Config** StaticGet_ENNPOOOINPG()
	{
		return (::RPG::GameCore::Match3::Match3Config**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5879D9DC09A53FE_TypeDefinitionIndex)->GetStaticField(0x323A0);
	}
	static ::RPG::GameCore::Match3::FightConfig** StaticGet_CEPDAKAHPEJ()
	{
		return (::RPG::GameCore::Match3::FightConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5879D9DC09A53FE_TypeDefinitionIndex)->GetStaticField(0x323A8);
	}
	static ::System::Boolean* StaticGet_ALJBHFLECLB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5879D9DC09A53FE_TypeDefinitionIndex)->GetStaticField(0xD2D0);
	}
	// static const ::System::String* JBGNAPEPFIC; // 0x0
	// static const ::System::String* KDDKDKKNKIK; // 0x0
	// static const ::System::String* EOGEGGOLFME; // 0x0
	// static const ::System::String* FOIICGDMFKK; // 0x0
	// static const ::System::Single BGOOADHGAKE; // 0x0

	static ::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState Method_1_A1B97AA699547A13(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState(*)(::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_1_B5879D9DC09A53FE_METHOD_1_A1B97AA699547A13_OFFSET))(a1);
	}

	static ::RPG::Client::MatchThreeGameOpponent* Method_1_9794672F33038169(::RPG::Client::LittleGame::Match3::OpponentRole a1)
	{
		return ((::RPG::Client::MatchThreeGameOpponent*(*)(::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_1_B5879D9DC09A53FE_METHOD_1_9794672F33038169_OFFSET))(a1);
	}
};
