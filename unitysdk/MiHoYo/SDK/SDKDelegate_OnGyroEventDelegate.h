#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1994ACB0)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1994AD30)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1994A960)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1994A950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGyroEventDelegate_TypeDefinitionIndex = 18663;

	class SDKDelegate_OnGyroEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::WeLing::SDK::GyroType gyroType, ::Il2CppArray<::System::Single>* data)
		{
			return ((::System::Void(*)(::PVOID, ::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_INVOKE_OFFSET))(this, gyroType, data);
		}

		::System::IAsyncResult* BeginInvoke(::WeLing::SDK::GyroType gyroType, ::Il2CppArray<::System::Single>* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_BEGININVOKE_OFFSET))(this, gyroType, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROEVENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
