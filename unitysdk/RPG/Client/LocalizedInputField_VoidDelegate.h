#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE5A370)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE5A3A0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE5A360)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5A2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedInputField_VoidDelegate_TypeDefinitionIndex = 67796;

	class LocalizedInputField_VoidDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
