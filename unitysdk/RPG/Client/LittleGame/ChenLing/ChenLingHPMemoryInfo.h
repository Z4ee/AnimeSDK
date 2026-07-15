#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGHPMEMORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C583D70)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingHPMemoryInfo_TypeDefinitionIndex = 41146;

	class ChenLingHPMemoryInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint CurrentAllyHP; // 0x10
		::RPG::GameCore::FixPoint CurrentEnemyHP; // 0x18
		::RPG::GameCore::FixPoint TotalEnemyHP; // 0x20
		::RPG::GameCore::FixPoint TotalAllyHP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGHPMEMORYINFO__CTOR_OFFSET))(this);
		}
	};
}
