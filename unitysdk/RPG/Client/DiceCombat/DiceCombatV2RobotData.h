#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB7C66F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_DICEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB7D8F10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xB7D8ED0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xB7C67D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB7D8EB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7D8EF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_DICEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB7D8F20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xB7D8EE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB7D8EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB7D8F00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D8F30)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2RobotData_TypeDefinitionIndex = 70731;

	class DiceCombatV2RobotData : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _DiceAvatarInfo_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _HeadIconID_k__BackingField; // 0x1C
		::RPG::Client::TextID _Name_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_DiceAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_DICEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_DiceAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_SET_DICEAVATARINFO_OFFSET))(this, a1);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_GET_HEADICON_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2RobotData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RobotData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ROBOTDATA_CREATE_OFFSET))(a1);
		}
	};
}
