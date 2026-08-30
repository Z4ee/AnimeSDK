#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93F870)
#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93F8D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93F860)
#define MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93F7F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_ProductsCallback_TypeDefinitionIndex = 7592;

	class ConsoleDelegate_ProductsCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PRODUCTSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
