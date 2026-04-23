#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CameraBlendCurve; }

#define RPG_CLIENT_BLENDCURVERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9CC20)

namespace RPG::Client
{
	inline static constexpr unsigned int BlendCurveRange_TypeDefinitionIndex = 64257;

	class BlendCurveRange : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 DistanceDelta; // 0x10
		::UnityEngine::Vector2 AngleDelta; // 0x18
		::RPG::Client::CameraBlendCurve* BlendCurve; // 0x20
		::System::Single BlendTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLENDCURVERANGE__CTOR_OFFSET))(this);
		}
	};
}
