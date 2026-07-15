#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Vector4Parameter.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_TRACKBALLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D135350)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TrackBallParameter_TypeDefinitionIndex = 36250;

	class TrackBallParameter : public ::UnityEngine::Rendering::Vector4Parameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRACKBALLPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
