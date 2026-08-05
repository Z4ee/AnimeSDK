#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class CameraModuleLockRotateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERALOCKTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF11FBC0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraLockTargetConfig_TypeDefinitionIndex = 40540;

	class CameraLockTargetConfig : public ::System::Object
	{
	public:
		::System::Boolean LT_FORCENEARTOAVATAR; // 0x10
		::System::Single LT_MINROTATE_DIS; // 0x14
		::System::Boolean LT_EXITWHENBLENDOVER; // 0x18
		::System::Single LT_DRAGCAMERA_COOLTIMER; // 0x1C
		::System::Single LT_INCAMERA_CAMERAMINANGLERATIO; // 0x20
		::UnityEngine::Vector2 LT_INCAMERA_AVAIABLEDISTANCE_OFFSET_X; // 0x24
		::UnityEngine::Vector2 LT_INCAMERA_AVAIABLEANGLE_OFFSET_Y; // 0x2C
		::UnityEngine::AnimationCurve* LT_INCAMERA_AVAIABLEANGLECURVE; // 0x38
		::UnityEngine::AnimationCurve* LT_INCAMERA_CAM_AVATAR_MONSTER_ANGLECURVE; // 0x40
		::UnityEngine::Vector2 LT_ROTATE_MINMAX_TIME; // 0x48
		::System::Single LT_ANGLEDIS_SCALER_RATIO; // 0x50
		::System::Single LT_NEARDIS_TOLERATE_ANGLE; // 0x54
		::System::Collections::Generic::List_1<::MoleMole::CameraModuleLockRotateData*>* LT_ANGLELERPDATA; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERALOCKTARGETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
