#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_GRAVITYBALLPLATFORMFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A928070)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallPlatformFlag_TypeDefinitionIndex = 78120;

	class GravityBallPlatformFlag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLPLATFORMFLAG__CTOR_OFFSET))(this);
		}
	};
}
