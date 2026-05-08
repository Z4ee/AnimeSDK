#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_APPLYDITHERFADEOUTMAXDISTANCESQR_OFFSET UNITYSDK_OFFSET(0x11CB6850)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_APPLYDITHERFADEOUTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x11CB6840)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_DISSOCIATEDENTITYDESTROYDELAY_OFFSET UNITYSDK_OFFSET(0x11CB6860)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB6870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectEntityDither_TypeDefinitionIndex = 60016;

	class ConfigViewObjectEntityDither : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single applyDitherFadeOutMaxDistance; // 0x58
		::System::Single dissociatedEntityDestroyDelay; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER__CTOR_OFFSET))(this);
		}

		::System::Single get_ApplyDitherFadeOutMaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_APPLYDITHERFADEOUTMAXDISTANCE_OFFSET))(this);
		}

		::System::Single get_ApplyDitherFadeOutMaxDistanceSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_APPLYDITHERFADEOUTMAXDISTANCESQR_OFFSET))(this);
		}

		::System::Single get_DissociatedEntityDestroyDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_DISSOCIATEDENTITYDESTROYDELAY_OFFSET))(this);
		}
	};
}
