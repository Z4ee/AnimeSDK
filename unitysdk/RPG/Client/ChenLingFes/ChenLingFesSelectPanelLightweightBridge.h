#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplaySelectPanelControl; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCB72860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xCB728F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE_SETOWNER_OFFSET UNITYSDK_OFFSET(0xCB55130)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB72980)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesSelectPanelLightweightBridge_TypeDefinitionIndex = 79999;

	class ChenLingFesSelectPanelLightweightBridge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl* CFKHNPGEAJA; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE__CTOR_OFFSET))(this);
		}

		::System::Void SetOwner(::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE_SETOWNER_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSELECTPANELLIGHTWEIGHTBRIDGE_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}
	};
}
