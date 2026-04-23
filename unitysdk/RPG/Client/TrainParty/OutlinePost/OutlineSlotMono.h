#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::TrainParty::OutlinePost { class OutlinePostManager; }

#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_METHOD_5_ADAFBB6E0E613B6C_OFFSET UNITYSDK_OFFSET(0xB334DB0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB334E60)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_START_OFFSET UNITYSDK_OFFSET(0xB334B60)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xB335070)

namespace RPG::Client::TrainParty::OutlinePost
{
	inline static constexpr unsigned int OutlineSlotMono_TypeDefinitionIndex = 68637;

	class OutlineSlotMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _SlotID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* Method_5_ADAFBB6E0E613B6C()
		{
			return ((::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_METHOD_5_ADAFBB6E0E613B6C_OFFSET))(this);
		}
	};
}
