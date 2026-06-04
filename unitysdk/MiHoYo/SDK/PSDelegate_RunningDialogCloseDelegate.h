#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D4220)
#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D4250)
#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x183B8F80)
#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183D41B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_RunningDialogCloseDelegate_TypeDefinitionIndex = 7675;

	class PSDelegate_RunningDialogCloseDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
