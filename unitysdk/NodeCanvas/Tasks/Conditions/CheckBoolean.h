#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEAN_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B7EC360)
#define NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEAN_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B7EC3A0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC3F0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckBoolean_TypeDefinitionIndex = 26768;

	class CheckBoolean : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* valueA; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* valueB; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEAN_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEAN_ONCHECK_OFFSET))(this);
		}
	};
}
