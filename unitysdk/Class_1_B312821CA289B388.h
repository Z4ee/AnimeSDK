#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B312821CA289B388__CTOR_OFFSET UNITYSDK_OFFSET(0x17582C60)

inline static constexpr unsigned int Class_1_B312821CA289B388_TypeDefinitionIndex = 40074;

class Class_1_B312821CA289B388 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::Int32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B312821CA289B388__CTOR_OFFSET))(this);
	}
};
