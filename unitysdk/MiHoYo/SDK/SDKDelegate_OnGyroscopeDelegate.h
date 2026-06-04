#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18420C70)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18420CE0)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18420C30)
#define MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18420BC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGyroscopeDelegate_TypeDefinitionIndex = 7745;

	class SDKDelegate_OnGyroscopeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CloudGame::MailBox::GameControl::Gyroscope a1)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CloudGame::MailBox::GameControl::Gyroscope a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGYROSCOPEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
