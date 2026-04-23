#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175FBB30)
#define MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175FBBA0)
#define MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x175FB7E0)
#define MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x175EB6D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_StoreIsEmptyCallback_TypeDefinitionIndex = 6777;

	class PSDelegate_StoreIsEmptyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code, ::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK_INVOKE_OFFSET))(this, code, isEmpty);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::System::Boolean isEmpty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK_BEGININVOKE_OFFSET))(this, code, isEmpty, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_STOREISEMPTYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
