#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x16A99FC0)
#define RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A99F30)
#define RPG_CUSTOMRP_FOGVOLUMEVISUALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A310)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FogVolumeVisualizer_TypeDefinitionIndex = 29355;

	class FogVolumeVisualizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color _gizmosColor; // 0x18
		::System::Boolean _wireFrame; // 0x28
		::UnityEngine::Material* _fogVolumeMaterial; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEVISUALIZER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUMEVISUALIZER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
