#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_SECTR_SECTR_SECTORTHRESHOLDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1385EBD0)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_SectorThresholdConfig_TypeDefinitionIndex = 61078;

	class SECTR_SectorThresholdConfig : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single lodThreshold; // 0x18
		::UnityEngine::Vector3 center; // 0x1C
		::UnityEngine::Vector3 distanceScale; // 0x28
		::System::Single maxDistance; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_SECTORTHRESHOLDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
