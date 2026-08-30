#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AEAACB0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AEAAD10)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AEA9280)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAAC40)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager_UserCenterJsBridge_TypeDefinitionIndex = 8231;

	class UserCenterManager_UserCenterJsBridge : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
