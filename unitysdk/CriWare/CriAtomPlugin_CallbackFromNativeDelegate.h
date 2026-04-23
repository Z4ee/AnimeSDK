#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BF9FC0)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BFA010)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BF9CD0)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF96D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_CallbackFromNativeDelegate_TypeDefinitionIndex = 36676;

	class CriAtomPlugin_CallbackFromNativeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::IntPtr ptr1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET))(this, ptr1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr ptr1, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET))(this, ptr1, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
