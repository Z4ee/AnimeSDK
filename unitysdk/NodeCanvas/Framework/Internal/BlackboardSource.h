#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_ADD_ONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1DB9AFC0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_ADD_ONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1DB9B0C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1DB9B1C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1DB9B220)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_PROPERTIESBINDTARGET_OFFSET UNITYSDK_OFFSET(0x1DB9B260)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_UNITYCONTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1DB9B240)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1DB9B200)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_INDEPENDANTVARIABLESFIELDNAME_OFFSET UNITYSDK_OFFSET(0x1DB9B280)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1DB9B290)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1DB9B2F0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_REMOVE_ONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1DB9B040)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_REMOVE_ONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1DB9B140)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1DB9B230)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_PROPERTIESBINDTARGET_OFFSET UNITYSDK_OFFSET(0x1DB9B270)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_UNITYCONTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1DB9B250)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1DB9B210)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB9B490)
#define NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9B350)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int BlackboardSource_TypeDefinitionIndex = 29567;

	class BlackboardSource : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* _variables; // 0x10
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableAdded; // 0x18
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableRemoved; // 0x20
		::NodeCanvas::Framework::IBlackboard* _parent_k__BackingField; // 0x28
		::UnityEngine::Object* _unityContextObject_k__BackingField; // 0x30
		::UnityEngine::Component* _propertiesBindTarget_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void add_onVariableAdded(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_ADD_ONVARIABLEADDED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableAdded(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_REMOVE_ONVARIABLEADDED_OFFSET))(this, value);
		}

		::System::Void add_onVariableRemoved(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_ADD_ONVARIABLEREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableRemoved(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_REMOVE_ONVARIABLEREMOVED_OFFSET))(this, value);
		}

		::System::String* get_identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* get_variables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_VARIABLES_OFFSET))(this);
		}

		::System::Void set_variables(::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_VARIABLES_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::IBlackboard* get_parent()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::NodeCanvas::Framework::IBlackboard* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_PARENT_OFFSET))(this, value);
		}

		::UnityEngine::Object* get_unityContextObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_UNITYCONTEXTOBJECT_OFFSET))(this);
		}

		::System::Void set_unityContextObject(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_UNITYCONTEXTOBJECT_OFFSET))(this, value);
		}

		::UnityEngine::Component* get_propertiesBindTarget()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_GET_PROPERTIESBINDTARGET_OFFSET))(this);
		}

		::System::Void set_propertiesBindTarget(::UnityEngine::Component* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_SET_PROPERTIESBINDTARGET_OFFSET))(this, value);
		}

		::System::String* NodeCanvas_Framework_IBlackboard_get_independantVariablesFieldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_INDEPENDANTVARIABLESFIELDNAME_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_TryInvokeOnVariableAdded(::NodeCanvas::Framework::Variable* variable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEADDED_OFFSET))(this, variable);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_TryInvokeOnVariableRemoved(::NodeCanvas::Framework::Variable* variable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEREMOVED_OFFSET))(this, variable);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BLACKBOARDSOURCE_TOSTRING_OFFSET))(this);
		}
	};
}
