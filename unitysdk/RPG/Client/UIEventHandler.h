#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA68E6F0)
#define RPG_CLIENT_UIEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA68E720)
#define RPG_CLIENT_UIEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA68E1A0)
#define RPG_CLIENT_UIEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA68E180)

namespace RPG::Client
{
	inline static constexpr unsigned int UIEventHandler_TypeDefinitionIndex = 56376;

	class UIEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER_INVOKE_OFFSET))(this, eventData);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER_BEGININVOKE_OFFSET))(this, eventData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
