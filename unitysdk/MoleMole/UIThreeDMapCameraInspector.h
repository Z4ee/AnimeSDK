#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_UITHREEDMAPCAMERAINSPECTOR_PRINTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x15246AE0)
#define MOLEMOLE_UITHREEDMAPCAMERAINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x152473F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapCameraInspector_TypeDefinitionIndex = 39323;

	class UIThreeDMapCameraInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* TargetCamera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPCAMERAINSPECTOR__CTOR_OFFSET))(this);
		}

		::System::Void PrintCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPCAMERAINSPECTOR_PRINTCAMERADATA_OFFSET))(this);
		}
	};
}
