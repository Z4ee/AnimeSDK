#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A74440)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A74470)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A5B110)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A74420)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_EasyTouchIsReadyHandler_TypeDefinitionIndex = 31341;

	class EasyTouch_EasyTouchIsReadyHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
