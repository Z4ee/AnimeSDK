#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKFLOAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF94400)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFLOAT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EF94460)
#define NODECANVAS_TASKS_CONDITIONS_CHECKFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF944F0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckFloat_TypeDefinitionIndex = 29974;

	class CheckFloat : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* valueB; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* valueA; // 0x68
		::ParadoxNotion::CompareMethod checkType; // 0x70
		::System::Single differenceThreshold; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFLOAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFLOAT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFLOAT_ONCHECK_OFFSET))(this);
		}
	};
}
