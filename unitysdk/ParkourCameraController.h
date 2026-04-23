#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MoveCameraInfo;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PARKOURCAMERACONTROLLER_MANUALEND_OFFSET UNITYSDK_OFFSET(0x9A8B710)
#define PARKOURCAMERACONTROLLER_MANUALSTART_OFFSET UNITYSDK_OFFSET(0x9A8B470)
#define PARKOURCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x9A8B760)
#define PARKOURCAMERACONTROLLER_METHOD_5_6226389E87D2F955_OFFSET UNITYSDK_OFFSET(0x9A8B810)
#define PARKOURCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8BBF0)

inline static constexpr unsigned int ParkourCameraController_TypeDefinitionIndex = 44061;

class ParkourCameraController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MoveCameraInfo*>* StartCameraInfos; // 0x18
	::System::Collections::Generic::List_1<::MoveCameraInfo*>* EndCameraInfos; // 0x20
	::UnityEngine::GameObject* Light; // 0x28
	::UnityEngine::GameObject* LightView; // 0x30
	::Cinemachine::CinemachineVirtualCamera* MainCamera; // 0x38
	::System::Action* OnStartFinish; // 0x40
	::System::Single Field_5_6; // 0x48
	::MoveCameraInfo* Field_5_7; // 0x50
	::System::Boolean Field_5_8; // 0x58
	::System::Boolean Field_5_9; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARKOURCAMERACONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void ManualStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARKOURCAMERACONTROLLER_MANUALSTART_OFFSET))(this);
	}

	::System::Void ManualEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARKOURCAMERACONTROLLER_MANUALEND_OFFSET))(this);
	}

	::System::Void ManualUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PARKOURCAMERACONTROLLER_MANUALUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_6226389E87D2F955(::System::Collections::Generic::List_1<::MoveCameraInfo*>* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoveCameraInfo*>*, ::System::Single))((::PBYTE)hIl2Cpp + PARKOURCAMERACONTROLLER_METHOD_5_6226389E87D2F955_OFFSET))(this, a1, a2);
	}
};
