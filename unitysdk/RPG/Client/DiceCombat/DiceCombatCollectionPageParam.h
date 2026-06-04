#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatCollectionPageParam_TabType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB7A2070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TAGETCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0xB7A2130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TARGETTABTYPE_OFFSET UNITYSDK_OFFSET(0xB7A2110)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TAGETCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0xB7A2140)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TARGETTABTYPE_OFFSET UNITYSDK_OFFSET(0xB7A2120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A2100)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCollectionPageParam_TypeDefinitionIndex = 70694;

	class DiceCombatCollectionPageParam : public ::System::Object
	{
	public:
		::System::UInt32 _TargetTabType_k__BackingField; // 0x10
		::System::UInt32 _TagetCollectionID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* Create(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam_TabType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*(*)(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam_TabType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_TargetTabType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TARGETTABTYPE_OFFSET))(this);
		}

		::System::Void set_TargetTabType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TARGETTABTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TagetCollectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TAGETCOLLECTIONID_OFFSET))(this);
		}

		::System::Void set_TagetCollectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TAGETCOLLECTIONID_OFFSET))(this, a1);
		}
	};
}
