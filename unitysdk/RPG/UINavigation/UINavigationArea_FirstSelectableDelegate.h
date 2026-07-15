#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19D55720)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19D55750)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19D52FA0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D556B0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_FirstSelectableDelegate_TypeDefinitionIndex = 49406;

	class UINavigationArea_FirstSelectableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Invoke()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
