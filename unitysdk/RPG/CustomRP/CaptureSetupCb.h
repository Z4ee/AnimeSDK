#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_CAPTURESETUPCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1781F620)
#define RPG_CUSTOMRP_CAPTURESETUPCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1781F650)
#define RPG_CUSTOMRP_CAPTURESETUPCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1781F610)
#define RPG_CUSTOMRP_CAPTURESETUPCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1781F5A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureSetupCb_TypeDefinitionIndex = 36064;

	class CaptureSetupCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESETUPCB_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
