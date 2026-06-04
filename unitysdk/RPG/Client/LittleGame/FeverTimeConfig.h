#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_FEVERTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD9D40)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int FeverTimeConfig_TypeDefinitionIndex = 39346;

	class FeverTimeConfig : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single SPMax; // 0x14
		::System::Single FullScreenFadeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FEVERTIMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
