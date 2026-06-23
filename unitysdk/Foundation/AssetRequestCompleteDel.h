#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUESTCOMPLETEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E1A4D10)
#define FOUNDATION_ASSETREQUESTCOMPLETEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E1A4D90)
#define FOUNDATION_ASSETREQUESTCOMPLETEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E1A4540)
#define FOUNDATION_ASSETREQUESTCOMPLETEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A1CC0)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestCompleteDel_TypeDefinitionIndex = 8041;

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
