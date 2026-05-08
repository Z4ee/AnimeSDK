#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B8A27B0)
#define SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B8A27F0)
#define SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B89ED10)
#define SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A1080)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int WeakValueSetter_TypeDefinitionIndex = 7501;

	class WeakValueSetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object*& instance, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER_INVOKE_OFFSET))(this, instance, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object*& instance, ::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*&, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER_BEGININVOKE_OFFSET))(this, instance, value, callback, object);
		}

		::System::Void EndInvoke(::System::Object*& instance, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_WEAKVALUESETTER_ENDINVOKE_OFFSET))(this, instance, result);
		}
	};
}
