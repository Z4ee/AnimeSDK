#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAE7BE0)
#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAE7C20)
#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAE7650)
#define MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE7630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_LoadAssetDelegate_TypeDefinitionIndex = 19893;

	class SDKDelegate_LoadAssetDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Object* Invoke(::System::String* path, ::System::Type* assetType)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_INVOKE_OFFSET))(this, path, assetType);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* path, ::System::Type* assetType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_BEGININVOKE_OFFSET))(this, path, assetType, callback, object);
		}

		::UnityEngine::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADASSETDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
