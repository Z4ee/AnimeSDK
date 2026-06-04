#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1830DAB0)
#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1830DB20)
#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1830DA90)
#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830DA20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_LogReportEpicDelegate_TypeDefinitionIndex = 7669;

	class EOSDelegate_LogReportEpicDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::KibanaLogLevel a1, ::System::String* a2, ::MiHoYo::SDK::JSONObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::KibanaLogLevel a1, ::System::String* a2, ::MiHoYo::SDK::JSONObject* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
