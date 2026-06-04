#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_CLASS_1_3ABCC41A05D06339_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2BA50)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeFighter_Class_1_3ABCC41A05D06339_3_TypeDefinitionIndex = 71128;

	class MatchThreeFighter_Class_1_3ABCC41A05D06339_3 : public ::System::Object
	{
	public:
		::System::Single Field_1_0; // 0x10
		::System::Single Field_1_1; // 0x14
		::System::Single Field_1_2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_CLASS_1_3ABCC41A05D06339_3__CTOR_OFFSET))(this);
		}
	};
}
