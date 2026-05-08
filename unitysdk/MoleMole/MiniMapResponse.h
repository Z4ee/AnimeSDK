#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_MINIMAPRESPONSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15B31860)
#define MOLEMOLE_MINIMAPRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B31AA0)

namespace MoleMole
{
	inline static constexpr unsigned int MiniMapResponse_TypeDefinitionIndex = 57032;

	class MiniMapResponse : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::RawImage* MinimapFogMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIMAPRESPONSE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIMAPRESPONSE_UPDATE_OFFSET))(this);
		}
	};
}
