#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineTransformCalculatorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_ENTITYPOSITIONWITHMAINCAMERAROTATIONCALCULATOR_PROCESSS_OFFSET UNITYSDK_OFFSET(0x125A3C80)
#define MOLEMOLE_ENTITYPOSITIONWITHMAINCAMERAROTATIONCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x125A44F0)
#define MOLEMOLE_ENTITYPOSITIONWITHMAINCAMERAROTATIONCALCULATOR___BASE_PROCESSS_OFFSET UNITYSDK_OFFSET(0x125A4500)

namespace MoleMole
{
	inline static constexpr unsigned int EntityPositionWithMainCameraRotationCalculator_TypeDefinitionIndex = 68148;

	class EntityPositionWithMainCameraRotationCalculator : public ::MoleMole::TimelineTransformCalculatorBase
	{
	public:
		::System::String* EntityTag; // 0x10
		::System::Boolean BreakRotation; // 0x18
		::System::Boolean ApplyRoll; // 0x19
		::System::Boolean ApplyYaw; // 0x1A
		::System::Boolean ApplyPitch; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPOSITIONWITHMAINCAMERAROTATIONCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Processs(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPOSITIONWITHMAINCAMERAROTATIONCALCULATOR_PROCESSS_OFFSET))(this, position, rotation);
		}

		::System::Boolean __base_Processs(::UnityEngine::Vector3& P0, ::UnityEngine::Quaternion& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPOSITIONWITHMAINCAMERAROTATIONCALCULATOR___BASE_PROCESSS_OFFSET))(this, P0, P1);
		}
	};
}
