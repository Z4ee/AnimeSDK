#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_ProductsCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F966F0)
#define MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F96730)
#define MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15F96170)
#define MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F96150)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_GetPsStoreProductsDelegate_TypeDefinitionIndex = 6738;

	class PSDelegate_GetPsStoreProductsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::String*>* productLabels, ::MiHoYo::SDK::PSDelegate_ProductsCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::MiHoYo::SDK::PSDelegate_ProductsCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE_INVOKE_OFFSET))(this, productLabels, callback);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::String*>* productLabels, ::MiHoYo::SDK::PSDelegate_ProductsCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::MiHoYo::SDK::PSDelegate_ProductsCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE_BEGININVOKE_OFFSET))(this, productLabels, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETPSSTOREPRODUCTSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
