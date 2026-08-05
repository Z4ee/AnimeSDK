#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace NodeCanvas::Tasks::Conditions { class CheckField_0; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedFieldInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D06F150)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D06F250)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_GET_TARGETFIELD_OFFSET UNITYSDK_OFFSET(0x1D06F130)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D06F770)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D06F8D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D06F780)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_0__MIGRATE_OFFSET UNITYSDK_OFFSET(0x1D06EF80)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_SETTARGETFIELD_OFFSET UNITYSDK_OFFSET(0x1D06FDA0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06FE20)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckField_TypeDefinitionIndex = 30291;

	class CheckField : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* checkValue; // 0x60
		::ParadoxNotion::Serialization::SerializedFieldInfo* field; // 0x68
		::ParadoxNotion::CompareMethod comparison; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD__CTOR_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_NodeCanvas_Tasks_Conditions_CheckField_0__Migrate(::NodeCanvas::Tasks::Conditions::CheckField_0* model)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Tasks::Conditions::CheckField_0*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_0__MIGRATE_OFFSET))(this, model);
		}

		::System::Reflection::FieldInfo* get_targetField()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_GET_TARGETFIELD_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_ONINIT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_ONCHECK_OFFSET))(this);
		}

		::System::Void SetTargetField(::System::Reflection::FieldInfo* newField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_SETTARGETFIELD_OFFSET))(this, newField);
		}
	};
}
