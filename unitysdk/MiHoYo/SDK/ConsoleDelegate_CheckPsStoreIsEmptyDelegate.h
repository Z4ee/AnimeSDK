#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_StoreIsEmptyCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F7E40)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F7E70)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F7E30)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F7DC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CheckPsStoreIsEmptyDelegate_TypeDefinitionIndex = 7562;

	class ConsoleDelegate_CheckPsStoreIsEmptyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleDelegate_StoreIsEmptyCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
