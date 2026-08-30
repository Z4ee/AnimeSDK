#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2320)
#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2380)
#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2310)
#define MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2220)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetNewWindowTypeDelegate_TypeDefinitionIndex = 7794;

	class WebDelegate_SetNewWindowTypeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETNEWWINDOWTYPEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
