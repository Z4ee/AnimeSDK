#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_495E445F847601E8;
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x9473E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x9473EB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9473E50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x9473E10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x9473E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9473E60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x9473E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x9473E40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9473CF0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCollectionDiceInfo_TypeDefinitionIndex = 61908;

	class DiceCombatCollectionDiceInfo : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombatDiceConfigData* _ConfigDiceInfo; // 0x10
		::Class_1_495E445F847601E8* _PlayerDiceInfo; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::Boolean _Available_k__BackingField; // 0x28
		::System::Boolean _IsRecommend_k__BackingField; // 0x29
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 diceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO__CTOR_OFFSET))(this, diceID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_SET_ISRECOMMEND_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_NAME_OFFSET))(this);
		}

		::System::Int64 get_UnlockTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_UNLOCKTIME_OFFSET))(this);
		}

		::RPG::Client::DiceCombatDiceConfigData* get_DiceInfo()
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_DICEINFO_OFFSET))(this);
		}
	};
}
