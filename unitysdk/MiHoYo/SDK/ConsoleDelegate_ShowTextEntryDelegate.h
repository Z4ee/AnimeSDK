#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_ImeDialogCloseCallback; }
namespace MiHoYo::SDK { class ConsoleDelegate_ImeDialogCompleteCallback; }
namespace MiHoYo::SDK { class ConsoleImeInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA468D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA46910)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA2F520)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA467E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_ShowTextEntryDelegate_TypeDefinitionIndex = 7609;

	class ConsoleDelegate_ShowTextEntryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConsoleImeInfo* a1, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback* a2, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConsoleImeInfo*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConsoleImeInfo* a1, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback* a2, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConsoleImeInfo*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::ConsoleDelegate_ImeDialogCompleteCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWTEXTENTRYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
