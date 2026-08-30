#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF183B0)
#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF183E0)
#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF168F0)
#define AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF18340)

inline static constexpr unsigned int AkSoundEngine_GameObjectHashFunction_TypeDefinitionIndex = 43609;

class AkSoundEngine_GameObjectHashFunction : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Invoke(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_GAMEOBJECTHASHFUNCTION_ENDINVOKE_OFFSET))(this, a1);
	}
};
