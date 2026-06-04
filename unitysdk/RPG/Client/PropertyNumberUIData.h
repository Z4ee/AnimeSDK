#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xC6686A0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0xC668720)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC6686C0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xC6686E0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0xC668740)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_SHIELD_OFFSET UNITYSDK_OFFSET(0xC668700)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xC6686B0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0xC668730)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC6686D0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xC6686F0)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0xC668750)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_SHIELD_OFFSET UNITYSDK_OFFSET(0xC668710)
#define RPG_CLIENT_PROPERTYNUMBERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC668760)

namespace RPG::Client
{
	inline static constexpr unsigned int PropertyNumberUIData_TypeDefinitionIndex = 68219;

	class PropertyNumberUIData : public ::System::Object
	{
	public:
		::System::Int64 _CurrentHP_k__BackingField; // 0x10
		::System::Int64 _Shield_k__BackingField; // 0x18
		::System::Int64 _MaxShield_k__BackingField; // 0x20
		::System::Int64 _MaxHP_k__BackingField; // 0x28
		::System::Int32 _CurrentSP_k__BackingField; // 0x30
		::System::Int32 _MaxSP_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA__CTOR_OFFSET))(this);
		}

		::System::Int64 get_CurrentHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTHP_OFFSET))(this, a1);
		}

		::System::Int64 get_MaxHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Int64 get_MaxShield()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSHIELD_OFFSET))(this);
		}

		::System::Void set_MaxShield(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSHIELD_OFFSET))(this, a1);
		}

		::System::Int64 get_Shield()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_SHIELD_OFFSET))(this);
		}

		::System::Void set_Shield(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_SHIELD_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentSP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_CURRENTSP_OFFSET))(this);
		}

		::System::Void set_CurrentSP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_CURRENTSP_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_GET_MAXSP_OFFSET))(this);
		}

		::System::Void set_MaxSP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYNUMBERUIDATA_SET_MAXSP_OFFSET))(this, a1);
		}
	};
}
