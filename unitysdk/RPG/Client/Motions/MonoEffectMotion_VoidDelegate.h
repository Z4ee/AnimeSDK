#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD8C00E0)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD8C0110)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD8C0050)
#define RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8C0070)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoEffectMotion_VoidDelegate_TypeDefinitionIndex = 73390;

	class MonoEffectMotion_VoidDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOEFFECTMOTION_VOIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
