#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F82E0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F8310)
#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F82D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F8260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_EndFreeCommunicationDelegate_TypeDefinitionIndex = 7638;

	class ConsoleDelegate_EndFreeCommunicationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
