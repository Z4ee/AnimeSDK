#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_StoreIsEmptyCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175F9AF0)
#define MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175F9B20)
#define MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175EB6F0)
#define MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175F9AD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_CheckPsStoreIsEmptyDelegate_TypeDefinitionIndex = 6778;

	class PSDelegate_CheckPsStoreIsEmptyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PSDelegate_StoreIsEmptyCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSDelegate_StoreIsEmptyCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PSDelegate_StoreIsEmptyCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PSDelegate_StoreIsEmptyCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPSSTOREISEMPTYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
