#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2BC4C797B07A85AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1683F4E0)

inline static constexpr unsigned int Class_1_2BC4C797B07A85AD_TypeDefinitionIndex = 32710;

class Class_1_2BC4C797B07A85AD : public ::System::Object
{
public:
	::System::Int32 Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Boolean Field_1_5; // 0x18
	::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState Field_1_6; // 0x1C
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC4C797B07A85AD__CTOR_OFFSET))(this);
	}
};
