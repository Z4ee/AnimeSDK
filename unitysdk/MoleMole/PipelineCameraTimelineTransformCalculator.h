#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineTransformCalculatorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_PIPELINECAMERATIMELINETRANSFORMCALCULATOR_PROCESSS_OFFSET UNITYSDK_OFFSET(0x17383C20)
#define MOLEMOLE_PIPELINECAMERATIMELINETRANSFORMCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17383F80)
#define MOLEMOLE_PIPELINECAMERATIMELINETRANSFORMCALCULATOR___BASE_PROCESSS_OFFSET UNITYSDK_OFFSET(0x17383F90)

namespace MoleMole
{
	inline static constexpr unsigned int PipelineCameraTimelineTransformCalculator_TypeDefinitionIndex = 75550;

	class PipelineCameraTimelineTransformCalculator : public ::MoleMole::TimelineTransformCalculatorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PIPELINECAMERATIMELINETRANSFORMCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Processs(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_PIPELINECAMERATIMELINETRANSFORMCALCULATOR_PROCESSS_OFFSET))(this, position, rotation);
		}

		::System::Boolean __base_Processs(::UnityEngine::Vector3& P0, ::UnityEngine::Quaternion& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_PIPELINECAMERATIMELINETRANSFORMCALCULATOR___BASE_PROCESSS_OFFSET))(this, P0, P1);
		}
	};
}
