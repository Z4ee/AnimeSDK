#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENCOUNTINGCHIMERAMINIGAME_PLAYINGTRACKASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC55F780)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenCountingChimeraMiniGame_PlayingTrackAsset_TypeDefinitionIndex = 75287;

	class HipplenCountingChimeraMiniGame_PlayingTrackAsset : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ChimeraEntityRef; // 0x10
		::UnityEngine::Timeline::TrackAsset* TrackAssetRef; // 0x18
		::System::String* CharacterUniqueName; // 0x20
		::System::UInt32 ChimeraID; // 0x28
		::System::Boolean IsFinished; // 0x2C
		::System::Boolean IsWorking; // 0x2D
		::System::Double Duration; // 0x30
		::System::Double StartTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENCOUNTINGCHIMERAMINIGAME_PLAYINGTRACKASSET__CTOR_OFFSET))(this);
		}
	};
}
