#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1A43C740)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_GET_SELECTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1A43C7D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_SET_SELECTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1A43C7E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43C7C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2EnterPVESelectStageParam_TypeDefinitionIndex = 72282;

	class DiceCombatV2EnterPVESelectStageParam : public ::System::Object
	{
	public:
		::System::UInt32 _SelectStageID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_SelectStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_GET_SELECTSTAGEID_OFFSET))(this);
		}

		::System::Void set_SelectStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_SET_SELECTSTAGEID_OFFSET))(this, a1);
		}
	};
}
