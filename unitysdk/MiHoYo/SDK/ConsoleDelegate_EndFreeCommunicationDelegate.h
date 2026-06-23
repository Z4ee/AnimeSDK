#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF62190)
#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF621C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF61EF0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF61ED0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_EndFreeCommunicationDelegate_TypeDefinitionIndex = 19446;

	class ConsoleDelegate_EndFreeCommunicationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ENDFREECOMMUNICATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
