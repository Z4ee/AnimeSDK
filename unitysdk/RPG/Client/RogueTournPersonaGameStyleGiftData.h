#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleGiftDataBase.h"

class Class_0_16E4307DCC419505_943;
class Class_1_46389E85463FF7CE;
class Class_1_CDB239B5BA2266D7;
class Class_1_D17272E82AE804C2_1032;
class Class_1_FD893FD36F6A3A6D_6;
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDF86F10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDF86EB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_DYNAMICHINT_OFFSET UNITYSDK_OFFSET(0xDF87450)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDF87430)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDF87440)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF86E90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__INITFROMROW_OFFSET UNITYSDK_OFFSET(0xDF87230)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameStyleGiftData_TypeDefinitionIndex = 67747;

	class RogueTournPersonaGameStyleGiftData : public ::RPG::Client::RogueTournPersonaStyleGiftDataBase
	{
	public:
		::Class_1_CDB239B5BA2266D7* _DynamicHint; // 0x40
		::Class_1_FD893FD36F6A3A6D_6* _BlackboardContext; // 0x48
		::System::UInt32 _UniqueID_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_FD893FD36F6A3A6D_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleGiftData* Create(::Class_1_D17272E82AE804C2_1032* a1, ::Class_0_16E4307DCC419505_943* a2)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleGiftData*(*)(::Class_1_D17272E82AE804C2_1032*, ::Class_0_16E4307DCC419505_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleGiftData* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_943* a3)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleGiftData*(*)(::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		::System::Void _InitFromRow(::Class_1_46389E85463FF7CE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_46389E85463FF7CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__INITFROMROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::String* get_DynamicHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_DYNAMICHINT_OFFSET))(this);
		}
	};
}
