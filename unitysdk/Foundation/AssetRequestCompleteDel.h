#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUESTCOMPLETEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE56440)
#define FOUNDATION_ASSETREQUESTCOMPLETEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE564C0)
#define FOUNDATION_ASSETREQUESTCOMPLETEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE55C70)
#define FOUNDATION_ASSETREQUESTCOMPLETEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE53400)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestCompleteDel_TypeDefinitionIndex = 7709;

	class AssetRequestCompleteDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDEL_INVOKE_OFFSET))(this, asset, handle);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDEL_BEGININVOKE_OFFSET))(this, asset, handle, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
