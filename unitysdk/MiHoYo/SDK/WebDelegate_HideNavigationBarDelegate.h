#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C24AD0)
#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C24B70)
#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C225D0)
#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C249E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_HideNavigationBarDelegate_TypeDefinitionIndex = 7783;

	class WebDelegate_HideNavigationBarDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
