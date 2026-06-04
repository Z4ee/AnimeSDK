#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ROOTMOTION_WARNING_LOGGER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA27BB20)
#define ROOTMOTION_WARNING_LOGGER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA27BB50)
#define ROOTMOTION_WARNING_LOGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA27BAA0)
#define ROOTMOTION_WARNING_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA27BAB0)

namespace RootMotion
{
	inline static constexpr unsigned int Warning_Logger_TypeDefinitionIndex = 41800;

	class Warning_Logger : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOGGER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
