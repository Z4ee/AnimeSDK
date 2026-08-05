#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7C03C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7C0430)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7C0040)
#define MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C0020)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TryBeginFreeCommunicationDelegate_TypeDefinitionIndex = 19792;

	class ConsoleDelegate_TryBeginFreeCommunicationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Boolean isShowUi)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE_INVOKE_OFFSET))(this, isShowUi);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isShowUi, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE_BEGININVOKE_OFFSET))(this, isShowUi, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_TRYBEGINFREECOMMUNICATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
