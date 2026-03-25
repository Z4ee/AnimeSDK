#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_StoreIsEmptyCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EC8E50)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EC8E80)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EC8900)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC88E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CheckPsStoreIsEmptyDelegate_TypeDefinitionIndex = 6631;

	class ConsoleDelegate_CheckPsStoreIsEmptyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
