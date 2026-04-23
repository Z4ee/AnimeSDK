#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xAF23370)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0xAF233F0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xAF23390)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xAF233B0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0xAF23410)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_SHIELD_OFFSET UNITYSDK_OFFSET(0xAF233D0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xAF23380)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0xAF23400)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xAF233A0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xAF233C0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0xAF23420)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_SHIELD_OFFSET UNITYSDK_OFFSET(0xAF233E0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF23430)

namespace RPG::Client
{
	inline static constexpr unsigned int PropertyNumberUIData_TypeDefinitionIndex = 67267;

	class PropertyNumberUIData : public ::System::Object
	{
	public:
		::System::Int32 _Shield_k__BackingField; // 0x10
		::System::Int32 _MaxShield_k__BackingField; // 0x14
		::System::Int32 _CurrentHP_k__BackingField; // 0x18
		::System::Int32 _CurrentSP_k__BackingField; // 0x1C
		::System::Int32 _MaxSP_k__BackingField; // 0x20
		::System::Int32 _MaxHP_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTHP_OFFSET))(this, value);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXHP_OFFSET))(this, value);
		}

		::System::Int32 get_MaxShield()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSHIELD_OFFSET))(this);
		}

		::System::Void set_MaxShield(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSHIELD_OFFSET))(this, value);
		}

		::System::Int32 get_Shield()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_SHIELD_OFFSET))(this);
		}

		::System::Void set_Shield(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_SHIELD_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentSP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTSP_OFFSET))(this);
		}

		::System::Void set_CurrentSP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTSP_OFFSET))(this, value);
		}

		::System::Int32 get_MaxSP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSP_OFFSET))(this);
		}

		::System::Void set_MaxSP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSP_OFFSET))(this, value);
		}
	};
}
