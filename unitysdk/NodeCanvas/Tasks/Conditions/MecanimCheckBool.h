#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E7B86D0)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E7B8930)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B89C0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimCheckBool_TypeDefinitionIndex = 31199;

	class MecanimCheckBool : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* value; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_ONCHECK_OFFSET))(this);
		}
	};
}
