#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB877E00)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB877E30)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB875240)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB877DE0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_FirstSelectableDelegate_TypeDefinitionIndex = 47792;

	class UINavigationArea_FirstSelectableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::GameObject* Invoke()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
