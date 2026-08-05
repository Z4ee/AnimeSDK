#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { class SignalDefinition; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E6DF5A0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E6DFC00)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6DF860)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6DF670)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONINIT_OFFSET UNITYSDK_OFFSET(0x1E6DF5C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONSIGNALINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6DF970)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DFC10)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckSignal_TypeDefinitionIndex = 31501;

	class CheckSignal : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Internal::BBObjectParameter*>* argumentsMap; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::Framework::SignalDefinition*>* signalDefinition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONINIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnSignalInvoke(::UnityEngine::Transform* sender, ::UnityEngine::Transform* receiver, ::System::Boolean isGlobal, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONSIGNALINVOKE_OFFSET))(this, sender, receiver, isGlobal, args);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSIGNAL_ONCHECK_OFFSET))(this);
		}
	};
}
