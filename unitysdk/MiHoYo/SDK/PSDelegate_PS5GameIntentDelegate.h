#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C88360)
#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C88390)
#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C70F70)
#define MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C88350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_PS5GameIntentDelegate_TypeDefinitionIndex = 18630;

	class PSDelegate_PS5GameIntentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_PS5GAMEINTENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
