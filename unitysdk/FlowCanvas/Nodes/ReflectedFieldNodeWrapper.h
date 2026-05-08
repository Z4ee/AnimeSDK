#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedFieldNodeWrapper_AccessMode.h"

namespace FlowCanvas::Nodes { class BaseReflectedFieldNode; }
namespace FlowCanvas::Nodes { class ReflectedFieldNodeWrapper_0; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedFieldInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GETRUNTIMEICONTYPE_OFFSET UNITYSDK_OFFSET(0x19847CB0)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x19847CE0)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19847D60)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_REFLECTEDFIELDNODE_OFFSET UNITYSDK_OFFSET(0x19847D00)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_TACCESSMODE_OFFSET UNITYSDK_OFFSET(0x19847D40)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_TFIELD_OFFSET UNITYSDK_OFFSET(0x19847D20)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x19847CA0)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_0__MIGRATE_OFFSET UNITYSDK_OFFSET(0x19847C00)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19848370)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SETFIELD_OFFSET UNITYSDK_OFFSET(0x198481B0)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SET_REFLECTEDFIELDNODE_OFFSET UNITYSDK_OFFSET(0x19847D10)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SET_TACCESSMODE_OFFSET UNITYSDK_OFFSET(0x19847D50)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SET_TFIELD_OFFSET UNITYSDK_OFFSET(0x19847D30)
#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x198483C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedFieldNodeWrapper_TypeDefinitionIndex = 26508;

	class ReflectedFieldNodeWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::Nodes::BaseReflectedFieldNode* _reflectedFieldNode_k__BackingField; // 0xA8
		::ParadoxNotion::Serialization::SerializedFieldInfo* _field; // 0xB0
		::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode accessMode; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_FlowCanvas_Nodes_ReflectedFieldNodeWrapper_0__Migrate(::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_0* model)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_0*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_0__MIGRATE_OFFSET))(this, model);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Type* GetRuntimeIconType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GETRUNTIMEICONTYPE_OFFSET))(this);
		}

		::FlowCanvas::Nodes::BaseReflectedFieldNode* get_reflectedFieldNode()
		{
			return ((::FlowCanvas::Nodes::BaseReflectedFieldNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_REFLECTEDFIELDNODE_OFFSET))(this);
		}

		::System::Void set_reflectedFieldNode(::FlowCanvas::Nodes::BaseReflectedFieldNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::BaseReflectedFieldNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SET_REFLECTEDFIELDNODE_OFFSET))(this, value);
		}

		::System::Reflection::FieldInfo* get_field()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_FIELD_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::SerializedFieldInfo* get_TField()
		{
			return ((::ParadoxNotion::Serialization::SerializedFieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_TFIELD_OFFSET))(this);
		}

		::System::Void set_TField(::ParadoxNotion::Serialization::SerializedFieldInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::SerializedFieldInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SET_TFIELD_OFFSET))(this, value);
		}

		::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode get_TAccessMode()
		{
			return ((::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_TACCESSMODE_OFFSET))(this);
		}

		::System::Void set_TAccessMode(::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SET_TACCESSMODE_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::Void SetField(::System::Reflection::FieldInfo* newField, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode mode, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_SETFIELD_OFFSET))(this, newField, mode, instance);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_REGISTERPORTS_OFFSET))(this);
		}
	};
}
