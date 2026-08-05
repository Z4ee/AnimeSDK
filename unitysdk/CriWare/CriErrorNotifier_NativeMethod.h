#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriErrorNotifier_ErrorCallbackFunc; }

#define CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_CONVERTIDTOMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FBEA3A0)
#define CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1FBEA320)
#define CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FBEA290)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_NativeMethod_TypeDefinitionIndex = 34998;

	class CriErrorNotifier_NativeMethod : public ::System::Object
	{
	public:
		static ::System::Void criErr_SetCallback(::CriWare::CriErrorNotifier_ErrorCallbackFunc* callback)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_ErrorCallbackFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_OFFSET))(callback);
		}

		static ::System::Void criErr_SetCallback_1(::System::IntPtr callback)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_SETCALLBACK_1_OFFSET))(callback);
		}

		static ::System::IntPtr criErr_ConvertIdToMessage(::System::IntPtr errmsgPtr, ::System::UInt32 p1, ::System::UInt32 p2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_NATIVEMETHOD_CRIERR_CONVERTIDTOMESSAGE_OFFSET))(errmsgPtr, p1, p2);
		}
	};
}
