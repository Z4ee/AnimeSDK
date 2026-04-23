#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BA4CD0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BA4D00)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B7B4E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA4CB0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate_TypeDefinitionIndex = 36527;

	class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONUPDATEVIRTUALCAMERADELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
