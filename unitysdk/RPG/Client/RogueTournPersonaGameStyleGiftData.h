#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleGiftDataBase.h"

class Class_0_16E4307DCC419505_703;
class Class_1_120319518E6F6581_104;
class Class_1_412DDC84C44F8B4B;
class Class_1_46389E85463FF7CE;
class Class_1_7BE0B64AF0A0B070_1;
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA3B9F60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA3B9F00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_DYNAMICHINT_OFFSET UNITYSDK_OFFSET(0xA3BA180)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA3BA160)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA3BA170)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B9EF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__INITFROMROW_OFFSET UNITYSDK_OFFSET(0xA3BA080)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA___IFIXBASEPROXY__INITFROMROW_OFFSET UNITYSDK_OFFSET(0xA3BA240)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameStyleGiftData_TypeDefinitionIndex = 55255;

	class RogueTournPersonaGameStyleGiftData : public ::RPG::Client::RogueTournPersonaStyleGiftDataBase
	{
	public:
		::Class_1_412DDC84C44F8B4B* _DynamicHint; // 0x40
		::Class_1_7BE0B64AF0A0B070_1* _BlackboardContext; // 0x48
		::System::UInt32 _UniqueID_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_7BE0B64AF0A0B070_1* blackboardContext)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BE0B64AF0A0B070_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__CTOR_OFFSET))(this, blackboardContext);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleGiftData* Create(::Class_1_120319518E6F6581_104* proto, ::Class_0_16E4307DCC419505_703* blackboardProxyFactory)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleGiftData*(*)(::Class_1_120319518E6F6581_104*, ::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_OFFSET))(proto, blackboardProxyFactory);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleGiftData* Create_1(::System::UInt32 giftId, ::System::UInt32 uniqueID, ::Class_0_16E4307DCC419505_703* blackboardProxyFactory)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleGiftData*(*)(::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_1_OFFSET))(giftId, uniqueID, blackboardProxyFactory);
		}

		::System::Void _InitFromRow(::Class_1_46389E85463FF7CE* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_46389E85463FF7CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__INITFROMROW_OFFSET))(this, row);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::String* get_DynamicHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_DYNAMICHINT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitFromRow(::Class_1_46389E85463FF7CE* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_46389E85463FF7CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA___IFIXBASEPROXY__INITFROMROW_OFFSET))(this, P0);
		}
	};
}
