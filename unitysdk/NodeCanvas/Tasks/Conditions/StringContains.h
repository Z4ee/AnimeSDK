#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_STRINGCONTAINS_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D7C7640)
#define NODECANVAS_TASKS_CONDITIONS_STRINGCONTAINS_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D7C76B0)
#define NODECANVAS_TASKS_CONDITIONS_STRINGCONTAINS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C7750)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int StringContains_TypeDefinitionIndex = 29558;

	class StringContains : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* targetString; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* checkString; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_STRINGCONTAINS__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_STRINGCONTAINS_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_STRINGCONTAINS_ONCHECK_OFFSET))(this);
		}
	};
}
