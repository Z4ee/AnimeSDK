#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8501510)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8501570)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8500E30)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x85014F0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MiHoYoMTRCallback_TypeDefinitionIndex = 37359;

	class MiHoYoMTRInterface_MiHoYoMTRCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 nTaskID, ::System::String* strMTRResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK_INVOKE_OFFSET))(this, nTaskID, strMTRResult);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 nTaskID, ::System::String* strMTRResult, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK_BEGININVOKE_OFFSET))(this, nTaskID, strMTRResult, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTRCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
