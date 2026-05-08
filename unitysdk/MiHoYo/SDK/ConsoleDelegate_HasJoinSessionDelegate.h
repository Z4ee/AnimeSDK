#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C9A330)
#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C9A360)
#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C9A090)
#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9A080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_HasJoinSessionDelegate_TypeDefinitionIndex = 18500;

	class ConsoleDelegate_HasJoinSessionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
