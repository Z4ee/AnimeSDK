#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D298C0)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D298F0)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D29240)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8__CTOR_OFFSET UNITYSDK_OFFSET(0x9D298A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoProjectileEffect_Class_3_9B348C64E713AFA8_TypeDefinitionIndex = 57407;

	class MonoProjectileEffect_Class_3_9B348C64E713AFA8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Collider* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Collider*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_CLASS_3_9B348C64E713AFA8_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
