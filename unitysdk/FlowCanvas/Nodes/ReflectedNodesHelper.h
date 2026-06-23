#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/FlowCanvas/Nodes/ParametresDef.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_GETDEFFROMINFO_OFFSET UNITYSDK_OFFSET(0x1BC43230)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_GETGENERATEDKEY_OFFSET UNITYSDK_OFFSET(0x1BC445C0)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_GETGETTERDEFFROMINFO_OFFSET UNITYSDK_OFFSET(0x1BC43070)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_1_OFFSET UNITYSDK_OFFSET(0x1BC43FF0)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_2_OFFSET UNITYSDK_OFFSET(0x1BC407E0)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_3_OFFSET UNITYSDK_OFFSET(0x1BC442C0)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_4_OFFSET UNITYSDK_OFFSET(0x1BC44460)
#define FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BC43760)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedNodesHelper_TypeDefinitionIndex = 30004;

	class ReflectedNodesHelper : public ::System::Object
	{
	public:
		// static const ::System::String* RETURN_VALUE_NAME; // 0x0

		static ::FlowCanvas::Nodes::ParamDef GetGetterDefFromInfo(::System::Reflection::MemberInfo* info)
		{
			return ((::FlowCanvas::Nodes::ParamDef(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_GETGETTERDEFFROMINFO_OFFSET))(info);
		}

		static ::FlowCanvas::Nodes::ParamDef GetDefFromInfo(::System::Reflection::ParameterInfo* info, ::System::Boolean last)
		{
			return ((::FlowCanvas::Nodes::ParamDef(*)(::System::Reflection::ParameterInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_GETDEFFROMINFO_OFFSET))(info, last);
		}

		static ::System::Boolean InitParams(::System::Type* targetType, ::System::Boolean isStatic, ::Il2CppArray<::System::Reflection::MemberInfo*>* infos, ::FlowCanvas::Nodes::ParametresDef& parametres)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::FlowCanvas::Nodes::ParametresDef&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_OFFSET))(targetType, isStatic, infos, parametres);
		}

		static ::System::Boolean InitParams_1(::Il2CppArray<::System::Reflection::ParameterInfo*>* prms, ::System::Type* returnType, ::FlowCanvas::Nodes::ParametresDef& parametres)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Type*, ::FlowCanvas::Nodes::ParametresDef&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_1_OFFSET))(prms, returnType, parametres);
		}

		static ::System::Boolean InitParams_2(::System::Reflection::ConstructorInfo* constructor, ::FlowCanvas::Nodes::ParametresDef& parametres)
		{
			return ((::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::FlowCanvas::Nodes::ParametresDef&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_2_OFFSET))(constructor, parametres);
		}

		static ::System::Boolean InitParams_3(::System::Reflection::MethodInfo* method, ::FlowCanvas::Nodes::ParametresDef& parametres)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::ParametresDef&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_3_OFFSET))(method, parametres);
		}

		static ::System::Boolean InitParams_4(::System::Reflection::FieldInfo* field, ::FlowCanvas::Nodes::ParametresDef& parametres)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::ParametresDef&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_INITPARAMS_4_OFFSET))(field, parametres);
		}

		static ::System::String* GetGeneratedKey(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::String*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDNODESHELPER_GETGENERATEDKEY_OFFSET))(memberInfo);
		}
	};
}
