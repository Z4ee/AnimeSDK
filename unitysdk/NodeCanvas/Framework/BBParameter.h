#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define NODECANVAS_FRAMEWORK_BBPARAMETER_ADD_ONVARIABLEREFERENCECHANGED_OFFSET UNITYSDK_OFFSET(0x1EB92910)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EB92A20)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_BB_OFFSET UNITYSDK_OFFSET(0x1EB93130)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1EB933C0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISNONEORNULL_OFFSET UNITYSDK_OFFSET(0x1EB93350)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0x1EB932C0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1EB93300)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISPRESUMEDDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1EB93270)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EB92DE0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_REFTYPE_OFFSET UNITYSDK_OFFSET(0x1EB933E0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_TARGETVARIABLEID_OFFSET UNITYSDK_OFFSET(0x1EB92D30)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_USEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EB928F0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EB93330)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_GET_VARREF_OFFSET UNITYSDK_OFFSET(0x1EB92D50)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_PROMOTETOVARIABLE_OFFSET UNITYSDK_OFFSET(0x1EB93E40)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_REMOVE_ONVARIABLEREFERENCECHANGED_OFFSET UNITYSDK_OFFSET(0x1EB92990)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_RESOLVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EB92F40)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SETBBFIELDS_OFFSET UNITYSDK_OFFSET(0x1EB92C50)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SETTARGETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1EB93430)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_BB_OFFSET UNITYSDK_OFFSET(0x1EB920F0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EB92DF0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_TARGETVARIABLEID_OFFSET UNITYSDK_OFFSET(0x1EB92D40)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_TSETTARGETVARIABLEID_OFFSET UNITYSDK_OFFSET(0x1EB928B0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_USEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EB93140)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EB93410)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_SET_VARREF_OFFSET UNITYSDK_OFFSET(0x1EB92D60)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB948C0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB92900)
#define NODECANVAS_FRAMEWORK_BBPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB928C0)
#define NODECANVAS_FRAMEWORK_BBPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB92A10)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int BBParameter_TypeDefinitionIndex = 30408;

	class BBParameter : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::String* _targetVariableID; // 0x18
		::NodeCanvas::Framework::IBlackboard* _bb; // 0x20
		::NodeCanvas::Framework::Variable* _varRef; // 0x28
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableReferenceChanged; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void set_TSetTargetVariableID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_TSETTARGETVARIABLEID_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void add_onVariableReferenceChanged(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_ADD_ONVARIABLEREFERENCECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableReferenceChanged(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_REMOVE_ONVARIABLEREFERENCECHANGED_OFFSET))(this, value);
		}

		static ::NodeCanvas::Framework::BBParameter* CreateInstance(::System::Type* t, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::System::Type*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_CREATEINSTANCE_OFFSET))(t, bb);
		}

		static ::System::Void SetBBFields(::System::Object* target, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::System::Void(*)(::System::Object*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SETBBFIELDS_OFFSET))(target, bb);
		}

		::System::String* get_targetVariableID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_TARGETVARIABLEID_OFFSET))(this);
		}

		::System::Void set_targetVariableID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_TARGETVARIABLEID_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Variable* get_varRef()
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_VARREF_OFFSET))(this);
		}

		::System::Void set_varRef(::NodeCanvas::Framework::Variable* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_VARREF_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_NAME_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::IBlackboard* get_bb()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_BB_OFFSET))(this);
		}

		::System::Void set_bb(::NodeCanvas::Framework::IBlackboard* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_BB_OFFSET))(this, value);
		}

		::System::Boolean get_useBlackboard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_USEBLACKBOARD_OFFSET))(this);
		}

		::System::Void set_useBlackboard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_USEBLACKBOARD_OFFSET))(this, value);
		}

		::System::Boolean get_isPresumedDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISPRESUMEDDYNAMIC_OFFSET))(this);
		}

		::System::Boolean get_isNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISNONE_OFFSET))(this);
		}

		::System::Boolean get_isNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_isNoneOrNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISNONEORNULL_OFFSET))(this);
		}

		::System::Boolean get_isDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_ISDEFINED_OFFSET))(this);
		}

		::System::Type* get_refType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_REFTYPE_OFFSET))(this);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void SetTargetVariable(::NodeCanvas::Framework::IBlackboard* targetBB, ::NodeCanvas::Framework::Variable* targetVariable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_SETTARGETVARIABLE_OFFSET))(this, targetBB, targetVariable);
		}

		::NodeCanvas::Framework::Variable* ResolveReference(::NodeCanvas::Framework::IBlackboard* targetBlackboard, ::System::Boolean useID)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_RESOLVEREFERENCE_OFFSET))(this, targetBlackboard, useID);
		}

		::NodeCanvas::Framework::Variable* PromoteToVariable(::NodeCanvas::Framework::IBlackboard* targetBB)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_PROMOTETOVARIABLE_OFFSET))(this, targetBB);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER_TOSTRING_OFFSET))(this);
		}
	};
}
