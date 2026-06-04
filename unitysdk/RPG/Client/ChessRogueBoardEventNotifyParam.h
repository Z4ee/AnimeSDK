#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHESSROGUEBOARDEVENTNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB64F0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardEventNotifyParam_TypeDefinitionIndex = 62567;

	class ChessRogueBoardEventNotifyParam : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifierEffectType ModifierEffectType; // 0x10
		::System::UInt32 BoardEventID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDEVENTNOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
