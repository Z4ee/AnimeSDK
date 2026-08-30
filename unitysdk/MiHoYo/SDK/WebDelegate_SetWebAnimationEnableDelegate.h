#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2690)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15CD26F0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2680)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebAnimationEnableDelegate_TypeDefinitionIndex = 7811;

	class WebDelegate_SetWebAnimationEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
