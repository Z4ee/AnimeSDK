#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKSTRING_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A210900)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSTRING_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A210940)
#define NODECANVAS_TASKS_CONDITIONS_CHECKSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2109E0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckString_TypeDefinitionIndex = 26922;

	class CheckString : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* valueA; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* valueB; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSTRING__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSTRING_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSTRING_ONCHECK_OFFSET))(this);
		}
	};
}
