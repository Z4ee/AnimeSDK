#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1669A440)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1669A470)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1666F820)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1669A3D0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate_TypeDefinitionIndex = 39765;

	class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
