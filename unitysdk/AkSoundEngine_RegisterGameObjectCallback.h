#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FBD8F60)
#define AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FBD8FE0)
#define AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FBD89D0)
#define AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD89B0)

inline static constexpr unsigned int AkSoundEngine_RegisterGameObjectCallback_TypeDefinitionIndex = 33664;

class AkSoundEngine_RegisterGameObjectCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::UnityEngine::GameObject* gameObject, ::System::UInt64 id)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK_INVOKE_OFFSET))(this, gameObject, id);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* gameObject, ::System::UInt64 id, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK_BEGININVOKE_OFFSET))(this, gameObject, id, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_REGISTERGAMEOBJECTCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
