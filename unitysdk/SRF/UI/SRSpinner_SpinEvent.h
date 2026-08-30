#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define SRF_UI_SRSPINNER_SPINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC498A0)

namespace SRF::UI
{
	inline static constexpr unsigned int SRSpinner_SpinEvent_TypeDefinitionIndex = 34725;

	class SRSpinner_SpinEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_SPINEVENT__CTOR_OFFSET))(this);
		}
	};
}
