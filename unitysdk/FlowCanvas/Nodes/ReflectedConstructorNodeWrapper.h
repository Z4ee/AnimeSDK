#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodBaseNodeWrapper.h"

namespace FlowCanvas::Nodes { class BaseReflectedConstructorNode; }
namespace ParadoxNotion::Serialization { class ISerializedMethodBaseInfo; }
namespace ParadoxNotion::Serialization { class SerializedConstructorInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C3C0)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EB6C3F0)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_REFLECTEDCONSTRUCTORNODE_OFFSET UNITYSDK_OFFSET(0x1EB6C3A0)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_SERIALIZEDMETHODBASE_OFFSET UNITYSDK_OFFSET(0x1EB6C3E0)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_TCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C380)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB6C630)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C5D0)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SETMETHODBASE_OFFSET UNITYSDK_OFFSET(0x1EB6C540)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SET_REFLECTEDCONSTRUCTORNODE_OFFSET UNITYSDK_OFFSET(0x1EB6C3B0)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SET_TCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C390)
#define FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C6A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedConstructorNodeWrapper_TypeDefinitionIndex = 31282;

	class ReflectedConstructorNodeWrapper : public ::FlowCanvas::Nodes::ReflectedMethodBaseNodeWrapper
	{
	public:
		::ParadoxNotion::Serialization::SerializedConstructorInfo* _constructor; // 0xB0
		::FlowCanvas::Nodes::BaseReflectedConstructorNode* _reflectedConstructorNode_k__BackingField; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::SerializedConstructorInfo* get_TConstructor()
		{
			return ((::ParadoxNotion::Serialization::SerializedConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_TCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void set_TConstructor(::ParadoxNotion::Serialization::SerializedConstructorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::SerializedConstructorInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SET_TCONSTRUCTOR_OFFSET))(this, value);
		}

		::FlowCanvas::Nodes::BaseReflectedConstructorNode* get_reflectedConstructorNode()
		{
			return ((::FlowCanvas::Nodes::BaseReflectedConstructorNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_REFLECTEDCONSTRUCTORNODE_OFFSET))(this);
		}

		::System::Void set_reflectedConstructorNode(::FlowCanvas::Nodes::BaseReflectedConstructorNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SET_REFLECTEDCONSTRUCTORNODE_OFFSET))(this, value);
		}

		::System::Reflection::ConstructorInfo* get_constructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_CONSTRUCTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedMethodBaseInfo* get_serializedMethodBase()
		{
			return ((::ParadoxNotion::Serialization::ISerializedMethodBaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_SERIALIZEDMETHODBASE_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::Void SetMethodBase(::System::Reflection::MethodBase* newMethod, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SETMETHODBASE_OFFSET))(this, newMethod, instance);
		}

		::System::Void SetConstructor(::System::Reflection::ConstructorInfo* newConstructor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_SETCONSTRUCTOR_OFFSET))(this, newConstructor);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDCONSTRUCTORNODEWRAPPER_REGISTERPORTS_OFFSET))(this);
		}
	};
}
