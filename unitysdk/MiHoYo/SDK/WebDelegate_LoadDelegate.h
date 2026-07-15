#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C24D80)
#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C24DC0)
#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C223E0)
#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C24C90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_LoadDelegate_TypeDefinitionIndex = 7777;

	class WebDelegate_LoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
