#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_SCREENPLAYER_FLIPBOOKUTILS_GETFLIPBOOKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x191B3290)
#define MOLEMOLE_SCREENPLAYER_FLIPBOOKUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x191B3DE0)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_FlipbookUtils_TypeDefinitionIndex = 48394;

	class ScreenPlayer_FlipbookUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_FLIPBOOKUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetFlipbookMaterialIndex(::UnityEngine::Renderer* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_FLIPBOOKUTILS_GETFLIPBOOKMATERIALINDEX_OFFSET))(a1);
		}
	};
}
