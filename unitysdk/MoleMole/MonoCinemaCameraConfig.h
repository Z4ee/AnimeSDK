#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaCameraFogEffectOffset.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_MONOCINEMACAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12357A80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraConfig_TypeDefinitionIndex = 66948;

	class MonoCinemaCameraConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>* cameraDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>* cameraFogEffectDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
