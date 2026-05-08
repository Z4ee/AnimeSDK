#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_EDITORLOGERROR_OFFSET UNITYSDK_OFFSET(0x1A20D3B0)
#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1A20D260)
#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1A20D110)
#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20D4A0)

namespace NodeCanvas::Framework::Utils
{
	inline static constexpr unsigned int NodeCanvasDebug_TypeDefinitionIndex = 26542;

	class NodeCanvasDebug : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void Log(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_LOG_OFFSET))(message, args);
		}

		static ::System::Void LogError(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_LOGERROR_OFFSET))(message, args);
		}

		static ::System::Void EditorLogError(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_EDITORLOGERROR_OFFSET))(message, args);
		}
	};
}
