#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B0BA330)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_GET_OFFSET UNITYSDK_OFFSET(0x1B0BA5C0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0BA420)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0BA6C0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_SET_OFFSET UNITYSDK_OFFSET(0x1B0BA4A0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BA790)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetFloat_TypeDefinitionIndex = 28132;

	class MecanimSetFloat : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* setTo; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* parameterHashID; // 0x70
		::System::Single currentValue; // 0x78
		::System::Single transitTime; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_ONUPDATE_OFFSET))(this);
		}

		::System::Single Get()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_GET_OFFSET))(this);
		}

		::System::Void Set(::System::Single newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETFLOAT_SET_OFFSET))(this, newValue);
		}
	};
}
