#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD034CB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlayScreenTransferBehaviour_TypeDefinitionIndex = 45506;

	class PlayScreenTransferBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::ScreenTransferType ScreenTransferType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
