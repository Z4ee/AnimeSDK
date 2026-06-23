#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodBaseNodeWrapper.h"

namespace FlowCanvas { class Port; }
namespace FlowCanvas::Nodes { class BaseReflectedMethodNode; }
namespace ParadoxNotion::Serialization { class ISerializedMethodBaseInfo; }
namespace ParadoxNotion::Serialization { class SerializedMethodInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CC35BA0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1CC35180)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC351E0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_REFLECTEDMETHODNODE_OFFSET UNITYSDK_OFFSET(0x1CC35160)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_SERIALIZEDMETHODBASE_OFFSET UNITYSDK_OFFSET(0x1CC351B0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_TMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC351C0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1CC35A00)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1CC35C20)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SETMETHODBASE_OFFSET UNITYSDK_OFFSET(0x1CC357C0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC35800)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SET_REFLECTEDMETHODNODE_OFFSET UNITYSDK_OFFSET(0x1CC35170)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SET_TMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC351D0)
#define FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC35CE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedMethodNodeWrapper_TypeDefinitionIndex = 30341;

	class ReflectedMethodNodeWrapper : public ::FlowCanvas::Nodes::ReflectedMethodBaseNodeWrapper
	{
	public:
		::FlowCanvas::Nodes::BaseReflectedMethodNode* _reflectedMethodNode_k__BackingField; // 0xB0
		::ParadoxNotion::Serialization::SerializedMethodInfo* _method; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER__CTOR_OFFSET))(this);
		}

		::FlowCanvas::Nodes::BaseReflectedMethodNode* get_reflectedMethodNode()
		{
			return ((::FlowCanvas::Nodes::BaseReflectedMethodNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_REFLECTEDMETHODNODE_OFFSET))(this);
		}

		::System::Void set_reflectedMethodNode(::FlowCanvas::Nodes::BaseReflectedMethodNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::BaseReflectedMethodNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SET_REFLECTEDMETHODNODE_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_METHOD_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedMethodBaseInfo* get_serializedMethodBase()
		{
			return ((::ParadoxNotion::Serialization::ISerializedMethodBaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_SERIALIZEDMETHODBASE_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::SerializedMethodInfo* get_TMethod()
		{
			return ((::ParadoxNotion::Serialization::SerializedMethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_TMETHOD_OFFSET))(this);
		}

		::System::Void set_TMethod(::ParadoxNotion::Serialization::SerializedMethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::SerializedMethodInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SET_TMETHOD_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::Void SetMethodBase(::System::Reflection::MethodBase* newMethod, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SETMETHODBASE_OFFSET))(this, newMethod, instance);
		}

		::System::Void SetMethod(::System::Reflection::MethodInfo* newMethod, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_SETMETHOD_OFFSET))(this, newMethod, instance);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDMETHODNODEWRAPPER_REGISTERPORTS_OFFSET))(this);
		}
	};
}
