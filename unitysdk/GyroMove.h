#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GyroBaseMono.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GYROMOVE_CAMERAROTATECONTROL_OFFSET UNITYSDK_OFFSET(0x1E1A8C80)
#define GYROMOVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E1A8C30)
#define GYROMOVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E1A8B80)
#define GYROMOVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E1A8A80)
#define GYROMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A91E0)

inline static constexpr unsigned int GyroMove_TypeDefinitionIndex = 7938;

class GyroMove : public ::GyroBaseMono
{
public:
	::UnityEngine::Vector3 _orignPos; // 0x60
	::UnityEngine::Vector3 _orignPos_Local; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROMOVE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROMOVE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROMOVE_ONDISABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROMOVE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void CameraRotateControl()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROMOVE_CAMERAROTATECONTROL_OFFSET))(this);
	}
};
