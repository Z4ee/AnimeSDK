#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA45550)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA455C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA45530)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA454B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OpenCommerceCheckoutDialogDelegate_TypeDefinitionIndex = 7606;

	class ConsoleDelegate_OpenCommerceCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
