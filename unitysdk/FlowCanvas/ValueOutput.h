#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Port.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueHandlerObject; }
namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FLOWCANVAS_VALUEOUTPUT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DB95CE0)
#define FLOWCANVAS_VALUEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB95CD0)

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueOutput_TypeDefinitionIndex = 30623;

	class ValueOutput : public ::FlowCanvas::Port
	{
	public:
		::System::Void _ctor(::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEOUTPUT__CTOR_OFFSET))(this, parent, name, ID);
		}

		static ::FlowCanvas::ValueOutput* CreateInstance(::System::Type* t, ::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID, ::FlowCanvas::ValueHandlerObject* getter)
		{
			return ((::FlowCanvas::ValueOutput*(*)(::System::Type*, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*, ::FlowCanvas::ValueHandlerObject*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEOUTPUT_CREATEINSTANCE_OFFSET))(t, parent, name, ID, getter);
		}
	};
}
