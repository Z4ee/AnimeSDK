#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM_TICK_OFFSET UNITYSDK_OFFSET(0x16864650)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x168644B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM_TRIGGERSOUND_OFFSET UNITYSDK_OFFSET(0x16864500)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x168646B0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityGame_SoundDelayPlayItem_TypeDefinitionIndex = 43902;

	class ViewEntityGame_SoundDelayPlayItem : public ::System::Object
	{
	public:
		::System::Int32 soundId; // 0x10
		::System::Single delayTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean TimeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM_TIMEOUT_OFFSET))(this);
		}

		::System::Void TriggerSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM_TRIGGERSOUND_OFFSET))(this);
		}

		::System::Void Tick(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_SOUNDDELAYPLAYITEM_TICK_OFFSET))(this, dt);
		}
	};
}
