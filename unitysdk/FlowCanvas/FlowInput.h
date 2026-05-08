#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Port.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class FlowNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define FLOWCANVAS_FLOWINPUT_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x1B0E8860)
#define FLOWCANVAS_FLOWINPUT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B0E8880)
#define FLOWCANVAS_FLOWINPUT_RECORDCALLINFO_OFFSET UNITYSDK_OFFSET(0x1B0E88B0)
#define FLOWCANVAS_FLOWINPUT_SET_POINTER_OFFSET UNITYSDK_OFFSET(0x1B0E8870)
#define FLOWCANVAS_FLOWINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E8720)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowInput_TypeDefinitionIndex = 28230;

	class FlowInput : public ::FlowCanvas::Port
	{
	public:
		static ::System::Action_2<::FlowCanvas::FlowInput*, ::FlowCanvas::FlowNode*>** StaticGet_OnCall()
		{
			return (::System::Action_2<::FlowCanvas::FlowInput*, ::FlowCanvas::FlowNode*>**)Il2CppClass::FromTypeDefinitionIndex(FlowInput_TypeDefinitionIndex)->GetStaticField(0x1FAF0);
		}
		::FlowCanvas::FlowHandler* _pointer_k__BackingField; // 0x38

		::System::Void _ctor(::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID, ::FlowCanvas::FlowHandler* pointer)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*, ::FlowCanvas::FlowHandler*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT__CTOR_OFFSET))(this, parent, name, ID, pointer);
		}

		::FlowCanvas::FlowHandler* get_pointer()
		{
			return ((::FlowCanvas::FlowHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT_GET_POINTER_OFFSET))(this);
		}

		::System::Void set_pointer(::FlowCanvas::FlowHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowHandler*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT_SET_POINTER_OFFSET))(this, value);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT_GET_TYPE_OFFSET))(this);
		}

		::System::Void RecordCallInfo(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWINPUT_RECORDCALLINFO_OFFSET))(this, f);
		}
	};
}
