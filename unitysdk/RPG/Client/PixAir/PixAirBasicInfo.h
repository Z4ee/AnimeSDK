#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirGameSession; }

#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC3B2E80)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0xC3B30D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_FIXAMOUNT_OFFSET UNITYSDK_OFFSET(0xC3B30F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC3B30B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_ISEQUAL_OFFSET UNITYSDK_OFFSET(0xC3B2E10)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0xC3B30E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_FIXAMOUNT_OFFSET UNITYSDK_OFFSET(0xC3B3100)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC3B30C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SYNCCURRENTINFO_OFFSET UNITYSDK_OFFSET(0xC3B3020)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B3010)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBasicInfo_TypeDefinitionIndex = 73636;

	class PixAirBasicInfo : public ::System::Object
	{
	public:
		::System::UInt32 _CurrentAmount_k__BackingField; // 0x10
		::System::Int32 _MaxHp_k__BackingField; // 0x14
		::System::Int32 _FixAmount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBasicInfo* Create()
		{
			return ((::RPG::Client::PixAir::PixAirBasicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_CREATE_OFFSET))();
		}

		::System::Void SyncCurrentInfo(::RPG::Client::PixAir::PixAirGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SYNCCURRENTINFO_OFFSET))(this, a1);
		}

		::System::Boolean IsEqual(::RPG::Client::PixAir::PixAirBasicInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirBasicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_ISEQUAL_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_CURRENTAMOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentAmount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_CURRENTAMOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FixAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_FIXAMOUNT_OFFSET))(this);
		}

		::System::Void set_FixAmount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_FIXAMOUNT_OFFSET))(this, a1);
		}
	};
}
