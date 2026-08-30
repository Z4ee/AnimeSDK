#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPpu.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGTriangulator2D_Config_UvModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_Mode2DEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE8AC0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGTriangulator2D_Config_TypeDefinitionIndex = 35385;

	class BGTriangulator2D_Config : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGPpu PixelsPerUnit; // 0x10
		::BansheeGz::BGSpline::Components::BGPpu PixelsPerUnitBack; // 0x18
		::UnityEngine::Vector2 ScaleUV; // 0x20
		::UnityEngine::Vector2 ScaleBackUV; // 0x28
		::UnityEngine::Vector2 OffsetBackUV; // 0x30
		::BansheeGz::BGSpline::Components::BGTriangulator2D_Config_UvModeEnum UvMode; // 0x38
		::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum Mode2D; // 0x3C
		::UnityEngine::Vector2 OffsetUV; // 0x40
		::BansheeGz::BGSpline::Components::BGPpu TextureSize; // 0x48
		::System::Boolean Closed; // 0x50
		::System::Boolean AutoFlip; // 0x51
		::System::Boolean DoubleSided; // 0x52
		::System::Boolean Flip; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
