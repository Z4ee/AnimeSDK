#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PunkLordData; }

#define RPG_CLIENT_PUNKLORDINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDB0720)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_CURSETTLEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xDDB13E0)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0xDDB1400)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ISENTEREDBATTLE_OFFSET UNITYSDK_OFFSET(0xDDB1420)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ISPOWERATTACK_OFFSET UNITYSDK_OFFSET(0xDDB13C0)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_PUNKLORDDATAREF_OFFSET UNITYSDK_OFFSET(0xDDB13A0)
#define RPG_CLIENT_PUNKLORDINSTANCE_KILLEDBYOTHERS_OFFSET UNITYSDK_OFFSET(0xDDB0DD0)
#define RPG_CLIENT_PUNKLORDINSTANCE_REFRESHBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xDDB0880)
#define RPG_CLIENT_PUNKLORDINSTANCE_SETENDDATETIME_OFFSET UNITYSDK_OFFSET(0xDDB0BC0)
#define RPG_CLIENT_PUNKLORDINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0xDDB0970)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_CURSETTLEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xDDB13F0)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0xDDB1410)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_ISPOWERATTACK_OFFSET UNITYSDK_OFFSET(0xDDB13D0)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_PUNKLORDDATAREF_OFFSET UNITYSDK_OFFSET(0xDDB13B0)
#define RPG_CLIENT_PUNKLORDINSTANCE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xDDB0C10)
#define RPG_CLIENT_PUNKLORDINSTANCE__ADDPUNKLORDINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xDDB0610)
#define RPG_CLIENT_PUNKLORDINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDDB0570)
#define RPG_CLIENT_PUNKLORDINSTANCE__DELAYSETTLE_OFFSET UNITYSDK_OFFSET(0xDDB0B80)
#define RPG_CLIENT_PUNKLORDINSTANCE__DOSETTLE_OFFSET UNITYSDK_OFFSET(0xDDB0AE0)
#define RPG_CLIENT_PUNKLORDINSTANCE__NOTIFYPUNKLORDSCORERESULT_OFFSET UNITYSDK_OFFSET(0xDDB0FC0)
#define RPG_CLIENT_PUNKLORDINSTANCE__ONBATTLEPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xDDB1010)
#define RPG_CLIENT_PUNKLORDINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xDDB1060)
#define RPG_CLIENT_PUNKLORDINSTANCE__REFRESHBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xDDB08D0)
#define RPG_CLIENT_PUNKLORDINSTANCE__REMOVEPUNKLORDINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xDDB0770)
#define RPG_CLIENT_PUNKLORDINSTANCE__SHOWPOWERATTACKTOAST_OFFSET UNITYSDK_OFFSET(0xDDB1250)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordInstance_TypeDefinitionIndex = 66753;

	class PunkLordInstance : public ::System::Object
	{
	public:
		::RPG::Client::PunkLordData* _PunkLordDataRef_k__BackingField; // 0x10
		::System::Boolean _IsPowerAttack_k__BackingField; // 0x18
		::System::Boolean _IsWaitDelaySettle; // 0x19
		::RPG::Client::DateTimePro _EndDateTime_k__BackingField; // 0x20
		::System::Boolean _IsFirstEnterPunkLordMaze; // 0x28
		::System::Boolean _IsEnteredBattle; // 0x29
		::System::Boolean _IsSettled; // 0x2A
		::System::UInt32 _CurSettledDamage_k__BackingField; // 0x2C
		::RPG::Client::TextID _TextID_Time_Out; // 0x30

		::System::Void _ctor(::RPG::Client::PunkLordData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshBattleRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_REFRESHBATTLERECORD_OFFSET))(this);
		}

		::System::Void Settle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SETTLE_OFFSET))(this, a1);
		}

		::System::Void SetEndDateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SETENDDATETIME_OFFSET))(this, a1);
		}

		::System::Void TimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_TIMEOUT_OFFSET))(this);
		}

		::System::Void KilledByOthers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_KILLEDBYOTHERS_OFFSET))(this);
		}

		::System::Void _DoSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__DOSETTLE_OFFSET))(this);
		}

		::System::Void _DelaySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__DELAYSETTLE_OFFSET))(this);
		}

		::System::Void _OnBattlePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ONBATTLEPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshBattleRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__REFRESHBATTLERECORD_OFFSET))(this);
		}

		::System::Void _NotifyPunkLordScoreResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__NOTIFYPUNKLORDSCORERESULT_OFFSET))(this);
		}

		::System::Void _AddPunkLordInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ADDPUNKLORDINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemovePunkLordInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__REMOVEPUNKLORDINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _ShowPowerAttackToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__SHOWPOWERATTACKTOAST_OFFSET))(this);
		}

		::RPG::Client::PunkLordData* get_PunkLordDataRef()
		{
			return ((::RPG::Client::PunkLordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_PUNKLORDDATAREF_OFFSET))(this);
		}

		::System::Void set_PunkLordDataRef(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_PUNKLORDDATAREF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPowerAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ISPOWERATTACK_OFFSET))(this);
		}

		::System::Void set_IsPowerAttack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_ISPOWERATTACK_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSettledDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_CURSETTLEDDAMAGE_OFFSET))(this);
		}

		::System::Void set_CurSettledDamage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_CURSETTLEDDAMAGE_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ENDDATETIME_OFFSET))(this);
		}

		::System::Void set_EndDateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_ENDDATETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnteredBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ISENTEREDBATTLE_OFFSET))(this);
		}
	};
}
