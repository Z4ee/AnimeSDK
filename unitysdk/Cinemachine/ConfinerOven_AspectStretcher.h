#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER_STRETCH_OFFSET UNITYSDK_OFFSET(0x9C2EE0)
#define CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER_UNSTRETCH_OFFSET UNITYSDK_OFFSET(0x9C2F10)
#define CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C2EC0)

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_AspectStretcher_TypeDefinitionIndex = 32583;

	struct alignas(4) ConfinerOven_AspectStretcher
	{
		::System::Single _Aspect_k__BackingField; // 0x10
		::System::Single m_InverseAspect; // 0x14
		::System::Single m_CenterX; // 0x18

		::System::Void _ctor(::System::Single aspect, ::System::Single centerX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER__CTOR_OFFSET))(this, aspect, centerX);
		}

		::System::Single get_Aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER_GET_ASPECT_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 Stretch(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER_STRETCH_OFFSET))(this, p);
		}
		*/

		/*
		::UnityEngine::Vector2 Unstretch(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_ASPECTSTRETCHER_UNSTRETCH_OFFSET))(this, p);
		}
		*/
	};
}
