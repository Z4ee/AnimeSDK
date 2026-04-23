#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17516580)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175165F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17515FE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17515FC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OpenCommerceCheckoutDialogDelegate_TypeDefinitionIndex = 6697;

	class ConsoleDelegate_OpenCommerceCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::String*>* productLabels, ::System::Int32 length, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, productLabels, length, callback);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::String*>* productLabels, ::System::Int32 length, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, productLabels, length, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
