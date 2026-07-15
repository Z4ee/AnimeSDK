#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7ACE00)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7ACEB0)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7ACDD0)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ACD60)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_ErrorCallbackFunc_TypeDefinitionIndex = 37992;

	class CriErrorNotifier_ErrorCallbackFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
