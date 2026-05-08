#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKINT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A210800)
#define NODECANVAS_TASKS_CONDITIONS_CHECKINT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A210860)
#define NODECANVAS_TASKS_CONDITIONS_CHECKINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2108F0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckInt_TypeDefinitionIndex = 27807;

	class CheckInt : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* valueA; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* valueB; // 0x68
		::ParadoxNotion::CompareMethod checkType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKINT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKINT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKINT_ONCHECK_OFFSET))(this);
		}
	};
}
