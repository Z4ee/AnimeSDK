#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicComboType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_SHOWMUSICCOMBONOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xD5057D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int ShowMusicComboNotify_TypeDefinitionIndex = 76419;

	class ShowMusicComboNotify : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* FollowTarget; // 0x10
		::RPG::GameCore::MusicComboType ComboType; // 0x18
		::System::Boolean OnlyFollowAtStart; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_SHOWMUSICCOMBONOTIFY__CTOR_OFFSET))(this);
		}
	};
}
