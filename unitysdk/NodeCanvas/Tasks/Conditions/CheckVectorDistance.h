#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKVECTORDISTANCE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D82BED0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKVECTORDISTANCE_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D82C1E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKVECTORDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82C300)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckVectorDistance_TypeDefinitionIndex = 30720;

	class CheckVectorDistance : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* vectorB; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* vectorA; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* distance; // 0x70
		::ParadoxNotion::CompareMethod comparison; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKVECTORDISTANCE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKVECTORDISTANCE_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKVECTORDISTANCE_ONCHECK_OFFSET))(this);
		}
	};
}
