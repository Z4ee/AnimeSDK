#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace NodeCanvas::Tasks::Actions { class GetField_0; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedFieldInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define NODECANVAS_TASKS_ACTIONS_GETFIELD_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DAF2530)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DAF2630)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_GET_TARGETFIELD_OFFSET UNITYSDK_OFFSET(0x1DAF2510)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1DAF28E0)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DAF2A40)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_ONINIT_OFFSET UNITYSDK_OFFSET(0x1DAF28F0)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_ACTIONS_GETFIELD_0__MIGRATE_OFFSET UNITYSDK_OFFSET(0x1DAF2470)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD_SETTARGETFIELD_OFFSET UNITYSDK_OFFSET(0x1DAF2B30)
#define NODECANVAS_TASKS_ACTIONS_GETFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2BB0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetField_TypeDefinitionIndex = 31008;

	class GetField : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* saveAs; // 0x60
		::ParadoxNotion::Serialization::SerializedFieldInfo* field; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD__CTOR_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_NodeCanvas_Tasks_Actions_GetField_0__Migrate(::NodeCanvas::Tasks::Actions::GetField_0* model)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Tasks::Actions::GetField_0*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_ACTIONS_GETFIELD_0__MIGRATE_OFFSET))(this, model);
		}

		::System::Reflection::FieldInfo* get_targetField()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_GET_TARGETFIELD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void SetTargetField(::System::Reflection::FieldInfo* newField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETFIELD_SETTARGETFIELD_OFFSET))(this, newField);
		}
	};
}
