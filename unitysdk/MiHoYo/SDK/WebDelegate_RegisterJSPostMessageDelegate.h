#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184656A0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184656E0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184627A0)
#define MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x184655B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_RegisterJSPostMessageDelegate_TypeDefinitionIndex = 7802;

	class WebDelegate_RegisterJSPostMessageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_REGISTERJSPOSTMESSAGEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
