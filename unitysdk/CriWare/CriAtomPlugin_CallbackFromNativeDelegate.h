#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146B62F0)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146B6340)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x146B62E0)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x146B6270)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_CallbackFromNativeDelegate_TypeDefinitionIndex = 36976;

	class CriAtomPlugin_CallbackFromNativeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke(::System::IntPtr a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
