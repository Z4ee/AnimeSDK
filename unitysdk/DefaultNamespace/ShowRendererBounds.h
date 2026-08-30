#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define DEFAULTNAMESPACE_SHOWRENDERERBOUNDS_AWAKE_OFFSET UNITYSDK_OFFSET(0x16030560)
#define DEFAULTNAMESPACE_SHOWRENDERERBOUNDS_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x160305D0)
#define DEFAULTNAMESPACE_SHOWRENDERERBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x160306F0)

namespace DefaultNamespace
{
	inline static constexpr unsigned int ShowRendererBounds_TypeDefinitionIndex = 48164;

	class ShowRendererBounds : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* GCBMHAAOANI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTNAMESPACE_SHOWRENDERERBOUNDS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTNAMESPACE_SHOWRENDERERBOUNDS_AWAKE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTNAMESPACE_SHOWRENDERERBOUNDS_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
