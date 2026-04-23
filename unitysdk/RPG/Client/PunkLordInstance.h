#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PunkLordData; }

#define RPG_CLIENT_PUNKLORDINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF26D00)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_CURSETTLEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xAF278F0)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0xAF27910)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ISENTEREDBATTLE_OFFSET UNITYSDK_OFFSET(0xAF27930)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ISPOWERATTACK_OFFSET UNITYSDK_OFFSET(0xAF278D0)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_PUNKLORDDATAREF_OFFSET UNITYSDK_OFFSET(0xAF278B0)
#define RPG_CLIENT_PUNKLORDINSTANCE_KILLEDBYOTHERS_OFFSET UNITYSDK_OFFSET(0xAF27330)
#define RPG_CLIENT_PUNKLORDINSTANCE_REFRESHBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xAF26E20)
#define RPG_CLIENT_PUNKLORDINSTANCE_SETENDDATETIME_OFFSET UNITYSDK_OFFSET(0xAF27150)
#define RPG_CLIENT_PUNKLORDINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0xAF26F10)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_CURSETTLEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xAF27900)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0xAF27920)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_ISPOWERATTACK_OFFSET UNITYSDK_OFFSET(0xAF278E0)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_PUNKLORDDATAREF_OFFSET UNITYSDK_OFFSET(0xAF278C0)
#define RPG_CLIENT_PUNKLORDINSTANCE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xAF271A0)
#define RPG_CLIENT_PUNKLORDINSTANCE__ADDPUNKLORDINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xAF26C30)
#define RPG_CLIENT_PUNKLORDINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF26B90)
#define RPG_CLIENT_PUNKLORDINSTANCE__DELAYSETTLE_OFFSET UNITYSDK_OFFSET(0xAF27110)
#define RPG_CLIENT_PUNKLORDINSTANCE__DOSETTLE_OFFSET UNITYSDK_OFFSET(0xAF27070)
#define RPG_CLIENT_PUNKLORDINSTANCE__NOTIFYPUNKLORDSCORERESULT_OFFSET UNITYSDK_OFFSET(0xAF274F0)
#define RPG_CLIENT_PUNKLORDINSTANCE__ONBATTLEPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xAF27540)
#define RPG_CLIENT_PUNKLORDINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xAF27590)
#define RPG_CLIENT_PUNKLORDINSTANCE__REFRESHBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xAF26E70)
#define RPG_CLIENT_PUNKLORDINSTANCE__REMOVEPUNKLORDINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xAF26D50)
#define RPG_CLIENT_PUNKLORDINSTANCE__SHOWPOWERATTACKTOAST_OFFSET UNITYSDK_OFFSET(0xAF27760)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordInstance_TypeDefinitionIndex = 61469;

	class PunkLordInstance : public ::System::Object
	{
	public:
		::RPG::Client::PunkLordData* _PunkLordDataRef_k__BackingField; // 0x10
		::RPG::Client::TextID _TextID_Time_Out; // 0x18
		::System::Boolean _IsPowerAttack_k__BackingField; // 0x28
		::System::Boolean _IsSettled; // 0x29
		::System::Boolean _IsFirstEnterPunkLordMaze; // 0x2A
		::System::Boolean _IsEnteredBattle; // 0x2B
		::System::UInt32 _CurSettledDamage_k__BackingField; // 0x2C
		::System::Boolean _IsWaitDelaySettle; // 0x30
		::RPG::Client::DateTimePro _EndDateTime_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::PunkLordData* punkLordData, ::System::Boolean isPowerAttack)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__CTOR_OFFSET))(this, punkLordData, isPowerAttack);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshBattleRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_REFRESHBATTLERECORD_OFFSET))(this);
		}

		::System::Void Settle(::System::UInt32 curDamage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SETTLE_OFFSET))(this, curDamage);
		}

		::System::Void SetEndDateTime(::RPG::Client::DateTimePro endDateTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SETENDDATETIME_OFFSET))(this, endDateTime);
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

		::System::Void _OnBattlePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ONBATTLEPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
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

		::System::Void set_PunkLordDataRef(::RPG::Client::PunkLordData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_PUNKLORDDATAREF_OFFSET))(this, value);
		}

		::System::Boolean get_IsPowerAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ISPOWERATTACK_OFFSET))(this);
		}

		::System::Void set_IsPowerAttack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_ISPOWERATTACK_OFFSET))(this, value);
		}

		::System::UInt32 get_CurSettledDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_CURSETTLEDDAMAGE_OFFSET))(this);
		}

		::System::Void set_CurSettledDamage(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_CURSETTLEDDAMAGE_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_EndDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ENDDATETIME_OFFSET))(this);
		}

		::System::Void set_EndDateTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_ENDDATETIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnteredBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ISENTEREDBATTLE_OFFSET))(this);
		}
	};
}
