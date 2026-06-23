#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { class SignalDefinition; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D7C6E60)
#define NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D7C6F60)
#define NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D7C6E80)
#define NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C71D0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int InvokeSignal_TypeDefinitionIndex = 30203;

	class InvokeSignal : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::Framework::SignalDefinition*>* signalDefinition; // 0x60
		::Il2CppArray<::System::Object*>* args; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::Internal::BBObjectParameter*>* argumentsMap; // 0x70
		::System::Boolean global; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INVOKESIGNAL_ONEXECUTE_OFFSET))(this);
		}
	};
}
