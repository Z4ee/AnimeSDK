#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Tasks::Conditions { class CheckUnityEvent_0; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedUnityEventInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { class UnityEvent; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_AGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D070010)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D06FF10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D070120)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1D06FF00)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_TARGETEVENTFIELD_OFFSET UNITYSDK_OFFSET(0x1D06FF90)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_TARGETEVENTPROP_OFFSET UNITYSDK_OFFSET(0x1D06FFD0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_TARGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1D06FEE0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D0702D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D070740)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D0705D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D070560)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D0702E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_0__MIGRATE_OFFSET UNITYSDK_OFFSET(0x1D06FE40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_RAISED_OFFSET UNITYSDK_OFFSET(0x1D070660)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_SETTARGETEVENT_OFFSET UNITYSDK_OFFSET(0x1D070750)
#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0707B0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckUnityEvent_TypeDefinitionIndex = 30590;

	class CheckUnityEvent : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::ParadoxNotion::Serialization::SerializedUnityEventInfo* _eventInfo; // 0x60
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_FullSerializer_IMigratable_NodeCanvas_Tasks_Conditions_CheckUnityEvent_0__Migrate(::NodeCanvas::Tasks::Conditions::CheckUnityEvent_0* model)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Tasks::Conditions::CheckUnityEvent_0*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_IMIGRATABLE_NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_0__MIGRATE_OFFSET))(this, model);
		}

		::System::Reflection::MemberInfo* get_targetMember()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_TARGETMEMBER_OFFSET))(this);
		}

		::System::Boolean get_isStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Type* get_eventType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* get_targetEventField()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_TARGETEVENTFIELD_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* get_targetEventProp()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_TARGETEVENTPROP_OFFSET))(this);
		}

		::System::Type* get_agentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_AGENTTYPE_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_GET_INFO_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONINIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Raised()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_RAISED_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_ONCHECK_OFFSET))(this);
		}

		::System::Void SetTargetEvent(::System::Reflection::MemberInfo* newMember)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_SETTARGETEVENT_OFFSET))(this, newMember);
		}
	};
}
