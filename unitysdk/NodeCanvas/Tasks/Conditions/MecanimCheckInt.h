#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKINT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1AFD3460)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKINT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1AFD3700)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD37F0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimCheckInt_TypeDefinitionIndex = 27803;

	class MecanimCheckInt : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* value; // 0x68
		::ParadoxNotion::CompareMethod comparison; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKINT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKINT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKINT_ONCHECK_OFFSET))(this);
		}
	};
}
