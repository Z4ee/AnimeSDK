#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CRIWARE_CRIERRORNOTIFIER_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A34230)
#define CRIWARE_CRIERRORNOTIFIER_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A34260)
#define CRIWARE_CRIERRORNOTIFIER_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A33BF0)
#define CRIWARE_CRIERRORNOTIFIER_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A34210)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_Callback_TypeDefinitionIndex = 31166;

	class CriErrorNotifier_Callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_CALLBACK_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_CALLBACK_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
