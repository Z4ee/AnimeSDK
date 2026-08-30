#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC8D80)
#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC8DC0)
#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC79C0)
#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC8D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_LoadAssetDelegate_TypeDefinitionIndex = 7738;

	class SDKDelegate_LoadAssetDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* Invoke(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Type* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
