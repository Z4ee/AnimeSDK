#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47CFC2D7B3865B39;

#define CLASS_1_80ED5C578A50E90A___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC56A0)
#define CLASS_1_80ED5C578A50E90A___C__DISPLAYCLASS5_0___ONTEAMTOWERSNEWPLAYERSKILLMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x16DC59A0)

inline static constexpr unsigned int Class_1_80ED5C578A50E90A___c__DisplayClass5_0_TypeDefinitionIndex = 78569;

class Class_1_80ED5C578A50E90A___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_47CFC2D7B3865B39* skillInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80ED5C578A50E90A___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnTeamTowersNewPlayerSkillMessage_b__0(::Class_1_47CFC2D7B3865B39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_47CFC2D7B3865B39*))((::PBYTE)hIl2Cpp + CLASS_1_80ED5C578A50E90A___C__DISPLAYCLASS5_0___ONTEAMTOWERSNEWPLAYERSKILLMESSAGE_B__0_OFFSET))(this, a1);
	}
};
