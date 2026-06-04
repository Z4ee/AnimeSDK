#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D39B0)
#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D3A40)
#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183C6850)
#define MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183D3930)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenCommerceCheckoutDialogDelegate_TypeDefinitionIndex = 7685;

	class PSDelegate_OpenCommerceCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
