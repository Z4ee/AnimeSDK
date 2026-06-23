#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }
namespace UnityEngine { class Transform; }

#define ARA_ELECTRICALARC_CHANGEARC_OFFSET UNITYSDK_OFFSET(0x1E21E820)
#define ARA_ELECTRICALARC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E21E720)
#define ARA_ELECTRICALARC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E21E7C0)
#define ARA_ELECTRICALARC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E21ED70)

namespace Ara
{
	inline static constexpr unsigned int ElectricalArc_TypeDefinitionIndex = 32932;

	class ElectricalArc : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Ara::AraTrail* trail; // 0x18
		::UnityEngine::Transform* source; // 0x20
		::UnityEngine::Transform* target; // 0x28
		::System::Int32 points; // 0x30
		::System::Single burstInterval; // 0x34
		::System::Single burstRandom; // 0x38
		::System::Single speedRandom; // 0x3C
		::System::Single positionRandom; // 0x40
		::System::Single accum; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ELECTRICALARC__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ELECTRICALARC_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ELECTRICALARC_UPDATE_OFFSET))(this);
		}

		::System::Void ChangeArc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ELECTRICALARC_CHANGEARC_OFFSET))(this);
		}
	};
}
