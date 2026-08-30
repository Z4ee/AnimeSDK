#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_CHIMERARANKTALKPOPSHOWTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B605AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankTalkPopShowTime_TypeDefinitionIndex = 72408;

	class ChimeraRankTalkPopShowTime : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single TalkPopShowTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKTALKPOPSHOWTIME__CTOR_OFFSET))(this);
		}
	};
}
