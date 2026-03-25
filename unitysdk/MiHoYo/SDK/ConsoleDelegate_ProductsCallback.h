#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15ED2BE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15ED2C40)
#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15ED2890)
#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED2870)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_ProductsCallback_TypeDefinitionIndex = 6660;

	class ConsoleDelegate_ProductsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_INVOKE_OFFSET))(this, code, products);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_BEGININVOKE_OFFSET))(this, code, products, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
