#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18DB91E0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18DB9210)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18DB8F40)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB8F30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_SessionDestoryDelegate_TypeDefinitionIndex = 18497;

	class ConsoleDelegate_SessionDestoryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
