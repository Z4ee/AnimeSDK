#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKENUM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1C63C5F0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKENUM_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1C63C630)
#define NODECANVAS_TASKS_CONDITIONS_CHECKENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63C6E0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEnum_TypeDefinitionIndex = 29986;

	class CheckEnum : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* valueA; // 0x60
		::NodeCanvas::Framework::Internal::BBObjectParameter* valueB; // 0x68

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
