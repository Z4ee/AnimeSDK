#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWLIGHTSCENEGIZMOS__CTOR_OFFSET UNITYSDK_OFFSET(0x17908690)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowLightSceneGizmos_TypeDefinitionIndex = 58396;

	class HollowLightSceneGizmos : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWLIGHTSCENEGIZMOS__CTOR_OFFSET))(this);
		}
	};
}
