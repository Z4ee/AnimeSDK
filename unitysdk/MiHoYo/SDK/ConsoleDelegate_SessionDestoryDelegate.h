#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93FE80)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93FEB0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93FE70)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93FE00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_SessionDestoryDelegate_TypeDefinitionIndex = 7572;

	class ConsoleDelegate_SessionDestoryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONDESTORYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
