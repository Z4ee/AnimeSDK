#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_VOLUMECTRL_START_OFFSET UNITYSDK_OFFSET(0x12CA67D0)
#define MOLEMOLE_VOLUMECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA6810)

namespace MoleMole
{
	inline static constexpr unsigned int VolumeCtrl_TypeDefinitionIndex = 82410;

	class VolumeCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Volume* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMECTRL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMECTRL_START_OFFSET))(this);
		}
	};
}
