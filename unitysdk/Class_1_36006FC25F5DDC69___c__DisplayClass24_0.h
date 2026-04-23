#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;

#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1292FD60)
#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS24_0___GETCANDIDATESBYTEAMTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x12933680)

inline static constexpr unsigned int Class_1_36006FC25F5DDC69___c__DisplayClass24_0_TypeDefinitionIndex = 71372;

class Class_1_36006FC25F5DDC69___c__DisplayClass24_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType teamType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetCandidatesByTeamType_b__0(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS24_0___GETCANDIDATESBYTEAMTYPE_B__0_OFFSET))(this, soldier);
	}
};
