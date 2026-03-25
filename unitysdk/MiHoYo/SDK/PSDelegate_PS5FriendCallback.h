#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F992E0)
#define MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F99310)
#define MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15F98D90)
#define MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F98D70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_PS5FriendCallback_TypeDefinitionIndex = 6753;

	class PSDelegate_PS5FriendCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5FRIENDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
