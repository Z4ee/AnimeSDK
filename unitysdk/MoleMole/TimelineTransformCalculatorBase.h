#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TIMELINETRANSFORMCALCULATORBASE_PROCESSS_OFFSET UNITYSDK_OFFSET(0x15B6B200)
#define MOLEMOLE_TIMELINETRANSFORMCALCULATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6B270)

namespace MoleMole
{
	inline static constexpr unsigned int TimelineTransformCalculatorBase_TypeDefinitionIndex = 64125;

	class TimelineTransformCalculatorBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINETRANSFORMCALCULATORBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Processs(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINETRANSFORMCALCULATORBASE_PROCESSS_OFFSET))(this, position, rotation);
		}
	};
}
