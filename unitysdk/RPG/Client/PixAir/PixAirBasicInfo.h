#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirGameSession; }

#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C830DD0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C831020)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_FIXAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C831040)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C831000)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1C830D60)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C831030)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_FIXAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C831050)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C831010)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO_SYNCCURRENTINFO_OFFSET UNITYSDK_OFFSET(0x1C830F70)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C830F60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBasicInfo_TypeDefinitionIndex = 78832;

	class PixAirBasicInfo : public ::System::Object
	{
	public:
		::System::Int32 _MaxHp_k__BackingField; // 0x10
		::System::UInt32 _CurrentAmount_k__BackingField; // 0x14
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
