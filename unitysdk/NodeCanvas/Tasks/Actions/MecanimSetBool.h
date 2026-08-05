#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETBOOL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DFE0180)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETBOOL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DFE0270)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE03D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetBool_TypeDefinitionIndex = 30073;

	class MecanimSetBool : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* parameterHashID; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* setTo; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETBOOL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETBOOL_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETBOOL_ONEXECUTE_OFFSET))(this);
		}
	};
}
