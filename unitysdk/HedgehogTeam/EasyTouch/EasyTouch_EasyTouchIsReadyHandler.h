#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EB8B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EB8E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4DEEC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EB840)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_EasyTouchIsReadyHandler_TypeDefinitionIndex = 38169;

	class EasyTouch_EasyTouchIsReadyHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_EASYTOUCHISREADYHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
