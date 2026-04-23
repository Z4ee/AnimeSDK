#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA1599F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_DICEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA159940)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xA159900)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xA159960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1598E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA159920)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_DICEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA159950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xA159910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA1598F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA159930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA159AD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2RobotData_TypeDefinitionIndex = 69919;

	class DiceCombatV2RobotData : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _DiceAvatarInfo_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _HeadIconID_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_HEADICONID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_DiceAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_DICEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_DiceAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_DICEAVATARINFO_OFFSET))(this, value);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICON_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2RobotData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RobotData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_CREATE_OFFSET))(id);
		}
	};
}
