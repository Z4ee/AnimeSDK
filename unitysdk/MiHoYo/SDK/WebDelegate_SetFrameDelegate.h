#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD80CA0)
#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD80D50)
#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7CB70)
#define MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD80BB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetFrameDelegate_TypeDefinitionIndex = 7789;

	class WebDelegate_SetFrameDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETFRAMEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
