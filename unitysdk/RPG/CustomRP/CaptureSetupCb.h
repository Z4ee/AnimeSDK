#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_CAPTURESETUPCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A810E0)
#define RPG_CUSTOMRP_CAPTURESETUPCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A81110)
#define RPG_CUSTOMRP_CAPTURESETUPCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A80E40)
#define RPG_CUSTOMRP_CAPTURESETUPCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7B270)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureSetupCb_TypeDefinitionIndex = 29230;

	class CaptureSetupCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
