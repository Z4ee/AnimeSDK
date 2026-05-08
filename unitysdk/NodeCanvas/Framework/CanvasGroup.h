#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_CANVASGROUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7E9300)
#define NODECANVAS_FRAMEWORK_CANVASGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E92F0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int CanvasGroup_TypeDefinitionIndex = 26765;

	class CanvasGroup : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Rect rect; // 0x18
		::UnityEngine::Color color; // 0x28
		::System::Boolean autoGroup; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CANVASGROUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Rect rect, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CANVASGROUP__CTOR_1_OFFSET))(this, rect, name);
		}
	};
}
