#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1751ABE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1751AC10)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1751A930)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1751A910)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_SessionInitDelegate_TypeDefinitionIndex = 6674;

	class ConsoleDelegate_SessionInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
