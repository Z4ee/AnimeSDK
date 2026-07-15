#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19B81990)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_METHOD_6_EF185F49BB791B59_OFFSET UNITYSDK_OFFSET(0x19B82AC0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B82B10)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceSupportBubbleMonoView_TypeDefinitionIndex = 74187;

	class CakeRaceSupportBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_6_EF185F49BB791B59()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_METHOD_6_EF185F49BB791B59_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET))(this);
		}
	};
}
