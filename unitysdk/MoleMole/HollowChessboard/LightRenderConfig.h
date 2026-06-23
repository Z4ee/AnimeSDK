#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_LIGHTRENDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3A2F0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int LightRenderConfig_TypeDefinitionIndex = 70876;

	class LightRenderConfig : public ::System::Object
	{
	public:
		::System::Single IntensityDelta; // 0x10
		::System::Int32 Frequency; // 0x14
		::System::Boolean EnableUnstable; // 0x18
		::UnityEngine::Color LightColor; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_LIGHTRENDERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
