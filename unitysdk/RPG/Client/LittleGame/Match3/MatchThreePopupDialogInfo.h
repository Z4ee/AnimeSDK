#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEPOPUPDIALOGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9E080)

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreePopupDialogInfo_TypeDefinitionIndex = 41402;

	class MatchThreePopupDialogInfo : public ::System::Object
	{
	public:
		::System::UInt32 PopupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEPOPUPDIALOGINFO__CTOR_OFFSET))(this);
		}
	};
}
