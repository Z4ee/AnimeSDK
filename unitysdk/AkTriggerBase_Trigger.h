#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERBASE_TRIGGER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F8C2EE0)
#define AKTRIGGERBASE_TRIGGER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F8C2F10)
#define AKTRIGGERBASE_TRIGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F8C29C0)
#define AKTRIGGERBASE_TRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C29A0)

inline static constexpr unsigned int AkTriggerBase_Trigger_TypeDefinitionIndex = 33818;

class AkTriggerBase_Trigger : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER_INVOKE_OFFSET))(this, in_gameObject);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* in_gameObject, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER_BEGININVOKE_OFFSET))(this, in_gameObject, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER_ENDINVOKE_OFFSET))(this, result);
	}
};
