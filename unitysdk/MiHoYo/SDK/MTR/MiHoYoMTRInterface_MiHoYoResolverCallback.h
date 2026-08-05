#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D844600)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D844680)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D844290)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8445E0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MiHoYoResolverCallback_TypeDefinitionIndex = 37708;

	class MiHoYoMTRInterface_MiHoYoResolverCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 nTaskID, ::System::String* strResolverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK_INVOKE_OFFSET))(this, nTaskID, strResolverInfo);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 nTaskID, ::System::String* strResolverInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK_BEGININVOKE_OFFSET))(this, nTaskID, strResolverInfo, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYORESOLVERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
