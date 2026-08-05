#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace NodeCanvas::Tasks::Actions { class SetField_0; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedFieldInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define NODECANVAS_TASKS_ACTIONS_SETFIELD_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DB36CF0)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB36DF0)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_GET_TARGETFIELD_OFFSET UNITYSDK_OFFSET(0x1DB36CD0)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1DB37090)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DB371F0)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_ONINIT_OFFSET UNITYSDK_OFFSET(0x1DB370A0)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_ACTIONS_SETFIELD_0__MIGRATE_OFFSET UNITYSDK_OFFSET(0x1DB36C30)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD_SETTARGETFIELD_OFFSET UNITYSDK_OFFSET(0x1DB372F0)
#define NODECANVAS_TASKS_ACTIONS_SETFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37370)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetField_TypeDefinitionIndex = 31124;

	class SetField : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* setValue; // 0x60
		::ParadoxNotion::Serialization::SerializedFieldInfo* field; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD__CTOR_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_NodeCanvas_Tasks_Actions_SetField_0__Migrate(::NodeCanvas::Tasks::Actions::SetField_0* model)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Tasks::Actions::SetField_0*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_ACTIONS_SETFIELD_0__MIGRATE_OFFSET))(this, model);
		}

		::System::Reflection::FieldInfo* get_targetField()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_GET_TARGETFIELD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void SetTargetField(::System::Reflection::FieldInfo* newField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_SETTARGETFIELD_OFFSET))(this, newField);
		}
	};
}
