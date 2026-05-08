#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow_ReturnData.h"
#include "unitysdk/System/ValueType.h"

namespace FlowCanvas { class FlowBreak; }
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class FlowReturn; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLOWCANVAS_FLOW_BEGINBREAKBLOCK_OFFSET UNITYSDK_OFFSET(0x686700)
#define FLOWCANVAS_FLOW_BREAK_OFFSET UNITYSDK_OFFSET(0x94EC40)
#define FLOWCANVAS_FLOW_CALL_OFFSET UNITYSDK_OFFSET(0x94EBD0)
#define FLOWCANVAS_FLOW_ENDBREAKBLOCK_OFFSET UNITYSDK_OFFSET(0x94EC30)
#define FLOWCANVAS_FLOW_GET_NEW_OFFSET UNITYSDK_OFFSET(0x1B0A96B0)
#define FLOWCANVAS_FLOW_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define FLOWCANVAS_FLOW_RETURN_OFFSET UNITYSDK_OFFSET(0x94EC20)
#define FLOWCANVAS_FLOW_SETRETURNDATA_OFFSET UNITYSDK_OFFSET(0x94EC10)
#define FLOWCANVAS_FLOW_SET_TICKS_OFFSET UNITYSDK_OFFSET(0x2E85F0)

namespace FlowCanvas
{
	inline static constexpr unsigned int Flow_TypeDefinitionIndex = 26998;

	struct alignas(8) Flow
	{
		::System::Int32 _ticks_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters; // 0x18
		::FlowCanvas::Flow_ReturnData returnData; // 0x20
		::FlowCanvas::FlowBreak* breakCall; // 0x30

		::System::Int32 get_ticks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_GET_TICKS_OFFSET))(this);
		}

		::System::Void set_ticks(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_SET_TICKS_OFFSET))(this, value);
		}

		static ::FlowCanvas::Flow get_New()
		{
			return ((::FlowCanvas::Flow(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_GET_NEW_OFFSET))();
		}

		::System::Void Call(::FlowCanvas::FlowOutput* port)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_CALL_OFFSET))(this, port);
		}

		::System::Void SetReturnData(::FlowCanvas::FlowReturn* call, ::System::Type* expectedType)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowReturn*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_SETRETURNDATA_OFFSET))(this, call, expectedType);
		}

		::System::Void Return(::System::Object* value, ::FlowCanvas::FlowNode* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_RETURN_OFFSET))(this, value, context);
		}

		::System::Void BeginBreakBlock(::FlowCanvas::FlowBreak* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowBreak*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_BEGINBREAKBLOCK_OFFSET))(this, callback);
		}

		::System::Void EndBreakBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_ENDBREAKBLOCK_OFFSET))(this);
		}

		::System::Void Break(::FlowCanvas::FlowNode* context)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_BREAK_OFFSET))(this, context);
		}
	};
}
