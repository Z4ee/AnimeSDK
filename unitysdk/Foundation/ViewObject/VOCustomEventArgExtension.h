#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_VOCUSTOMEVENTARGEXTENSION_NOTIFYCOMPONENTCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15FA4CE0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int VOCustomEventArgExtension_TypeDefinitionIndex = 87204;

	class VOCustomEventArgExtension : public ::System::Object
	{
	public:
		static ::System::Void NotifyComponentCustomEvent(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectComponentCustomEvent customEvent)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectComponentCustomEvent))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VOCUSTOMEVENTARGEXTENSION_NOTIFYCOMPONENTCUSTOMEVENT_OFFSET))(handle, customEvent);
		}
	};
}
