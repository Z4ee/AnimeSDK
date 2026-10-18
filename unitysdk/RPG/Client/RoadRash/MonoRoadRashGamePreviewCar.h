#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEWCAR__CTOR_OFFSET UNITYSDK_OFFSET(0xDEDF010)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGamePreviewCar_TypeDefinitionIndex = 75859;

	class MonoRoadRashGamePreviewCar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEWCAR__CTOR_OFFSET))(this);
		}
	};
}
