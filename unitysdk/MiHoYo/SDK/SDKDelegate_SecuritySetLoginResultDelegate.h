#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4B9F20)
#define MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4B9F50)
#define MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4B9A00)
#define MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B99E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_SecuritySetLoginResultDelegate_TypeDefinitionIndex = 19896;

	class SDKDelegate_SecuritySetLoginResultDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE_INVOKE_OFFSET))(this, dataString);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* dataString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE_BEGININVOKE_OFFSET))(this, dataString, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_SECURITYSETLOGINRESULTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
