#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_CAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE825180)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraData_TypeDefinitionIndex = 48901;

	class CameraData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::System::Single Fov; // 0x2C
		::System::Boolean IsFinished; // 0x30
		::System::Boolean EnableResultModule; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERADATA__CTOR_OFFSET))(this);
		}
	};
}
