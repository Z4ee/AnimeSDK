#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C00CA80)
#define FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C00CB10)
#define FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C00C260)
#define FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00C250)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestCompleteDelWithUserData_TypeDefinitionIndex = 8083;

	class AssetRequestCompleteDelWithUserData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle, ::System::Object* userData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA_INVOKE_OFFSET))(this, asset, handle, userData);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle, ::System::Object* userData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA_BEGININVOKE_OFFSET))(this, asset, handle, userData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTCOMPLETEDELWITHUSERDATA_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
