#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F124B0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F12510)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15F106C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0FCA0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager_UserCenterJsBridge_TypeDefinitionIndex = 7262;

	class UserCenterManager_UserCenterJsBridge : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retcode, ::MiHoYo::SDK::JSONNode* resultObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_INVOKE_OFFSET))(this, retcode, resultObj);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retcode, ::MiHoYo::SDK::JSONNode* resultObj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_BEGININVOKE_OFFSET))(this, retcode, resultObj, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_USERCENTERJSBRIDGE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
