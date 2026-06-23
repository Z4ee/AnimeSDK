#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SIRENIX_UTILITIES_WEAKVALUEGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DE58CA0)
#define SIRENIX_UTILITIES_WEAKVALUEGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DE58CD0)
#define SIRENIX_UTILITIES_WEAKVALUEGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE58970)
#define SIRENIX_UTILITIES_WEAKVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE58950)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int WeakValueGetter_TypeDefinitionIndex = 6479;

	class WeakValueGetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_WEAKVALUEGETTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object*& instance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_WEAKVALUEGETTER_INVOKE_OFFSET))(this, instance);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object*& instance, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_WEAKVALUEGETTER_BEGININVOKE_OFFSET))(this, instance, callback, object);
		}

		::System::Object* EndInvoke(::System::Object*& instance, ::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_WEAKVALUEGETTER_ENDINVOKE_OFFSET))(this, instance, result);
		}
	};
}
