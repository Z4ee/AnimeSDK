#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_STONEMOVEANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA163DF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StoneMoveAnimConfig_TypeDefinitionIndex = 63973;

	class StoneMoveAnimConfig : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::UnityEngine::AnimationCurve* PositionCurve; // 0x18
		::UnityEngine::AnimationCurve* ScaleCure; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STONEMOVEANIMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
