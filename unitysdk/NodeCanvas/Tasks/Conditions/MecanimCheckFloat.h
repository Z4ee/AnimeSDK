#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B425960)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B425C00)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B425D10)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimCheckFloat_TypeDefinitionIndex = 27457;

	class MecanimCheckFloat : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* value; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x68
		::ParadoxNotion::CompareMethod comparison; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_ONCHECK_OFFSET))(this);
		}
	};
}
