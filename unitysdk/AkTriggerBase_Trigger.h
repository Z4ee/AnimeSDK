#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERBASE_TRIGGER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F5EA2F0)
#define AKTRIGGERBASE_TRIGGER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F5EA320)
#define AKTRIGGERBASE_TRIGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F5EA2E0)
#define AKTRIGGERBASE_TRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EA270)

inline static constexpr unsigned int AkTriggerBase_Trigger_TypeDefinitionIndex = 44960;

class AkTriggerBase_Trigger : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_TRIGGER_ENDINVOKE_OFFSET))(this, a1);
	}
};
