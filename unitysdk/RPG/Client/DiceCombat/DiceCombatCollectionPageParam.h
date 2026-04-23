#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatCollectionPageParam_TabType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA124970)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TAGETCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0xA124A30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TARGETTABTYPE_OFFSET UNITYSDK_OFFSET(0xA124A10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TAGETCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0xA124A40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TARGETTABTYPE_OFFSET UNITYSDK_OFFSET(0xA124A20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA124A00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCollectionPageParam_TypeDefinitionIndex = 69882;

	class DiceCombatCollectionPageParam : public ::System::Object
	{
	public:
		::System::UInt32 _TargetTabType_k__BackingField; // 0x10
		::System::UInt32 _TagetCollectionID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatCollectionPageParam* Create(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam_TabType targetTabType, ::System::UInt32 tagetCollectionID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCollectionPageParam*(*)(::RPG::Client::DiceCombat::DiceCombatCollectionPageParam_TabType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_CREATE_OFFSET))(targetTabType, tagetCollectionID);
		}

		::System::UInt32 get_TargetTabType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TARGETTABTYPE_OFFSET))(this);
		}

		::System::Void set_TargetTabType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TARGETTABTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_TagetCollectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_GET_TAGETCOLLECTIONID_OFFSET))(this);
		}

		::System::Void set_TagetCollectionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONPAGEPARAM_SET_TAGETCOLLECTIONID_OFFSET))(this, value);
		}
	};
}
