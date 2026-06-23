#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E4F80)
#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E5030)
#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E4910)
#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E48F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenCommerceCheckoutDialogDelegate_TypeDefinitionIndex = 19499;

	class PSDelegate_OpenCommerceCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::String*>* productLabels, ::System::Int32 length, ::System::Int32 mode, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, productLabels, length, mode, callback);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::String*>* productLabels, ::System::Int32 length, ::System::Int32 mode, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, productLabels, length, mode, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
