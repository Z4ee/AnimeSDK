#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAMODULELOCKROTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x106ACFF0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleLockRotateData_TypeDefinitionIndex = 59396;

	class CameraModuleLockRotateData : public ::System::Object
	{
	public:
		::System::Boolean LT_CANROTATE; // 0x10
		::UnityEngine::Vector2 LT_ROTATE_MINMAX_ANGLE; // 0x14
		::System::Single LT_ANGLEANDDIS_RATIO; // 0x1C
		::UnityEngine::AnimationCurve* LT_LONGDIS_ANGLELERPCURVE; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULELOCKROTATEDATA__CTOR_OFFSET))(this);
		}
	};
}
