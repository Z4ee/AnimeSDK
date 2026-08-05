#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlowCanvas { class FlowReturn; }
namespace System { class Type; }

#define FLOWCANVAS_FLOW_RETURNDATA_GET_RETURNCALL_OFFSET UNITYSDK_OFFSET(0x259D70)
#define FLOWCANVAS_FLOW_RETURNDATA_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define FLOWCANVAS_FLOW_RETURNDATA_SET_RETURNCALL_OFFSET UNITYSDK_OFFSET(0x324D50)
#define FLOWCANVAS_FLOW_RETURNDATA_SET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x462A80)
#define FLOWCANVAS_FLOW_RETURNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace FlowCanvas
{
	inline static constexpr unsigned int Flow_ReturnData_TypeDefinitionIndex = 31087;

	struct alignas(8) Flow_ReturnData
	{
		::FlowCanvas::FlowReturn* _returnCall_k__BackingField; // 0x10
		::System::Type* _returnType_k__BackingField; // 0x18

		::System::Void _ctor(::FlowCanvas::FlowReturn* call, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowReturn*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_RETURNDATA__CTOR_OFFSET))(this, call, type);
		}

		::FlowCanvas::FlowReturn* get_returnCall()
		{
			return ((::FlowCanvas::FlowReturn*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_RETURNDATA_GET_RETURNCALL_OFFSET))(this);
		}

		::System::Void set_returnCall(::FlowCanvas::FlowReturn* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowReturn*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_RETURNDATA_SET_RETURNCALL_OFFSET))(this, value);
		}

		::System::Type* get_returnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_RETURNDATA_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Void set_returnType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOW_RETURNDATA_SET_RETURNTYPE_OFFSET))(this, value);
		}
	};
}
