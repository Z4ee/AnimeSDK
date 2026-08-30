#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashCarCamera_PlayEndCamera.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashCarCamera_PlayStartCamera.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ROADRASH_MONOROADRASHCARCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1798F880)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCarCamera_TypeDefinitionIndex = 75429;

	class MonoRoadRashCarCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashCarCamera_PlayStartCamera PlayStart; // 0x18
		::RPG::Client::RoadRash::MonoRoadRashCarCamera_PlayEndCamera PlayEnd; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCARCAMERA__CTOR_OFFSET))(this);
		}
	};
}
