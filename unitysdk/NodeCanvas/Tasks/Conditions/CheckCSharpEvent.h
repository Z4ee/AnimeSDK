#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Tasks::Conditions { class CheckCSharpEvent_0; }
namespace NodeCanvas::Tasks::Conditions { class CheckStaticCSharpEvent; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedEventInfo; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ADBB630)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1ADBB740)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_GET_TARGETEVENT_OFFSET UNITYSDK_OFFSET(0x1ADBB610)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1ADBB8C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1ADBBD20)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ADBBB70)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ADBBAA0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONINIT_OFFSET UNITYSDK_OFFSET(0x1ADBB8D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_0__MIGRATE_OFFSET UNITYSDK_OFFSET(0x1ADBB440)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKSTATICCSHARPEVENT__MIGRATE_OFFSET UNITYSDK_OFFSET(0x1ADBB550)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_RAISED_OFFSET UNITYSDK_OFFSET(0x1ADBBC40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_SETTARGETEVENT_OFFSET UNITYSDK_OFFSET(0x1ADBB500)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBBD30)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCSharpEvent_TypeDefinitionIndex = 27116;

	class CheckCSharpEvent : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::ParadoxNotion::Serialization::SerializedEventInfo* eventInfo; // 0x60
		::System::Delegate* handler; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT__CTOR_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_NodeCanvas_Tasks_Conditions_CheckCSharpEvent_0__Migrate(::NodeCanvas::Tasks::Conditions::CheckCSharpEvent_0* model)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Tasks::Conditions::CheckCSharpEvent_0*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_0__MIGRATE_OFFSET))(this, model);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_NodeCanvas_Tasks_Conditions_CheckStaticCSharpEvent__Migrate(::NodeCanvas::Tasks::Conditions::CheckStaticCSharpEvent* model)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Tasks::Conditions::CheckStaticCSharpEvent*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKSTATICCSHARPEVENT__MIGRATE_OFFSET))(this, model);
		}

		::System::Reflection::EventInfo* get_targetEvent()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_GET_TARGETEVENT_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONINIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Raised()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_RAISED_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_ONCHECK_OFFSET))(this);
		}

		::System::Void SetTargetEvent(::System::Reflection::EventInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_SETTARGETEVENT_OFFSET))(this, info);
		}
	};
}
