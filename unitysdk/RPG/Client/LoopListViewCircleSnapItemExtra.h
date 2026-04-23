#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPITEMEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xA71BDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopListViewCircleSnapItemExtra_TypeDefinitionIndex = 63623;

	class LoopListViewCircleSnapItemExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* CircleSnapNode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPITEMEXTRA__CTOR_OFFSET))(this);
		}
	};
}
