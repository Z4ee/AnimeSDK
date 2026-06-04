#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18465A80)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18465AE0)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184620A0)
#define MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18465990)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetBackButtonEnabledDelegate_TypeDefinitionIndex = 7778;

	class WebDelegate_SetBackButtonEnabledDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETBACKBUTTONENABLEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
