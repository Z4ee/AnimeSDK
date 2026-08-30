#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_6B60059019300BAD;

#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x165AA240)
#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS24_0___GETCANDIDATESBYTEAMTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x165AE1E0)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81___c__DisplayClass24_0_TypeDefinitionIndex = 77403;

class Class_1_B8FF829EFDD29B81___c__DisplayClass24_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType teamType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetCandidatesByTeamType_b__0(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS24_0___GETCANDIDATESBYTEAMTYPE_B__0_OFFSET))(this, a1);
	}
};
