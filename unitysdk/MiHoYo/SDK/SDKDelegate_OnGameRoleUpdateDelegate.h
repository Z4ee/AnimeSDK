#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GameRoleModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE19900)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE19930)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE193E0)
#define MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE193C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnGameRoleUpdateDelegate_TypeDefinitionIndex = 19907;

	class SDKDelegate_OnGameRoleUpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::GameRoleModel* role)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_INVOKE_OFFSET))(this, role);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::GameRoleModel* role, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_BEGININVOKE_OFFSET))(this, role, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONGAMEROLEUPDATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
