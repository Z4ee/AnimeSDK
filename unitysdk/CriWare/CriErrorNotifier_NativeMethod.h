#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriErrorNotifier_ErrorCallbackFunc; }

#define CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_CONVERTIDTOMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D3854D0)
#define CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1D385350)
#define CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3853D0)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_NativeMethod_TypeDefinitionIndex = 38852;

	class CriErrorNotifier_NativeMethod : public ::System::Object
	{
	public:
		static ::System::Void criErr_SetCallback(::CriWare::CriErrorNotifier_ErrorCallbackFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_ErrorCallbackFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_OFFSET))(a1);
		}

		static ::System::Void criErr_SetCallback_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_1_OFFSET))(a1);
		}

		static ::System::IntPtr criErr_ConvertIdToMessage(::System::IntPtr a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_CONVERTIDTOMESSAGE_OFFSET))(a1, a2, a3);
		}
	};
}
