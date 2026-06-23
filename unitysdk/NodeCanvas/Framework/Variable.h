#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Reflection { class MemberInfo; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_FRAMEWORK_VARIABLE_ADD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D358340)
#define NODECANVAS_FRAMEWORK_VARIABLE_ADD_ONNAMECHANGED_OFFSET UNITYSDK_OFFSET(0x1D358140)
#define NODECANVAS_FRAMEWORK_VARIABLE_ADD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D358240)
#define NODECANVAS_FRAMEWORK_VARIABLE_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D358A70)
#define NODECANVAS_FRAMEWORK_VARIABLE_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D358910)
#define NODECANVAS_FRAMEWORK_VARIABLE_DUPLICATE_OFFSET UNITYSDK_OFFSET(0x1D358670)
#define NODECANVAS_FRAMEWORK_VARIABLE_GETGETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1D358930)
#define NODECANVAS_FRAMEWORK_VARIABLE_GETSETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1D358A90)
#define NODECANVAS_FRAMEWORK_VARIABLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D3584D0)
#define NODECANVAS_FRAMEWORK_VARIABLE_GET_ISEXPOSEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x1D358570)
#define NODECANVAS_FRAMEWORK_VARIABLE_GET_ISPROPERTYBOUND_OFFSET UNITYSDK_OFFSET(0x1D3585C0)
#define NODECANVAS_FRAMEWORK_VARIABLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D358440)
#define NODECANVAS_FRAMEWORK_VARIABLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D358530)
#define NODECANVAS_FRAMEWORK_VARIABLE_HASVALUECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1D3588A0)
#define NODECANVAS_FRAMEWORK_VARIABLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D358660)
#define NODECANVAS_FRAMEWORK_VARIABLE_REMOVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D3583C0)
#define NODECANVAS_FRAMEWORK_VARIABLE_REMOVE_ONNAMECHANGED_OFFSET UNITYSDK_OFFSET(0x1D3581C0)
#define NODECANVAS_FRAMEWORK_VARIABLE_REMOVE_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D3582C0)
#define NODECANVAS_FRAMEWORK_VARIABLE_SET_ISEXPOSEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x1D358600)
#define NODECANVAS_FRAMEWORK_VARIABLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D358450)
#define NODECANVAS_FRAMEWORK_VARIABLE_SET_TSETID_OFFSET UNITYSDK_OFFSET(0x1D358130)
#define NODECANVAS_FRAMEWORK_VARIABLE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D358550)
#define NODECANVAS_FRAMEWORK_VARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D358BD0)
#define NODECANVAS_FRAMEWORK_VARIABLE_TRYINVOKEVALUECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1D3588B0)
#define NODECANVAS_FRAMEWORK_VARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D358610)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Variable_TypeDefinitionIndex = 29162;

	class Variable : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* onNameChanged; // 0x10
		::System::Action_1<::System::Object*>* onValueChanged; // 0x18
		::System::String* _id; // 0x20
		::System::Action* onDestroy; // 0x28
		::System::String* _name; // 0x30
		::System::Boolean _isPublic; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE__CTOR_OFFSET))(this);
		}

		::System::Void set_TSetID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_SET_TSETID_OFFSET))(this, value);
		}

		::System::Void add_onNameChanged(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_ADD_ONNAMECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onNameChanged(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_REMOVE_ONNAMECHANGED_OFFSET))(this, value);
		}

		::System::Void add_onValueChanged(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_ADD_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onValueChanged(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_REMOVE_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void add_onDestroy(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_ADD_ONDESTROY_OFFSET))(this, value);
		}

		::System::Void remove_onDestroy(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_REMOVE_ONDESTROY_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GET_ID_OFFSET))(this);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_isExposedPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GET_ISEXPOSEDPUBLIC_OFFSET))(this);
		}

		::System::Void set_isExposedPublic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_SET_ISEXPOSEDPUBLIC_OFFSET))(this, value);
		}

		::System::Boolean get_isPropertyBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GET_ISPROPERTYBOUND_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_ONDESTROY_OFFSET))(this);
		}

		::NodeCanvas::Framework::Variable* Duplicate(::NodeCanvas::Framework::IBlackboard* targetBB)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_DUPLICATE_OFFSET))(this, targetBB);
		}

		::System::Boolean HasValueChangeEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_HASVALUECHANGEEVENT_OFFSET))(this);
		}

		::System::Void TryInvokeValueChangeEvent(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_TRYINVOKEVALUECHANGEEVENT_OFFSET))(this, value);
		}

		::System::Boolean CanConvertTo(::System::Type* toType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_CANCONVERTTO_OFFSET))(this, toType);
		}

		::System::Func_1<::System::Object*>* GetGetConverter(::System::Type* toType)
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GETGETCONVERTER_OFFSET))(this, toType);
		}

		::System::Boolean CanConvertFrom(::System::Type* fromType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_CANCONVERTFROM_OFFSET))(this, fromType);
		}

		::System::Action_1<::System::Object*>* GetSetConverter(::System::Type* fromType)
		{
			return ((::System::Action_1<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_GETSETCONVERTER_OFFSET))(this, fromType);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE_TOSTRING_OFFSET))(this);
		}
	};
}
