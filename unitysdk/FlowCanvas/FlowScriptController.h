#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_1.h"

namespace FlowCanvas { class FlowScript; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FLOWCANVAS_FLOWSCRIPTCONTROLLER_CALLFUNCTIONASYNC_OFFSET UNITYSDK_OFFSET(0x1BC3F2B0)
#define FLOWCANVAS_FLOWSCRIPTCONTROLLER_CALLFUNCTION_1_OFFSET UNITYSDK_OFFSET(0x1BC3F250)
#define FLOWCANVAS_FLOWSCRIPTCONTROLLER_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BC3F1F0)
#define FLOWCANVAS_FLOWSCRIPTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3F320)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowScriptController_TypeDefinitionIndex = 29215;

	class FlowScriptController : public ::NodeCanvas::Framework::GraphOwner_1<::FlowCanvas::FlowScript*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWSCRIPTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void CallFunction(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWSCRIPTCONTROLLER_CALLFUNCTION_OFFSET))(this, name);
		}

		::System::Object* CallFunction_1(::System::String* name, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWSCRIPTCONTROLLER_CALLFUNCTION_1_OFFSET))(this, name, args);
		}

		::System::Void CallFunctionAsync(::System::String* name, ::System::Action_1<::System::Object*>* callback, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWSCRIPTCONTROLLER_CALLFUNCTIONASYNC_OFFSET))(this, name, callback, args);
		}
	};
}
