#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1751CE20)
#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1751CE90)
#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1751CAD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1751CAB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_StoreIsEmptyCallback_TypeDefinitionIndex = 6664;

	class ConsoleDelegate_StoreIsEmptyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code, ::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_INVOKE_OFFSET))(this, code, isEmpty);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::System::Boolean isEmpty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_BEGININVOKE_OFFSET))(this, code, isEmpty, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
