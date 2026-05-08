#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_ImeDialogCloseCallback; }
namespace MiHoYo::SDK { class ConsoleDelegate_ImeDialogCompleteCallback; }
namespace MiHoYo::SDK { class ConsoleImeInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A347F10)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A347F50)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A3478F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3478E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_ShowTextEntryDelegate_TypeDefinitionIndex = 18522;

	class ConsoleDelegate_ShowTextEntryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleImeInfo* info, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback* closeCallback, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleImeInfo*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_INVOKE_OFFSET))(this, info, closeCallback, completeCallback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleImeInfo* info, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback* closeCallback, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback* completeCallback, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleImeInfo*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_BEGININVOKE_OFFSET))(this, info, closeCallback, completeCallback, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
