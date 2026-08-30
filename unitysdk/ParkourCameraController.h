#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MoveCameraInfo;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PARKOURCAMERACONTROLLER_MANUALEND_OFFSET UNITYSDK_OFFSET(0x1ABA7C20)
#define PARKOURCAMERACONTROLLER_MANUALSTART_OFFSET UNITYSDK_OFFSET(0x1ABA79E0)
#define PARKOURCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1ABA7C70)
#define PARKOURCAMERACONTROLLER_METHOD_5_E1E0F3E6E754D1F5_OFFSET UNITYSDK_OFFSET(0x1ABA7D30)
#define PARKOURCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA8120)

inline static constexpr unsigned int ParkourCameraController_TypeDefinitionIndex = 47729;

class ParkourCameraController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MoveCameraInfo*>* StartCameraInfos; // 0x18
	::System::Collections::Generic::List_1<::MoveCameraInfo*>* EndCameraInfos; // 0x20
	::UnityEngine::GameObject* Light; // 0x28
	::UnityEngine::GameObject* LightView; // 0x30
	::Cinemachine::CinemachineVirtualCamera* MainCamera; // 0x38
	::System::Action* OnStartFinish; // 0x40
	::System::Single GGIGDCEKANO; // 0x48
	::MoveCameraInfo* PGHJFJJEIIH; // 0x50
	::System::Boolean DBKLOJEAKJM; // 0x58
	::System::Boolean FNGEFAFMKDG; // 0x59

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

	::System::Boolean Method_5_E1E0F3E6E754D1F5(::System::Collections::Generic::List_1<::MoveCameraInfo*>* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoveCameraInfo*>*, ::System::Single))((::PBYTE)hIl2Cpp + PARKOURCAMERACONTROLLER_METHOD_5_E1E0F3E6E754D1F5_OFFSET))(this, a1, a2);
	}
};
