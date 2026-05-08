#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/FlowCanvas/Nodes/ParametresDef.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }

#define FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_ADD_ONGETAOTREFLECTEDCONSTRUCTORNODE_OFFSET UNITYSDK_OFFSET(0x1A293A20)
#define FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_GETCONSTRUCTORNODE_OFFSET UNITYSDK_OFFSET(0x1A293B80)
#define FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_INIT_OFFSET UNITYSDK_OFFSET(0x1A293F40)
#define FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_REMOVE_ONGETAOTREFLECTEDCONSTRUCTORNODE_OFFSET UNITYSDK_OFFSET(0x1A293AD0)
#define FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A294250)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BaseReflectedConstructorNode_TypeDefinitionIndex = 28039;

	class BaseReflectedConstructorNode : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*>** StaticGet_OnGetAotReflectedConstructorNode()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*>**)Il2CppClass::FromTypeDefinitionIndex(BaseReflectedConstructorNode_TypeDefinitionIndex)->GetStaticField(0x20B00);
		}
		::System::Reflection::ConstructorInfo* constructorInfo; // 0x10
		::FlowCanvas::Nodes::ParamDef resultDef; // 0x18
		::FlowCanvas::Nodes::ParamDef instanceDef; // 0x50
		::System::Collections::Generic::List_1<::FlowCanvas::Nodes::ParamDef>* paramDefinitions; // 0x88
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnGetAotReflectedConstructorNode(::System::Func_2<::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_ADD_ONGETAOTREFLECTEDCONSTRUCTORNODE_OFFSET))(value);
		}

		static ::System::Void remove_OnGetAotReflectedConstructorNode(::System::Func_2<::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::BaseReflectedConstructorNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_REMOVE_ONGETAOTREFLECTEDCONSTRUCTORNODE_OFFSET))(value);
		}

		static ::FlowCanvas::Nodes::BaseReflectedConstructorNode* GetConstructorNode(::System::Reflection::ConstructorInfo* targetConstructor, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options)
		{
			return ((::FlowCanvas::Nodes::BaseReflectedConstructorNode*(*)(::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_GETCONSTRUCTORNODE_OFFSET))(targetConstructor, options);
		}

		::System::Boolean Init(::System::Reflection::ConstructorInfo* constructor, ::FlowCanvas::Nodes::ParametresDef parametres)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::ParametresDef))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDCONSTRUCTORNODE_INIT_OFFSET))(this, constructor, parametres);
		}
	};
}
