#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ROOTMOTION_WARNING_LOGGER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DA8D940)
#define ROOTMOTION_WARNING_LOGGER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DA8D970)
#define ROOTMOTION_WARNING_LOGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DA74CE0)
#define ROOTMOTION_WARNING_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8D920)

namespace RootMotion
{
	inline static constexpr unsigned int Warning_Logger_TypeDefinitionIndex = 38149;

	class Warning_Logger : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
