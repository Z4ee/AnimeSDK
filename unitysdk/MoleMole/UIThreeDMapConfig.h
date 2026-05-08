#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_UITHREEDMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1340E510)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapConfig_TypeDefinitionIndex = 70028;

	class UIThreeDMapConfig : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Single ConsoleMoveSpeed; // 0x18
		::System::Single ConsoleRotateSpeed; // 0x1C
		::System::Single PcRotateMaxSpeed; // 0x20
		::System::Single PcRotateMinSpeed; // 0x24
		::System::Single ZoomSpeed; // 0x28
		::System::Single PcZoomSpeed; // 0x2C
		::UnityEngine::Vector3 Rotation; // 0x30
		::System::Single PitchMax; // 0x3C
		::System::Single PitchMin; // 0x40
		::System::Single RadiusMax; // 0x44
		::System::Single RadiusMin; // 0x48
		::System::Single Fov; // 0x4C
		::System::Single CameraClampMax; // 0x50
		::System::Single CameraClampSpeed; // 0x54
		::System::Single CameraCheckDis; // 0x58
		::System::Single UI2DScaleMaxDis; // 0x5C
		::System::Single UI2DScaleMinDis; // 0x60
		::System::Single UI2DScaleMax; // 0x64
		::System::Single UI2DScaleMin; // 0x68
		::System::Single UI2DGroupDis; // 0x6C
		::System::Single MobileUI2DGroupDis; // 0x70
		::System::Single PlayerArrowBaseDis; // 0x74
		::System::Single PlayerExCheckDis; // 0x78
		::System::Single MoveVelocityDownTime; // 0x7C
		::System::Single ScaleVelocityDownTime; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
