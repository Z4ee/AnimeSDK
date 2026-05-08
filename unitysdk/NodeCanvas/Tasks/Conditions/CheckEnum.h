#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKENUM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A210620)
#define NODECANVAS_TASKS_CONDITIONS_CHECKENUM_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A210660)
#define NODECANVAS_TASKS_CONDITIONS_CHECKENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A210710)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEnum_TypeDefinitionIndex = 27133;

	class CheckEnum : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* valueB; // 0x60
		::NodeCanvas::Framework::Internal::BBObjectParameter* valueA; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKENUM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKENUM_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKENUM_ONCHECK_OFFSET))(this);
		}
	};
}
