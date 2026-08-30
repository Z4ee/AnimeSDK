#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1B4290)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B4280)

namespace RPG::Client::LittleGame::FiveDim::MiniGameNotify
{
	inline static constexpr unsigned int ScoreUpdate_TypeDefinitionIndex = 76773;

	class ScoreUpdate : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::MiniGameNotify::ScoreUpdate** StaticGet_Zero()
		{
			return (::RPG::Client::LittleGame::FiveDim::MiniGameNotify::ScoreUpdate**)Il2CppClass::FromTypeDefinitionIndex(ScoreUpdate_TypeDefinitionIndex)->GetStaticField(0x1BE30);
		}
		::System::Single ScoreMultiplier; // 0x10
		::System::Int32 CoinScore; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_SCOREUPDATE__CCTOR_OFFSET))();
		}
	};
}
