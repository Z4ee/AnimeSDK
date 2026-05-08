#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace NodeCanvas::Framework::Internal { class BlackboardSource; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_ADD_ONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1A900AD0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_ADD_ONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1A900BD0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A901040)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A901060)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_GET_UID_OFFSET UNITYSDK_OFFSET(0x1A901050)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_INDEPENDANTVARIABLESFIELDNAME_OFFSET UNITYSDK_OFFSET(0x1A900F70)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A900F50)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PROPERTIESBINDTARGET_OFFSET UNITYSDK_OFFSET(0x1A900F60)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_UNITYCONTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1A900F40)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1A900F00)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_SET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1A900F20)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1A900F80)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1A900FE0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_REMOVE_ONVARIABLEADDED_OFFSET UNITYSDK_OFFSET(0x1A900B50)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_REMOVE_ONVARIABLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1A900C50)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_SELFDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A900E70)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_SELFSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A900CE0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_SHOWJSON_OFFSET UNITYSDK_OFFSET(0x1A901070)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9010D0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A900DE0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A900CD0)
#define NODECANVAS_FRAMEWORK_ASSETBLACKBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9010E0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int AssetBlackboard_TypeDefinitionIndex = 28168;

	class AssetBlackboard : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableAdded; // 0x18
		::System::Action_1<::NodeCanvas::Framework::Variable*>* onVariableRemoved; // 0x20
		::System::String* _serializedBlackboard; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _objectReferences; // 0x30
		::System::String* _UID; // 0x38
		::System::String* _identifier; // 0x40
		::NodeCanvas::Framework::Internal::BlackboardSource* _blackboard; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD__CTOR_OFFSET))(this);
		}

		::System::Void add_onVariableAdded(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_ADD_ONVARIABLEADDED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableAdded(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_REMOVE_ONVARIABLEADDED_OFFSET))(this, value);
		}

		::System::Void add_onVariableRemoved(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_ADD_ONVARIABLEREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_onVariableRemoved(::System::Action_1<::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_REMOVE_ONVARIABLEREMOVED_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SelfSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_SELFSERIALIZE_OFFSET))(this);
		}

		::System::Void SelfDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_SELFDESERIALIZE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* NodeCanvas_Framework_IBlackboard_get_variables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_VARIABLES_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_set_variables(::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Variable*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_SET_VARIABLES_OFFSET))(this, value);
		}

		::UnityEngine::Object* NodeCanvas_Framework_IBlackboard_get_unityContextObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_UNITYCONTEXTOBJECT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* NodeCanvas_Framework_IBlackboard_get_parent()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PARENT_OFFSET))(this);
		}

		::UnityEngine::Component* NodeCanvas_Framework_IBlackboard_get_propertiesBindTarget()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_PROPERTIESBINDTARGET_OFFSET))(this);
		}

		::System::String* NodeCanvas_Framework_IBlackboard_get_independantVariablesFieldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_GET_INDEPENDANTVARIABLESFIELDNAME_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_TryInvokeOnVariableAdded(::NodeCanvas::Framework::Variable* variable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEADDED_OFFSET))(this, variable);
		}

		::System::Void NodeCanvas_Framework_IBlackboard_TryInvokeOnVariableRemoved(::NodeCanvas::Framework::Variable* variable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_NODECANVAS_FRAMEWORK_IBLACKBOARD_TRYINVOKEONVARIABLEREMOVED_OFFSET))(this, variable);
		}

		::System::String* get_identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::String* get_UID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_GET_UID_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_GET_NAME_OFFSET))(this);
		}

		::System::Void ShowJson()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_SHOWJSON_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ASSETBLACKBOARD_TOSTRING_OFFSET))(this);
		}
	};
}
