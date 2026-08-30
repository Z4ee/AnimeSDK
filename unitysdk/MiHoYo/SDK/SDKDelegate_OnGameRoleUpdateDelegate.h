#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GameRoleModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC9280)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC92B0)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC9270)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC9180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGameRoleUpdateDelegate_TypeDefinitionIndex = 7752;

	class SDKDelegate_OnGameRoleUpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::GameRoleModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::GameRoleModel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
