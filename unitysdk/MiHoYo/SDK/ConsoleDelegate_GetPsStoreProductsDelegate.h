#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_ProductsCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18308480)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183084C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18308470)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183083F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetPsStoreProductsDelegate_TypeDefinitionIndex = 7598;

	class ConsoleDelegate_GetPsStoreProductsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::String*>* a1, ::MiHoYo::SDK::ConsoleDelegate_ProductsCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::MiHoYo::SDK::ConsoleDelegate_ProductsCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::String*>* a1, ::MiHoYo::SDK::ConsoleDelegate_ProductsCallback* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::MiHoYo::SDK::ConsoleDelegate_ProductsCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETPSSTOREPRODUCTSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
