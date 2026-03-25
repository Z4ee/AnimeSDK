#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Vector4Parameter.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_TRACKBALLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAE360)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TrackBallParameter_TypeDefinitionIndex = 29401;

	class TrackBallParameter : public ::UnityEngine::Rendering::Vector4Parameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRACKBALLPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
