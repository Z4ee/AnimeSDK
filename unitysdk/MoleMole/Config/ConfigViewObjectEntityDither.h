#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_APPLYDITHERFADEOUTMAXDISTANCESQR_OFFSET UNITYSDK_OFFSET(0x14876D70)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_APPLYDITHERFADEOUTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x14876D60)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER_GET_DISSOCIATEDENTITYDESTROYDELAY_OFFSET UNITYSDK_OFFSET(0x14876D80)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTENTITYDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x14876D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectEntityDither_TypeDefinitionIndex = 72355;

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
