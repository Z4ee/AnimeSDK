#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParametresDef.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Reflection { class MemberInfo; }

#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_ADD_ONGETAOTEXTRACTORNODE_OFFSET UNITYSDK_OFFSET(0x1B4AC070)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_GETEXTRACTORNODE_OFFSET UNITYSDK_OFFSET(0x1B4AC1D0)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1B4AC390)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1B4AC440)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_INIT_OFFSET UNITYSDK_OFFSET(0x1B4AC320)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_REMOVE_ONGETAOTEXTRACTORNODE_OFFSET UNITYSDK_OFFSET(0x1B4AC120)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1B4AC3E0)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1B4AC450)
#define FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AC460)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BaseReflectedExtractorNode_TypeDefinitionIndex = 28102;

	class BaseReflectedExtractorNode : public ::System::Object
	{
	public:
		static ::System::Func_4<::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::BaseReflectedExtractorNode*>** StaticGet_OnGetAotExtractorNode()
		{
			return (::System::Func_4<::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::BaseReflectedExtractorNode*>**)Il2CppClass::FromTypeDefinitionIndex(BaseReflectedExtractorNode_TypeDefinitionIndex)->GetStaticField(0x1FF30);
		}
		::System::Type* _TargetType_k__BackingField; // 0x10
		::FlowCanvas::Nodes::ParametresDef _Params_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnGetAotExtractorNode(::System::Func_4<::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::BaseReflectedExtractorNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_4<::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::BaseReflectedExtractorNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_ADD_ONGETAOTEXTRACTORNODE_OFFSET))(value);
		}

		static ::System::Void remove_OnGetAotExtractorNode(::System::Func_4<::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::BaseReflectedExtractorNode*>* value)
		{
			return ((::System::Void(*)(::System::Func_4<::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::BaseReflectedExtractorNode*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_REMOVE_ONGETAOTEXTRACTORNODE_OFFSET))(value);
		}

		static ::FlowCanvas::Nodes::BaseReflectedExtractorNode* GetExtractorNode(::System::Type* targetType, ::System::Boolean isStatic, ::Il2CppArray<::System::Reflection::MemberInfo*>* infos)
		{
			return ((::FlowCanvas::Nodes::BaseReflectedExtractorNode*(*)(::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_GETEXTRACTORNODE_OFFSET))(targetType, isStatic, infos);
		}

		::FlowCanvas::Nodes::ParametresDef get_Params()
		{
			return ((::FlowCanvas::Nodes::ParametresDef(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::FlowCanvas::Nodes::ParametresDef value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ParametresDef))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_SET_PARAMS_OFFSET))(this, value);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Void set_TargetType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_SET_TARGETTYPE_OFFSET))(this, value);
		}

		::System::Boolean Init(::FlowCanvas::Nodes::ParametresDef paramsDef, ::System::Type* targetType)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::ParametresDef, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BASEREFLECTEDEXTRACTORNODE_INIT_OFFSET))(this, paramsDef, targetType);
		}
	};
}
