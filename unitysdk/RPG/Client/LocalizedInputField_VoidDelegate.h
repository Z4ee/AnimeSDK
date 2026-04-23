#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA6FA280)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA6FA2B0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA6F8E00)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6FA260)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedInputField_VoidDelegate_TypeDefinitionIndex = 66856;

	class LocalizedInputField_VoidDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_INVOKE_OFFSET))(this, go);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* go, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_BEGININVOKE_OFFSET))(this, go, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_VOIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
