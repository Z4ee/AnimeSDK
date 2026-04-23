#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA0EC140)
#define RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA0EC170)
#define RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0EB2D0)
#define RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EC120)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomButton_VoidDelegate_TypeDefinitionIndex = 66822;

	class CustomButton_VoidDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE_INVOKE_OFFSET))(this, go);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* go, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE_BEGININVOKE_OFFSET))(this, go, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON_VOIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
