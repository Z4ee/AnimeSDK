#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace NodeCanvas::Framework { template <typename T> class Variable_1; }
namespace NodeCanvas::Framework::Internal { class BlackboardSource; }
namespace ParadoxNotion::Serialization { class SerializationPair; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define NODECANVAS_FRAMEWORK_BLACKBOARD_ADDVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1D528170)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_ADDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D528160)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_ADD_ONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1D527C90)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_ADD_ONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1D527D90)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D528010)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D527B50)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_GETVARIABLEBYID_OFFSET UNITYSDK_OFFSET(0x1D5281A0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D528190)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1D528530)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_LOAD_OFFSET UNITYSDK_OFFSET(0x1D5284C0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D527E90)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_INDEPENDANTVARIABLESFIELDNAME_OFFSET UNITYSDK_OFFSET(0x1D527F10)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1D527F00)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PROPERTIESBINDTARGET_OFFSET UNITYSDK_OFFSET(0x1D527EE0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_UNITYCONTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D527EF0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1D527EA0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_SET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1D527EC0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1D527F50)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1D527FB0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D528680)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D5285F0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_REMOVEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D528180)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_REMOVE_ONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1D527D10)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_REMOVE_ONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1D527E10)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SAVE_1_OFFSET UNITYSDK_OFFSET(0x1D5283D0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SAVE_OFFSET UNITYSDK_OFFSET(0x1D528280)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SELFDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D527870)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SELFSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5274B0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D527AC0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1D5281C0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SETVARIABLEVALUE_OFFSET UNITYSDK_OFFSET(0x1D5281B0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_SHOWJSON_OFFSET UNITYSDK_OFFSET(0x1D5281D0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D528670)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D527860)
#define NODECANVAS_FRAMEWORK_BLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5274A0)
#define NODECANVAS_FRAMEWORK_BLACKBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D528760)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Blackboard_TypeDefinitionIndex = 30595;

	class Blackboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _serializedBlackboard; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _objectReferences; // 0x20
		::Il2CppArray<::ParadoxNotion::Serialization::SerializationPair*>* _serializedVariables; // 0x28
		::NodeCanvas::Framework::Internal::BlackboardSource* _blackboard; // 0x30
		::System::Boolean haltForUndo; // 0x38
		::System::String* _identifier; // 0x40
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableAdded; // 0x48
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableRemoved; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SelfSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SELFSERIALIZE_OFFSET))(this);
		}

		::System::Void SelfDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SELFDESERIALIZE_OFFSET))(this);
		}

		::System::String* Serialize(::System::Collections::Generic::List_1<::UnityEngine::Object*>* references, ::System::Boolean pretyJson)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SERIALIZE_OFFSET))(this, references, pretyJson);
		}

		::System::Boolean Deserialize(::System::String* json, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references, ::System::Boolean removeMissingVariables)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_DESERIALIZE_OFFSET))(this, json, references, removeMissingVariables);
		}

		::System::Void add_onVariableAdded(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_ADD_ONVARIABLEADDED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableAdded(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_REMOVE_ONVARIABLEADDED_OFFSET))(this, value);
		}

		::System::Void add_onVariableRemoved(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_ADD_ONVARIABLEREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableRemoved(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_REMOVE_ONVARIABLEREMOVED_OFFSET))(this, value);
		}

		::System::String* NodeCanvas_Framework_IBlackboard_get_identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* NodeCanvas_Framework_IBlackboard_get_variables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_VARIABLES_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_set_variables(::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_SET_VARIABLES_OFFSET))(this, value);
		}

		::UnityEngine::Component* NodeCanvas_Framework_IBlackboard_get_propertiesBindTarget()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PROPERTIESBINDTARGET_OFFSET))(this);
		}

		::UnityEngine::Object* NodeCanvas_Framework_IBlackboard_get_unityContextObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_UNITYCONTEXTOBJECT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* NodeCanvas_Framework_IBlackboard_get_parent()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PARENT_OFFSET))(this);
		}

		::System::String* NodeCanvas_Framework_IBlackboard_get_independantVariablesFieldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_INDEPENDANTVARIABLESFIELDNAME_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_TryInvokeOnVariableAdded(::NodeCanvas::Framework::Variable* variable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEADDED_OFFSET))(this, variable);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_TryInvokeOnVariableRemoved(::NodeCanvas::Framework::Variable* variable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEREMOVED_OFFSET))(this, variable);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_AWAKE_OFFSET))(this);
		}

		::NodeCanvas::Framework::Variable* AddVariable(::System::String* name, ::System::Type* type)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_ADDVARIABLE_OFFSET))(this, name, type);
		}

		::NodeCanvas::Framework::Variable* AddVariable_1(::System::String* name, ::System::Object* value)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_ADDVARIABLE_1_OFFSET))(this, name, value);
		}

		::NodeCanvas::Framework::Variable* RemoveVariable(::System::String* name)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_REMOVEVARIABLE_OFFSET))(this, name);
		}

		::NodeCanvas::Framework::Variable* GetVariable(::System::String* name, ::System::Type* ofType)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_GETVARIABLE_OFFSET))(this, name, ofType);
		}

		::NodeCanvas::Framework::Variable* GetVariableByID(::System::String* ID)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_GETVARIABLEBYID_OFFSET))(this, ID);
		}

		::NodeCanvas::Framework::Variable* SetVariableValue(::System::String* name, ::System::Object* value)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SETVARIABLEVALUE_OFFSET))(this, name, value);
		}

		::NodeCanvas::Framework::Variable* SetValue(::System::String* name, ::System::Object* value)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SETVALUE_OFFSET))(this, name, value);
		}

		::System::Void ShowJson()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SHOWJSON_OFFSET))(this);
		}

		::System::String* Save()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SAVE_OFFSET))(this);
		}

		::System::String* Save_1(::System::String* saveKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_SAVE_1_OFFSET))(this, saveKey);
		}

		::System::Boolean Load()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_LOAD_OFFSET))(this);
		}

		::System::Boolean Load_1(::System::String* saveKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_LOAD_1_OFFSET))(this, saveKey);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_ONVALIDATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_TOSTRING_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BLACKBOARD_ONDESTROY_OFFSET))(this);
		}
	};
}
