#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_LIGHTRENDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x118DA4C0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int LightRenderConfig_TypeDefinitionIndex = 59763;

	class LightRenderConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color LightColor; // 0x10
		::System::Boolean EnableUnstable; // 0x20
		::System::Int32 Frequency; // 0x24
		::System::Single IntensityDelta; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_LIGHTRENDERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
