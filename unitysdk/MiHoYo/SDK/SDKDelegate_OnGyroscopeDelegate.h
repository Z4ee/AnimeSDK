#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E9890)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E9900)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E9350)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E9330)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGyroscopeDelegate_TypeDefinitionIndex = 19559;

	class SDKDelegate_OnGyroscopeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CloudGame::MailBox::GameControl::Gyroscope gyro)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_INVOKE_OFFSET))(this, gyro);
		}

		::System::IAsyncResult* BeginInvoke(::CloudGame::MailBox::GameControl::Gyroscope gyro, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_BEGININVOKE_OFFSET))(this, gyro, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
