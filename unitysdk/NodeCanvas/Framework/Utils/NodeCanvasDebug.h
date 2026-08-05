#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_EDITORLOGERROR_OFFSET UNITYSDK_OFFSET(0x1DAF09A0)
#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1DAF0850)
#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1DAF0700)
#define NODECANVAS_FRAMEWORK_UTILS_NODECANVASDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0A90)

namespace NodeCanvas::Framework::Utils
{
	inline static constexpr unsigned int NodeCanvasDebug_TypeDefinitionIndex = 29900;

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
