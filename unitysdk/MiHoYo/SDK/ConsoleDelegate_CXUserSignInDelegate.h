#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C8E9E10)
#define MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C8E9E40)
#define MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C8E9B80)
#define MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E9B60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CXUserSignInDelegate_TypeDefinitionIndex = 19776;

	class ConsoleDelegate_CXUserSignInDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXUSERSIGNINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
