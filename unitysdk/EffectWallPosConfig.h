#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EFFECTWALLPOSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16647910)

inline static constexpr unsigned int EffectWallPosConfig_TypeDefinitionIndex = 55165;

class EffectWallPosConfig : public ::System::Object
{
public:
	::UnityEngine::Vector3 position; // 0x10
	::UnityEngine::Vector3 rotation; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTWALLPOSCONFIG__CTOR_OFFSET))(this);
	}
};
