#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace ParadoxNotion::Serialization { class ISerializedMethodBaseInfo; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class MethodBase; }

#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GETRUNTIMEICONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF22C30)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_CALLABLE_OFFSET UNITYSDK_OFFSET(0x1AF22D70)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_EXPOSEDPARAMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF22DE0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_EXPOSEPARAMS_OFFSET UNITYSDK_OFFSET(0x1AF22DA0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1AF22C80)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1AF22C20)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SETDEFAULTPARAMETERVALUES_OFFSET UNITYSDK_OFFSET(0x1AF22E20)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SETDROPINSTANCEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AF22FC0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SET_CALLABLE_OFFSET UNITYSDK_OFFSET(0x1AF22D80)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SET_EXPOSEDPARAMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF22DF0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SET_EXPOSEPARAMS_OFFSET UNITYSDK_OFFSET(0x1AF22DB0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF230A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedMethodBaseNodeWrapper_TypeDefinitionIndex = 27623;

	class ReflectedMethodBaseNodeWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Boolean _exposeParams; // 0xA8
		::System::Boolean _callable; // 0xA9
		::System::Int32 _exposedParamsCount; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Type* GetRuntimeIconType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GETRUNTIMEICONTYPE_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_method()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_METHOD_OFFSET))(this);
		}

		::System::Boolean get_callable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_CALLABLE_OFFSET))(this);
		}

		::System::Void set_callable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SET_CALLABLE_OFFSET))(this, value);
		}

		::System::Boolean get_exposeParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_EXPOSEPARAMS_OFFSET))(this);
		}

		::System::Void set_exposeParams(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SET_EXPOSEPARAMS_OFFSET))(this, value);
		}

		::System::Int32 get_exposedParamsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_GET_EXPOSEDPARAMSCOUNT_OFFSET))(this);
		}

		::System::Void set_exposedParamsCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SET_EXPOSEDPARAMSCOUNT_OFFSET))(this, value);
		}

		::System::Void SetDefaultParameterValues(::System::Reflection::MethodBase* newMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SETDEFAULTPARAMETERVALUES_OFFSET))(this, newMethod);
		}

		::System::Void SetDropInstanceReference(::System::Reflection::MethodBase* newMethod, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODBASENODEWRAPPER_SETDROPINSTANCEREFERENCE_OFFSET))(this, newMethod, instance);
		}
	};
}
