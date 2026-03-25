#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOUIFOURWAYNAVIGATION_ONMOVE_OFFSET UNITYSDK_OFFSET(0x9D4BC40)
#define RPG_CLIENT_MONOUIFOURWAYNAVIGATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4BCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIFourWayNavigation_TypeDefinitionIndex = 56339;

	class MonoUIFourWayNavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOURWAYNAVIGATION__CTOR_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOURWAYNAVIGATION_ONMOVE_OFFSET))(this, a1);
		}
	};
}
