#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_PARKOURBILLBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xDA26B70)
#define RPG_CLIENT_PARKOURBILLBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA26C80)
#define RPG_CLIENT_PARKOURBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDA27240)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourBillboard_TypeDefinitionIndex = 61922;

	class ParkourBillboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MinRequireShowDistance; // 0x18
		::System::Single MaxRequireShowDistance; // 0x1C
		::System::Single FadeTime; // 0x20
		::System::Single MCLEOFJHFCP; // 0x24
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBILLBOARD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBILLBOARD_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBILLBOARD_UPDATE_OFFSET))(this);
		}
	};
}
