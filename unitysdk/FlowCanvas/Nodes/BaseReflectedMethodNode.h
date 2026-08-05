#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/FlowCanvas/Nodes/ParametresDef.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_ADD_ONGETAOTREFLECTEDMETHODNODE_OFFSET UNITYSDK_OFFSET(0x1E8B6400)
#define FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_GETMETHODNODE_OFFSET UNITYSDK_OFFSET(0x1E8B6520)
#define FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_INIT_OFFSET UNITYSDK_OFFSET(0x1E8B6740)
#define FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_REMOVE_ONGETAOTREFLECTEDMETHODNODE_OFFSET UNITYSDK_OFFSET(0x1E8B6490)
#define FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B6950)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BaseReflectedMethodNode_TypeDefinitionIndex = 29767;

	class BaseReflectedMethodNode : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::BaseReflectedMethodNode*>** StaticGet_OnGetAotReflectedMethodNode()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::BaseReflectedMethodNode*>**)Il2CppClass::FromTypeDefinitionIndex(BaseReflectedMethodNode_TypeDefinitionIndex)->GetStaticField(0x25E70);
		}
		::System::Reflection::MethodInfo* methodInfo; // 0x10
		::FlowCanvas::Nodes::ParamDef instanceDef; // 0x18
		::System::Collections::Generic::List_1<::FlowCanvas::Nodes::ParamDef>* paramDefinitions; // 0x50
		::FlowCanvas::Nodes::ParamDef resultDef; // 0x58
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnGetAotReflectedMethodNode(::System::Func_2<::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::BaseReflectedMethodNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::BaseReflectedMethodNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_ADD_ONGETAOTREFLECTEDMETHODNODE_OFFSET))(value);
		}

		static ::System::Void remove_OnGetAotReflectedMethodNode(::System::Func_2<::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::BaseReflectedMethodNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::BaseReflectedMethodNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_REMOVE_ONGETAOTREFLECTEDMETHODNODE_OFFSET))(value);
		}

		static ::FlowCanvas::Nodes::BaseReflectedMethodNode* GetMethodNode(::System::Reflection::MethodInfo* targetMethod, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options)
		{
			return ((::FlowCanvas::Nodes::BaseReflectedMethodNode*(*)(::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_GETMETHODNODE_OFFSET))(targetMethod, options);
		}

		::System::Boolean Init(::System::Reflection::MethodInfo* method, ::FlowCanvas::Nodes::ParametresDef parametres)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::ParametresDef))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDMETHODNODE_INIT_OFFSET))(this, method, parametres);
		}
	};
}
