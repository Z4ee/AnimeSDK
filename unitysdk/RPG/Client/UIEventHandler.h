#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1701AE90)
#define RPG_CLIENT_UIEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1701AEC0)
#define RPG_CLIENT_UIEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1701AE80)
#define RPG_CLIENT_UIEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1701AD90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIEventHandler_TypeDefinitionIndex = 68978;

	class UIEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
