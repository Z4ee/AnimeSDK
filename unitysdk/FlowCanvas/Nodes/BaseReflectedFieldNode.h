#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/FlowCanvas/Nodes/ParametresDef.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedFieldNodeWrapper_AccessMode.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_ADD_ONGETAOTREFLECTEDFIELDNODE_OFFSET UNITYSDK_OFFSET(0x1AFBFB70)
#define FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_GETFIELDNODE_OFFSET UNITYSDK_OFFSET(0x1AFBFCD0)
#define FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_INIT_OFFSET UNITYSDK_OFFSET(0x1AFBFFC0)
#define FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_REMOVE_ONGETAOTREFLECTEDFIELDNODE_OFFSET UNITYSDK_OFFSET(0x1AFBFC20)
#define FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC01A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BaseReflectedFieldNode_TypeDefinitionIndex = 27580;

	class BaseReflectedFieldNode : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::BaseReflectedFieldNode*>** StaticGet_OnGetAotReflectedFieldNode()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::BaseReflectedFieldNode*>**)Il2CppClass::FromTypeDefinitionIndex(BaseReflectedFieldNode_TypeDefinitionIndex)->GetStaticField(0x206F0);
		}
		::System::Reflection::FieldInfo* fieldInfo; // 0x10
		::FlowCanvas::Nodes::ParamDef instanceDef; // 0x18
		::FlowCanvas::Nodes::ParamDef resultDef; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnGetAotReflectedFieldNode(::System::Func_2<::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::BaseReflectedFieldNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::BaseReflectedFieldNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_ADD_ONGETAOTREFLECTEDFIELDNODE_OFFSET))(value);
		}

		static ::System::Void remove_OnGetAotReflectedFieldNode(::System::Func_2<::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::BaseReflectedFieldNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::BaseReflectedFieldNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_REMOVE_ONGETAOTREFLECTEDFIELDNODE_OFFSET))(value);
		}

		static ::FlowCanvas::Nodes::BaseReflectedFieldNode* GetFieldNode(::System::Reflection::FieldInfo* targetField)
		{
			return ((::FlowCanvas::Nodes::BaseReflectedFieldNode*(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_GETFIELDNODE_OFFSET))(targetField);
		}

		::System::Boolean Init(::System::Reflection::FieldInfo* field, ::FlowCanvas::Nodes::ParametresDef parametres)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::ParametresDef))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDFIELDNODE_INIT_OFFSET))(this, field, parametres);
		}
	};
}
