#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA469A0)
#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA46A10)
#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA46990)
#define MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA46920)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_StoreIsEmptyCallback_TypeDefinitionIndex = 7573;

	class ConsoleDelegate_StoreIsEmptyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_STOREISEMPTYCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
