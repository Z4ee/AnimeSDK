#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D3F00)
#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D3F30)
#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x183B6720)
#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x183D3E90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_PS5GameIntentCallback_TypeDefinitionIndex = 7710;

	class PSDelegate_PS5GameIntentCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::String*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
