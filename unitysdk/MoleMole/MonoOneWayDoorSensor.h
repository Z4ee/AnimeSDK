#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOONEWAYDOORSENSOR_METHOD_5_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1909B620)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1909BB60)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1909B1A0)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1909B930)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_SYNCSIZE_OFFSET UNITYSDK_OFFSET(0x1909B9D0)
#define MOLEMOLE_MONOONEWAYDOORSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1909BB10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoOneWayDoorSensor_TypeDefinitionIndex = 70665;

	class MonoOneWayDoorSensor : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_3; // 0x0
		::UnityEngine::BoxCollider* stageCollider; // 0x18
		::UnityEngine::BoxCollider* sensorTrigger; // 0x20
		::System::Single sensingRange; // 0x28
		::System::Single forwardDeviation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void SyncSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_SYNCSIZE_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_77FD543600E00498()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_METHOD_5_77FD543600E00498_OFFSET))(this);
		}
	};
}
