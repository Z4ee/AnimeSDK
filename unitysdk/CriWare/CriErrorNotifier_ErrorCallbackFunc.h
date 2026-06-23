#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E24A430)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E24A500)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E24A050)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24A030)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_ErrorCallbackFunc_TypeDefinitionIndex = 34346;

	class CriErrorNotifier_ErrorCallbackFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr errmsgPtr, ::System::UInt32 p1, ::System::UInt32 p2, ::System::IntPtr parray)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_INVOKE_OFFSET))(this, errmsgPtr, p1, p2, parray);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr errmsgPtr, ::System::UInt32 p1, ::System::UInt32 p2, ::System::IntPtr parray, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_BEGININVOKE_OFFSET))(this, errmsgPtr, p1, p2, parray, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
