#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C9A730)
#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C9A7C0)
#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C9A3A0)
#define MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9A390)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_LogReportEpicDelegate_TypeDefinitionIndex = 18588;

	class EOSDelegate_LogReportEpicDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::KibanaLogLevel level, ::System::String* key, ::MiHoYo::SDK::JSONObject* objectJson)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_INVOKE_OFFSET))(this, level, key, objectJson);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::KibanaLogLevel level, ::System::String* key, ::MiHoYo::SDK::JSONObject* objectJson, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_BEGININVOKE_OFFSET))(this, level, key, objectJson, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGREPORTEPICDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
