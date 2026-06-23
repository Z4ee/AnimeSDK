#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E03F0)
#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E0420)
#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9E0150)
#define MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E0130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_RunningDialogCloseDelegate_TypeDefinitionIndex = 19489;

	class PSDelegate_RunningDialogCloseDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_RUNNINGDIALOGCLOSEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
